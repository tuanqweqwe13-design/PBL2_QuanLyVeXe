#ifndef VEXE_H
#define VEXE_H

#include <string>
#include <iostream>
using namespace std;

class VeXe {
private:
    string maVe;           // PK
    string soGheDat;
    double giaThucTe;
    string trangThaiVe;
    string loaiVe;

    string maChuyen;       // FK: Chuyen xe nao
    string maKH;           // FK: Hanh khach nao

public:
    VeXe(const string& ma = "", const string& ghe = "", 
         double gia = 0.0, const string& tt = "", const string& loai = "",
         const string& chuyen = "", const string& kh = "");

    string getMaVe() const;
    string getSoGheDat() const;
    double getGiaThucTe() const;
    string getTrangThaiVe() const;
    string getLoaiVe() const;
    string getMaChuyen() const;
    string getMaKH() const;

    void setTrangThaiVe(const string& tt);
    void hienThi() const;
};

#endif
