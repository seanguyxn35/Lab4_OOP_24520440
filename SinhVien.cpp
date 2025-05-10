#include "SinhVien.h"

void SVien::Nhap() {
    cout << "Nhap vao ma so sinh vien: ";
    cin >> mssv;
    cin.ignore();
    cout << "Nhap vao ho ten sinh vien: ";
    getline(cin, hoTen);
    cout << "Nhap vao dia chi cua sinh vien: ";
    getline(cin, diaChi);
    cout << "Nhap vao tong so tin chi: ";
    cin >> tongSoTinChi;
    cout << "Nhap vao diem TB: ";
    cin >> diemTB;
}

void SVien::Xuat() {
    cout << "Ma so sinh vien: " << mssv << endl;
    cout << "Ho va ten: " << hoTen << endl;
    cout << "Dia chi: " << diaChi << endl;
    cout << "Tong so tin chi: " << tongSoTinChi << endl;
    cout << "Diem trung binh: " << diemTB << endl;
}

int SVien::getTinChi() { return tongSoTinChi; }
float SVien::getDiemTB() { return diemTB; }

void svCaoDang::Nhap() {
    SVien::Nhap();
    cout << "Nhap vao diem thi tot nghiep: ";
    cin >> diemTN;
}

void svCaoDang::Xuat() {
    SVien::Xuat();
    cout << "Diem thi tot nghiep: " << diemTN << endl;
}

float svCaoDang::getDiemTN() { return diemTN; }

void svDaiHoc::Nhap() {
    SVien::Nhap();
    cout << "Nhap vao ten luan van: ";
    cin.ignore();
    getline(cin, tenLuanVan);
    cout << "Nhap vao diem luan van: ";
    cin >> diemLuanVan;
}

void svDaiHoc::Xuat() {
    SVien::Xuat();
    cout << "Ten cua luan van la: " << tenLuanVan << endl;
    cout << "Diem luan van: " << diemLuanVan << endl;
}

float svDaiHoc::getDiemLV() { return diemLuanVan; }
