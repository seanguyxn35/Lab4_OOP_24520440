#include "QLy.h"
#include <iostream>
using namespace std;

void Menu::NhapDS() {
    cout << "Nhap vao so luong xe noi thanh: ";
    cin >> n;
    city = new xeNoiThanh[n];
    for (int i = 0; i < n; ++i) {
        city[i].Nhap();
    }

    cout << "Nhap vao so luong xe ngoai thanh: ";
    cin >> m;
    province = new xeNgoaiThanh[m];
    for (int i = 0; i < m; ++i) {
        province[i].Nhap();
    }
}

void Menu::XuatDScity() {
    for (int i = 0; i < n; ++i) {
        city[i].Xuat();
    }
}

void Menu::XuatDSprovince() {
    for (int i = 0; i < m; ++i) {
        province[i].Xuat();
    }
}

float Menu::citySum() {
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += city[i].getDoanhThu();
    }
    return sum;
}

float Menu::provinceSum() {
    float sum = 0;
    for (int i = 0; i < m; ++i) {
        sum += province[i].getDoanhThu();
    }
    return sum;
}

void Menu::run() {
    int choice;
    NhapDS();
    do {
        cout << "========Menu=======\n";
        cout << "1. Xuat danh sach xe noi thanh.\n";
        cout << "2. Xuat danh sach xe ngoai thanh.\n";
        cout << "3. Xuat doanh thu cua xe noi thanh.\n";
        cout << "4. Xuat doanh thu cua xe ngoai thanh.\n";
        cout << "5. Xuat tong doanh thu.\n";
        cout << "Nhap vao lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
        case 1: XuatDScity(); break;
        case 2: XuatDSprovince(); break;
        case 3: cout << "Doanh thu cua xe noi thanh: " << citySum() << endl; break;
        case 4: cout << "Doanh thu cua xe ngoai thanh: " << provinceSum() << endl; break;
        case 5: cout << "Tong doanh thu la: " << citySum() + provinceSum() << endl; break;
        }
    } while (choice > 0 && choice < 6);
}
