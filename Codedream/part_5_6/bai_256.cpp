#include <bits/stdc++.h>
using namespace std;

int main() {
    string chuoi;
    getline(cin, chuoi); // Đọc chuỗi từ bàn phím

    stringstream ss(chuoi); // Tạo một stringstream từ chuỗi
    string word;
    int dem = 0; // Biến đếm số từ
    while (ss >> word) {
        ++dem;
    }

    cout << dem << endl; // In ra độ dài của chuỗi
    return 0; // Kết thúc chương trình 
}