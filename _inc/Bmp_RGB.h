#pragma once
#include "__preprocessor__.h"

class Bmp_RGB
{
    u8 r;
    u8 g;
    u8 b;

public:
    Bmp_RGB(u8 _r = 0, u8 _g = 0, u8 _b = 0);

    Bmp_RGB(const Bmp_RGB& other);

    u8 get_r() const;
    u8 get_g() const;
    u8 get_b() const;

    void print(const string& var_name) const;

    Bmp_RGB operator*(double multi);
    Bmp_RGB& operator*=(double multi);
    Bmp_RGB& operator+=(const Bmp_RGB& other);
    Bmp_RGB operator+(const Bmp_RGB& other);
    Bmp_RGB& operator-=(const Bmp_RGB& other);
    Bmp_RGB operator-(const Bmp_RGB& other);
};
