#ifndef MENU_H
#define MENU_H

#include "Sach.h"

class Menu {
    sachGK SGK[5];
    sachTK STK[5];
    int n, m;
public:
    void NhapDS();
    void XuatDS();
    float tinhTongGK();
    float tinhTongTK();
    float TbCongTK();
    void findX();
    void Run();
};

#endif
