#include "HanhKhach.h"

HanhKhach::HanhKhach(const string& ma, const string& ten, const string& sdt, const string& dt)
    : Nguoi(ten, sdt), maKH(ma), doiTuong(dt) {}

string HanhKhach::getMaKH() const { return maKH; }
void HanhKhach::setMaKH(const string& ma) { maKH = ma; }

string HanhKhach::getDoiTuong() const { return doiTuong; }
void HanhKhach::setDoiTuong(const string& dt) { doiTuong = dt; }

void HanhKhach::hienThi() const {
    cout << "Ma Hanh Khach : " << maKH << " | ";
    Nguoi::hienThi();
    cout << " | Doi tuong: " << doiTuong << "\n";
}