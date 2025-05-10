#include "Menu.h"
#include <iostream>
using namespace std;

void Menu::Nhap() {
    int n;
    cout << "Nhap so giao dich vang: "; cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "--- Giao dich vang " << i+1 << " ---\n";
        GiaoDichVang gd;
        gd.Nhap();
        dsVang.push_back(gd);
    }

    cout << "Nhap so giao dich tien te: "; cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "--- Giao dich tien te " << i+1 << " ---\n";
        GiaoDichTienTe gd;
        gd.Nhap();
        dsTienTe.push_back(gd);
    }
}

void Menu::Xuat() {
    cout << "\n--- Danh sach giao dich vang ---\n";
    for (const auto& gd : dsVang) gd.Xuat();

    cout << "\n--- Danh sach giao dich tien te ---\n";
    for (const auto& gd : dsTienTe) gd.Xuat();
}

void Menu::GiaoDichVangMax() {
    if (dsVang.empty()) {
        cout << "Khong co giao dich vang nao.\n";
        return;
    }
    double maxTT = dsVang[0].ThanhTien();
    GiaoDichVang maxGD = dsVang[0];
    for (const auto& gd : dsVang) {
        if (gd.ThanhTien() > maxTT) {
            maxTT = gd.ThanhTien();
            maxGD = gd;
        }
    }
    cout << "\nGiao dich vang co thanh tien cao nhat:\n";
    maxGD.Xuat();
}

void Menu::EuroMin() {
    bool found = false;
    double minTT = 1e18;
    GiaoDichTienTe minGD;
    for (const auto& gd : dsTienTe) {
        if (gd.getLoaiTien() == "EURO" && gd.ThanhTien() < minTT) {
            minTT = gd.ThanhTien();
            minGD = gd;
            found = true;
        }
    }
    if (found) {
        cout << "\nGiao dich EURO co thanh tien thap nhat:\n";
        minGD.Xuat();
    } else {
        cout << "Khong co giao dich EURO nao.\n";
    }
}

void Menu::GiaoDichLonHon1Ty() {
    cout << "\nCac giao dich co thanh tien > 1 ty:\n";
    for (const auto& gd : dsVang)
        if (gd.ThanhTien() > 1e9) gd.Xuat();

    for (const auto& gd : dsTienTe)
        if (gd.ThanhTien() > 1e9) gd.Xuat();
}

void Menu::Run() {
    int choice;
    Nhap();
    do {
        cout << "\n=========== MENU ==========\n";
        cout << "1. Xuat danh sach giao dich\n";
        cout << "2. Giao dich vang co thanh tien cao nhat\n";
        cout << "3. Giao dich EURO co thanh tien thap nhat\n";
        cout << "4. Liet ke giao dich co thanh tien > 1 ty\n";
        cout << "5. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1: Xuat(); break;
            case 2: GiaoDichVangMax(); break;
            case 3: EuroMin(); break;
            case 4: GiaoDichLonHon1Ty(); break;
            case 5: cout << "Tam biet!\n"; break;
            default: cout << "Lua chon khong hop le!\n"; break;
        }
    } while (choice != 5);
}
