#ifndef QLY_H
#define QLY_H

#include "SinhVien.h"

class QLy {
    int n, m;
    svDaiHoc DH[100];
    svCaoDang CD[100];
public:
    void NhapDSSV();
    void XuatDSSV();
    void svDaiHocCaoDiemNhat();
    void SvDuDieuKienTN();
    void SvKhongDieuKienTN();
    void run();
};

#endif
