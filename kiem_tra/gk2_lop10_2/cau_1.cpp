#include <bits/stdc++.h>
using namespace std;
int main() {
    int xa, xb, ya, yb;
    cout << "Nhap toa do A(xa, ya): ";
    cin >> xa >> ya;
    
    cout << "Nhap toa do B(xb, yb): ";
    cin >> xb >> yb;

    // Tinh khoang cach AB
    double khoangCach = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
    cout << "Khoang cach AB = " << khoangCach << endl;

    return 0;
}