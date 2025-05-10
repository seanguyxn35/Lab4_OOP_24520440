#ifndef SVIEN_H
#define SVIEN_H

#include <iostream>
#include <string>
using namespace std;

class SVien {
protected:
    string mssv, hoTen, diaChi;
    int tongSoTinChi;
    float diemTB;
public:
    void Nhap();
    void Xuat();
    int getTinChi();
    float getDiemTB();
};

class svCaoDang : public SVien {
    float diemTN;
public:
    void Nhap();
    void Xuat();
    float getDiemTN();
};

class svDaiHoc : public SVien {
    string tenLuanVan;
    float diemLuanVan;
public:
    void Nhap();
    void Xuat();
    float getDiemLV();
};

#endif
