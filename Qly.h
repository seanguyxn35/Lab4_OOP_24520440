#pragma once
#include "XeNoiThanh.h"
#include "XeNgoaiThanh.h"

class Menu {
    int n, m;
    xeNoiThanh* city;
    xeNgoaiThanh* province;
public:
    void NhapDS();
    void XuatDScity();
    void XuatDSprovince();
    float citySum();
    float provinceSum();
    void run();
};
