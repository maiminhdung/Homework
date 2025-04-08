#include <bits/stdc++.h>
using namespace std;

void hangKiTu(string s, string s1) {
    size_t hangKiTu = s.find("code"); // Tìm vị trí của chuỗi "code" trong chuỗi s
    if (hangKiTu != string::npos) { // Nếu tìm thấy chuỗi "code"
        s.insert(hangKiTu + 4, s1); // Chèn chuỗi s1 vào vị trí tìm thấy chuỗi "code"
        cout << s << endl; // Chèn chuỗi thứ hai vào vị trí tìm thấy chuỗi "code"
    } else {
        cout << s << endl; // Nếu không tìm thấy chuỗi "code", in ra chuỗi ban đầu
    }
}

int main() {
    string s, s1;
    cin >> s >> s1;

    hangKiTu(s, s1);

    return 0; // Kết thúc chương trình
}