using namespace std;
#include <iostream>
#include "xeNoiThanh.h"
void xeNoiThanh::Nhap() {
    Xe::Nhap();
	cout<<"Nhap vao so tuyen: ";
	cin>>soTuyen;
	cout<<"Nhap vao so KM: ";
	cin>>soKM;
}
void xeNoiThanh::Xuat() {
    Xe::Xuat();
	cout<<"So tuyen: "<<soTuyen<<endl;
	cout<<"So KM: "<<soKM<<endl;
}
