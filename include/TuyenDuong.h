#ifndef TUYENDUONG_H
#define TUYENDUONG_H

#include <string>
#include <iostream>
using namespace std;

class TuyenDuong {
private:
    string maTuyen;    // PK
    string diemDi;
    string diemDen;
    double khoangCach;
    string maNVQuanLy; // FK: Nhan vien phu trach

public:
    TuyenDuong(const string& ma = "", const string& di = "", 
               const string& den = "", double kc = 0.0, const string& nv = "");

    string getMaTuyen() const;
    void setMaTuyen(const string& ma);

    string getDiemDi() const;
    string getDiemDen() const;
    double getKhoangCach() const;
    string getMaNVQuanLy() const;

    void hienThi() const;
};

#endif
