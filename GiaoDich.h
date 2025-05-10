#ifndef GIAODICH_H
#define GIAODICH_H

#include <iostream>
#include <string>
using namespace std;

class GiaoDich {
protected:
    string maGD, ngayGD;
    double donGia;
    int soLuong;
public:
    virtual void Nhap();
    virtual void Xuat() const;
    virtual long long ThanhTien() const = 0;
    virtual ~GiaoDich() {}
};

class GiaoDichVang : public GiaoDich {
    string loaiVang;
public:
    void Nhap() override;
    void Xuat() const override;
    long long ThanhTien() const override;
};

class GiaoDichTienTe : public GiaoDich {
    double tiGia;
    string loaiTien;
public:
    void Nhap() override;
    void Xuat() const override;
    long long ThanhTien() const override;
    string getLoaiTien() const;
};

#endif
