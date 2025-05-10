#include "GiaoDich.h"

void GiaoDich::Nhap() {
    cout << "Nhap ma giao dich: "; cin >> maGD;
    cout << "Nhap ngay giao dich: "; cin >> ngayGD;
    cout << "Nhap don gia: "; cin >> donGia;
    cout << "Nhap so luong: "; cin >> soLuong;
}

void GiaoDich::Xuat() const {
    cout << "Ma GD: " << maGD << ", Ngay: " << ngayGD
         << ", Don gia: " << donGia << ", So luong: " << soLuong << endl;
}

// --- GiaoDichVang ---
void GiaoDichVang::Nhap() {
    GiaoDich::Nhap();
    cout << "Nhap loai vang: "; cin >> loaiVang;
}

void GiaoDichVang::Xuat() const {
    GiaoDich::Xuat();
    cout << "Loai vang: " << loaiVang << ", Thanh tien: " << ThanhTien() << endl;
}

long long GiaoDichVang::ThanhTien() const {
    return donGia * soLuong;
}

// --- GiaoDichTienTe ---
void GiaoDichTienTe::Nhap() {
    GiaoDich::Nhap();
    cout << "Nhap loai tien (VND/USD/EURO): "; cin >> loaiTien;
    cout << "Nhap ti gia: "; cin >> tiGia;
}

void GiaoDichTienTe::Xuat() const {
    GiaoDich::Xuat();
    cout << "Loai tien: " << loaiTien << ", Ti gia: " << tiGia
         << ", Thanh tien: " << ThanhTien() << endl;
}

long long GiaoDichTienTe::ThanhTien() const {
    if (loaiTien == "VND") return donGia * soLuong;
    return donGia * soLuong * tiGia;
}

string GiaoDichTienTe::getLoaiTien() const {
    return loaiTien;
}
