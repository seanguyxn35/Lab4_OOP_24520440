#pragma once
#include <iostream>
#include <string>
using namespace std;

class Xe {
protected:
    string maSo, hoTenTX, soXe;
    float doanhThu;
public:
    void Nhap();
    void Xuat();
    float getDoanhThu();
};
