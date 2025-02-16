#pragma once
#include "Bmp_RGB.h"

struct BMP_static
{
    static void save(const string& file_name, const vector<Bmp_RGB>& my_pixel, const u32 WIDTH, const u32 HEIGHT);
};