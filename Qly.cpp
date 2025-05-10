#include "QLy.h"

void QLy::NhapDSSV() {
    cout << "Nhap vao so luong sinh vien dai hoc: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "--- Sinh vien dai hoc " << i + 1 << " ---\n";
        DH[i].Nhap();
    }
    cout << "Nhap vao so luong sinh vien cao dang: ";
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cout << "--- Sinh vien cao dang " << i + 1 << " ---\n";
        CD[i].Nhap();
    }
}

void QLy::XuatDSSV() {
    cout << "\nDanh sach sinh vien dai hoc:\n";
    for (int i = 0; i < n; ++i) {
        DH[i].Xuat();
        cout << "------------\n";
    }
    cout << "Danh sach sinh vien cao dang:\n";
    for (int i = 0; i < m; ++i) {
        CD[i].Xuat();
        cout << "------------\n";
    }
}

void QLy::svDaiHocCaoDiemNhat() {
    svDaiHoc a = DH[0];
    float max = DH[0].getDiemTB();
    for (int i = 1; i < n; ++i) {
        if (DH[i].getDiemTB() > max) {
            max = DH[i].getDiemTB();
            a = DH[i];
        }
    }
    cout << "\nSinh vien dai hoc co diem trung binh cao nhat la:\n";
    a.Xuat();
}

void QLy::SvDuDieuKienTN() {
    bool found1 = false, found2 = false;
    cout << "\nDanh sach sinh vien DU dieu kien tot nghiep:\n";
    cout << "Sinh vien he cao dang:\n";
    for (int i = 0; i < m; ++i) {
        if (CD[i].getTinChi() >= 110 && CD[i].getDiemTB() >= 5 && CD[i].getDiemTN() >= 5) {
            CD[i].Xuat();
            found1 = true;
            cout << "------------\n";
        }
    }
    if (!found1) cout << "Khong tim thay!\n";

    cout << "Sinh vien he dai hoc:\n";
    for (int i = 0; i < n; ++i) {
        if (DH[i].getTinChi() >= 145 && DH[i].getDiemTB() >= 5 && DH[i].getDiemLV() >= 5) {
            DH[i].Xuat();
            found2 = true;
            cout << "------------\n";
        }
    }
    if (!found2) cout << "Khong tim thay!\n";
}

void QLy::SvKhongDieuKienTN() {
    bool found1 = false, found2 = false;
    cout << "\nDanh sach sinh vien KHONG DU dieu kien tot nghiep:\n";
    cout << "Sinh vien he cao dang:\n";
    for (int i = 0; i < m; ++i) {
        if (CD[i].getTinChi() < 110 || CD[i].getDiemTB() < 5 || CD[i].getDiemTN() < 5) {
            CD[i].Xuat();
            found1 = true;
            cout << "------------\n";
        }
    }
    if (!found1) cout << "Khong tim thay!\n";

    cout << "Sinh vien he dai hoc:\n";
    for (int i = 0; i < n; ++i) {
        if (DH[i].getTinChi() < 145 || DH[i].getDiemTB() < 5 || DH[i].getDiemLV() < 5) {
            DH[i].Xuat();
            found2 = true;
            cout << "------------\n";
        }
    }
    if (!found2) cout << "Khong tim thay!\n";
}

void QLy::run() {
    int choice;
    NhapDSSV();
    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Xuat danh sach sinh vien\n";
        cout << "2. Tim sinh vien dai hoc co diem TB cao nhat\n";
        cout << "3. Liet ke sinh vien DU dieu kien tot nghiep\n";
        cout << "4. Liet ke sinh vien KHONG du dieu kien tot nghiep\n";
        cout << "5. Thoat chuong trinh\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1: XuatDSSV(); break;
            case 2: svDaiHocCaoDiemNhat(); break;
            case 3: SvDuDieuKienTN(); break;
            case 4: SvKhongDieuKienTN(); break;
        }
    } while (choice > 0 && choice < 5);
}
