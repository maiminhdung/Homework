#include <bits/stdc++.h>
using namespace std;

void inChuXuongDong(string chuoi) {
    // Hàm này sẽ in từng ký tự của chuỗi trên một dòng riêng biệt
    for(int i = 0; i < chuoi.length(); i++) {
        cout << chuoi[i];
        if (chuoi[i] == ' ') {
            cout << endl; // Nếu gặp khoảng trắng, in xuống dòng
        }
    }
}

int main() {
    string chuoi;
    getline(cin, chuoi); // Đọc chuỗi từ bàn phím

    inChuXuongDong(chuoi); // Gọi hàm để in chuỗi xuống dòng

    return 0; // Kết thúc chương trình
}