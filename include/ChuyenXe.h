#ifndef CHUYENXE_H
#define CHUYENXE_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class ChuyenXe {
private:
    string maChuyen;       // PK
    string ngayGioChay;
    double giaVe;
    int gheConTrong;
    string trangThaiChuyen;

    string maTuyen;        // FK: Thuoc tuyen nao
    string bienSo;         // FK: Su dung xe nao
    vector<string> danhSachMaTram; // FK N-M: Cac tram di qua

public:
    ChuyenXe(const string& ma = "", const string& tg = "", 
             double gia = 0.0, int ghe = 0, const string& tt = "",
             const string& tuyen = "", const string& bs = "");

    string getMaChuyen() const;
    string getNgayGioChay() const;
    double getGiaVe() const;
    int getGheConTrong() const;
    string getTrangThaiChuyen() const;
    string getMaTuyen() const;
    string getBienSo() const;

    void themTramDiQua(const string& maTram);
    const vector<string>& getDanhSachMaTram() const;
    bool capNhatGhe(int soLuong);

    void hienThi() const;
};

#endif
