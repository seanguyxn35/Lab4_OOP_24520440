#include "Sach.h"

// ===== Lớp Sach =====
void Sach::Nhap() {
    cout << "Nhap vao ma sach: ";
    cin >> maSach;
    cin.ignore();
    cout << "Nhap vao ngay nhap: ";
    getline(cin, ngayNhap);
    cout << "Nhap vao don gia: ";
    cin >> donGia;
    cout << "Nhap vao so luong: ";
    cin >> soLuong;
    cout << "Nhap vao nha xuat ban: ";
    cin.ignore();
    getline(cin, nhaXB);
}

void Sach::Xuat() {
    cout << "Ma sach la: " << maSach << endl;
    cout << "Ngay nhap la: " << ngayNhap << endl;
    cout << "Don gia la: " << donGia << endl;
    cout << "So luong la: " << soLuong << endl;
    cout << "Nha xuat ban la: " << nhaXB << endl;
}

float Sach::getTien() {
    return soLuong * donGia;
}

float Sach::getDonGia() {
    return donGia;
}

string Sach::getNXB() {
    return nhaXB;
}

// ===== Lớp sachGK =====
void sachGK::Nhap() {
    Sach::Nhap();
    cout << "Nhap vao tinh trang cua sach: ";
    cin >> tinhTrang;
}

void sachGK::Xuat() {
    Sach::Xuat();
    cout << "Tinh trang cua sach la: " << tinhTrang << endl;
}

float sachGK::getTien() {
    if (tinhTrang == "cu") {
        return Sach::getTien() * 0.5;
    } else {
        return Sach::getTien();
    }
}

// ===== Lớp sachTK =====
void sachTK::Nhap() {
    Sach::Nhap();
    cout << "Nhap vao thue: ";
    cin >> thue;
}

void sachTK::Xuat() {
    Sach::Xuat();
    cout << "Thue la: " << thue << endl;
}

float sachTK::getTien() {
    return Sach::getTien() + thue;
}
