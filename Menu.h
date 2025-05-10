#ifndef MENU_H
#define MENU_H

#include <vector>
#include "GiaoDich.h"

class Menu {
    std::vector<GiaoDichVang> dsVang;
    std::vector<GiaoDichTienTe> dsTienTe;
public:
    void Nhap();
    void Xuat();
    void GiaoDichVangMax();
    void EuroMin();
    void GiaoDichLonHon1Ty();
    void Run();
};

#endif
