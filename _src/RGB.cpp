#include "RGB.h"

RGB::RGB(u8 _r, u8 _g, u8 _b) : c_init(r), c_init(g), c_init(b) {}

RGB::RGB(const RGB& other) : r(other.r), g(other.g), b(other.b) {}

u8 RGB::get_r() const { return r; }
u8 RGB::get_g() const { return g; }
u8 RGB::get_b() const { return b; }

void RGB::print(const string& var_name) const
{
    line(var_name);

    varr((int)r);
    varr((int)g);
    var((int)b);
}

RGB RGB::operator*(double multi)
{
    return {static_cast<u8>(r * multi), static_cast<u8>(g * multi), static_cast<u8>(b * multi)};
}
RGB& RGB::operator*=(double multi)
{
    r = static_cast<u8>(r * multi);
    g = static_cast<u8>(g * multi);
    b = static_cast<u8>(b * multi);

    return *this;
}
RGB& RGB::operator+=(const RGB& other)
{
    r += other.r;
    g += other.g;
    b += other.b;

    return *this;
}
RGB RGB::operator+(const RGB& other) { return RGB(r + other.r, g + other.g, b + other.b); }
RGB& RGB::operator-=(const RGB& other)
{
    r -= other.r;
    g -= other.g;
    b -= other.b;

    return *this;
}
RGB RGB::operator-(const RGB& other) { return RGB(r - other.r, g - other.g, b - other.b); }