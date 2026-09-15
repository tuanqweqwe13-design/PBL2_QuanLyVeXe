#ifndef HANHKHACH_H
#define HANHKHACH_H

#include "Nguoi.h"
using namespace std;

class HanhKhach : public Nguoi {
private:
    string maKH;       // PK
    string doiTuong;   // Hoc sinh, Sinh vien, Nguoi cao tuoi, Thuong...

public:
    HanhKhach(const string& ma = "", const string& ten = "", 
              const string& sdt = "", const string& dt = "");

    string getMaKH() const;
    void setMaKH(const string& ma);

    string getDoiTuong() const;
    void setDoiTuong(const string& dt);

    void hienThi() const override;
};

#endif
