#ifndef SACH_H
#define SACH_H

#include <iostream>
#include <string>
using namespace std;

class Sach {
protected:
    string maSach, ngayNhap, nhaXB;
    int soLuong;
    float donGia;
public:
    void Nhap();
    void Xuat();
    float getTien();
    float getDonGia();
    string getNXB();
};

class sachGK : public Sach {
    string tinhTrang;
public:
    void Nhap();
    void Xuat();
    float getTien();
};

class sachTK : public Sach {
    float thue;
public:
    void Nhap();
    void Xuat();
    float getTien();
};

#endif
