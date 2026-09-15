#include "ChuyenXe.h"

ChuyenXe::ChuyenXe(const string& ma, const string& tg, double gia, int ghe, const string& tt,
                   const string& tuyen, const string& bs)
    : maChuyen(ma), ngayGioChay(tg), giaVe(gia), gheConTrong(ghe), trangThaiChuyen(tt),
      maTuyen(tuyen), bienSo(bs) {}

string ChuyenXe::getMaChuyen() const { return maChuyen; }
string ChuyenXe::getNgayGioChay() const { return ngayGioChay; }
double ChuyenXe::getGiaVe() const { return giaVe; }
int ChuyenXe::getGheConTrong() const { return gheConTrong; }
string ChuyenXe::getTrangThaiChuyen() const { return trangThaiChuyen; }
string ChuyenXe::getMaTuyen() const { return maTuyen; }
string ChuyenXe::getBienSo() const { return bienSo; }

void ChuyenXe::themTramDiQua(const string& maTram) {
    danhSachMaTram.push_back(maTram);
}

const vector<string>& ChuyenXe::getDanhSachMaTram() const {
    return danhSachMaTram;
}

bool ChuyenXe::capNhatGhe(int soLuong) {
    if (gheConTrong + soLuong < 0) return false;
    gheConTrong += soLuong;
    return true;
}

void ChuyenXe::hienThi() const {
    cout << "Ma Chuyen Xe: " << maChuyen 
         << " | Khoi hanh: " << ngayGioChay 
         << " | Gia: " << giaVe << " VND"
         << " | Ghe trong: " << gheConTrong 
         << " | Tuyen: " << maTuyen 
         << " | Bien so xe: " << bienSo << "\n";
    cout << "  Lộ trinh trạm qua: ";
    for (size_t i = 0; i < danhSachMaTram.size(); ++i) {
        cout << danhSachMaTram[i] << (i + 1 < danhSachMaTram.size() ? " -> " : "");
    }
    cout << "\n";
}
