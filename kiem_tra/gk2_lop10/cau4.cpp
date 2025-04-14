#include <bits/stdc++.h>
using namespace std;

void chuoiKiTu (string s) {
    int soChuoiKiTu = 0; // Biến đếm số ký tự trong chuỗi
    string word;
    stringstream ss(s); // Tạo một đối tượng stringstream từ chuỗi s
    while (ss >> word) { // Tách chuỗi thành từng từ
        soChuoiKiTu++;
    }
    cout << soChuoiKiTu << endl; // In ra số ký tự trong chuỗi
}

int main() {
    string s;
    getline(cin, s); // Đọc chuỗi từ đầu vào

    chuoiKiTu(s); // Gọi hàm chuoiKiTu để đếm số ký tự trong chuỗi
    return 0;
}