#ifndef XE_H
#define XE_H

#include <string>
#include <iostream>
using namespace std;

class Xe {
private:
    string bienSo;     // PK
    string loaiXe;
    int sucChua;

public:
    Xe(const string& bs = "", const string& loai = "", int cho = 0);

    string getBienSo() const;
    void setBienSo(const string& bs);

    string getLoaiXe() const;
    void setLoaiXe(const string& loai);

    int getSucChua() const;
    void setSucChua(int cho);

    void hienThi() const;
};

#endif
