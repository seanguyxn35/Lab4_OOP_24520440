#include "Menu.h"

void Menu::NhapDS() {
    do {
        cout << "Nhap vao so luong sach giao khoa: ";
        cin >> n;
    } while (n < 0 || n > 5);
    for (int i = 0; i < n; i++) {
        SGK[i].Nhap();
    }

    do {
        cout << "Nhap vao so luong sach tham khao: ";
        cin >> m;
    } while (m < 0 || m > 5);
    for (int i = 0; i < m; i++) {
        STK[i].Nhap();
    }
}

void Menu::XuatDS() {
    for (int i = 0; i < n; i++) {
        cout << "-------------------" << endl;
        SGK[i].Xuat();
    }
    for (int i = 0; i < m; i++) {
        cout << "-------------------" << endl;
        STK[i].Xuat();
    }
}

float Menu::tinhTongGK() {
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += SGK[i].getTien();
    }
    return sum;
}

float Menu::tinhTongTK() {
    float sum = 0;
    for (int i = 0; i < m; ++i) {
        sum += STK[i].getTien();
    }
    return sum;
}

float Menu::TbCongTK() {
    float sum = 0;
    for (int i = 0; i < m; ++i) {
        sum += STK[i].getDonGia();
    }
    return (m > 0) ? sum / m : 0;
}

void Menu::findX() {
    string key;
    cout << "Nhap vao nha xuat ban can tim: ";
    cin >> key;
    bool found = false;
    cout << "Danh sach can tim la: " << endl;
    for (int i = 0; i < n; ++i) {
        if (SGK[i].getNXB() == key) {
            cout << "-------------------" << endl;
            SGK[i].Xuat();
            found = true;
        }
    }
    if (!found) cout << "Khong tim thay!." << endl;
}

void Menu::Run() {
    int choice = 0;
    NhapDS();
    do {
        cout << "--------MENU--------\n";
        cout << "1. Xuat ra danh sach cua 2 loai sach.\n";
        cout << "2. Tong thanh tien cua tung loai sach.\n";
        cout << "3. Trung binh cong cua sach tham khao.\n";
        cout << "4. Tim nha xuat ban cua sach giao khoa.\n";
        cout << "5. Exit\n";
        cout << "Nhap vao lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
        case 1:
            XuatDS();
            break;
        case 2:
            cout << "SGK: " << tinhTongGK() << endl;
            cout << "STK: " << tinhTongTK() << endl;
            break;
        case 3:
            cout << "Trung binh cong cua sach tham khao la: " << TbCongTK() << endl;
            break;
        case 4:
            findX();
            break;
        }
    } while (choice > 0 && choice <= 4);
}
