#include "Xe.h"

void Xe::Nhap() {
    cout << "Nhap vao ma so xe: ";
    cin >> maSo;
    cout << "Nhap vao ho ten TX: ";
    cin >> hoTenTX;
    cout << "Nhap vao so xe: ";
    cin >> soXe;
    cout << "Nhap vao doanh thu: ";
    cin >> doanhThu;
}

void Xe::Xuat() {
    cout << "Ma so xe: " << maSo << endl;
    cout << "Ho va ten tai xe: " << hoTenTX << endl;
    cout << "So xe: " << soXe << endl;
    cout << "Doanh thu: " << doanhThu << endl;
}

float Xe::getDoanhThu() {
    return doanhThu;
}
