#pragma once
#include "__preprocessor__.h"

class RGB
{
    u8 r;
    u8 g;
    u8 b;

public:
    RGB(u8 _r = 0, u8 _g = 0, u8 _b = 0);

    RGB(const RGB& other);

    u8 get_r() const;
    u8 get_g() const;
    u8 get_b() const;

    void print(const string& var_name) const;

    RGB operator*(double multi);
    RGB& operator*=(double multi);
    RGB& operator+=(const RGB& other);
    RGB operator+(const RGB& other);
    RGB& operator-=(const RGB& other);
    RGB operator-(const RGB& other);
};
