#include <bits/stdc++.h>
using namespace std;

void tinhChuVi(int a, int b, int c, bool tamGiacCan, bool tamGiacDeu, bool tamGiacThuong) {
    if(tamGiacCan) {
        cout << "Chu vi tam giac can: " << 2 * a + c << endl;
    } else if (tamGiacDeu) {
        cout << "Chu vi tam giac deu: " << 3 * a << endl;
    } else if (tamGiacThuong) {
        cout << "Chu vi tam giac thuong: " << a + b + c << endl;
    }
}

void tinhDienTich(int a, int b, int c, bool tamGiacCan, bool tamGiacDeu, bool tamGiacThuong) {
    if(tamGiacCan) {
        cout << "Dien tich tam giac can: " << (a * b) / 2 << endl;
    } else if (tamGiacDeu) {
        cout << "Dien tich tam giac deu: " << (sqrt(3) / 4) * a * a << endl;
    } else if (tamGiacThuong) {
        double p = (a + b + c) / 2.0;
        cout << "Dien tich tam giac thuong: " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
    }
}


int main() {
    int a, b, c;
    cout << "Nhap do dai 3 canh: ";
    cin >> a >> b >> c;

    bool tamGiacCan = false;
    bool tamGiacDeu = false;
    bool tamGiacThuong = false;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Tam giac deu" << endl;
            tamGiacDeu = true;
        } else if (a == b || b == c || a == c) {
            cout << "Tam giac can" << endl;
            tamGiacCan = true;
        } else {
            cout << "Tam giac thuong" << endl;
            tamGiacThuong = true;
        }
    } else {
        cout << "KKhong phai la tam giac" << endl;
    }

    tinhChuVi(a, b, c, tamGiacCan, tamGiacDeu, tamGiacThuong);
    tinhDienTich(a, b, c, tamGiacCan, tamGiacDeu, tamGiacThuong);

    return 0;
}