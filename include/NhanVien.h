#ifndef NHANVIEN_H
#define NHANVIEN_H

#include "Nguoi.h"
using namespace std;

class NhanVien : public Nguoi {
private:
    string maNV;       // PK
    string chucVu;

public:
    NhanVien(const string& ma = "", const string& ten = "", 
             const string& sdt = "", const string& cv = "");

    string getMaNV() const;
    void setMaNV(const string& ma);

    string getChucVu() const;
    void setChucVu(const string& cv);

    void hienThi() const override;
};

#endif
