#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); // Đọc chuỗi từ đầu vào

    for (char &c : s) {
        if (isupper(c)) { // Kiểm tra nếu ký tự là chữ hoa
            c = tolower(c); // Chuyển đổi thành chữ thường
        } else if (islower(c)) { // Kiểm tra nếu ký tự là chữ thường
            c = toupper(c); // Chuyển đổi thành chữ hoa
        }
    }

    cout << s << endl; // In ra chuỗi đã chuyển đổi
    return 0; // Kết thúc chương trình
}