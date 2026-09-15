#ifndef TRAMXE_H
#define TRAMXE_H

#include <string>
#include <iostream>
using namespace std;

class TramXe {
private:
    string maTram;     // PK
    string tenTram;
    int thuTuTram;
    string diaChi;

public:
    TramXe(const string& ma = "", const string& ten = "", 
           int thutu = 0, const string& dc = "");

    string getMaTram() const;
    void setMaTram(const string& ma);

    string getTenTram() const;
    void setTenTram(const string& ten);

    int getThuTuTram() const;
    void setThuTuTram(int thutu);

    string getDiaChi() const;
    void setDiaChi(const string& dc);

    void hienThi() const;
};

#endif
