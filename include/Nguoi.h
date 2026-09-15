#ifndef NGUOI_H
#define NGUOI_H

#include <string>
#include <iostream>

using namespace std;

class Nguoi {
protected:
    string hoTen;
    string soDienThoai;

public:
    Nguoi(const string& ten = "", const string& sdt = "");
    virtual ~Nguoi() = default;

    string getHoTen() const;
    void setHoTen(const string& ten);

    string getSoDienThoai() const;
    void setSoDienThoai(const string& sdt);

    virtual void hienThi() const;
};

#endif