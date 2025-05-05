#include <iostream>
using namespace std;
#include "xeNgoaiThanh.h"
void xeNgoaiThanh::Nhap() {
	Xe::Nhap();
	cout<<"Nhap vao noi den: ";
	cin>>noiDen;
	cout<<"Nhap vao so ngay di: ";
	cin>>soNgayDi;
}
void xeNgoaiThanh::Xuat() {
    Xe::Xuat();
	cout<<"Noi den: "<<noiDen<<endl;
	cout<<"So ngay di: "<<soNgayDi<<endl;
}
