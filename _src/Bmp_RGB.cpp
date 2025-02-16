#include "Bmp_RGB.h"

Bmp_RGB::Bmp_RGB(u8 _r, u8 _g, u8 _b) : c_init(r), c_init(g), c_init(b) {}

Bmp_RGB::Bmp_RGB(const Bmp_RGB& other) : r(other.r), g(other.g), b(other.b) {}

u8 Bmp_RGB::get_r() const { return r; }
u8 Bmp_RGB::get_g() const { return g; }
u8 Bmp_RGB::get_b() const { return b; }

void Bmp_RGB::print(const string& var_name) const
{
    line(var_name);

    varr((int)r);
    varr((int)g);
    var((int)b);
}

Bmp_RGB Bmp_RGB::operator*(double multi)
{
    return {static_cast<u8>(r * multi), static_cast<u8>(g * multi), static_cast<u8>(b * multi)};
}
Bmp_RGB& Bmp_RGB::operator*=(double multi)
{
    r = static_cast<u8>(r * multi);
    g = static_cast<u8>(g * multi);
    b = static_cast<u8>(b * multi);

    return *this;
}
Bmp_RGB& Bmp_RGB::operator+=(const Bmp_RGB& other)
{
    r += other.r;
    g += other.g;
    b += other.b;

    return *this;
}
Bmp_RGB Bmp_RGB::operator+(const Bmp_RGB& other) { return Bmp_RGB(r + other.r, g + other.g, b + other.b); }
Bmp_RGB& Bmp_RGB::operator-=(const Bmp_RGB& other)
{
    r -= other.r;
    g -= other.g;
    b -= other.b;

    return *this;
}
Bmp_RGB Bmp_RGB::operator-(const Bmp_RGB& other) { return Bmp_RGB(r - other.r, g - other.g, b - other.b); }