#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); // Đọc chuỗi từ đầu vào

    int demHoa = 0, demThuong = 0, demSo = 0; // Biến đếm số ký tự hoa
    for (char &c : s) {
        if (isupper(c)) { // Kiểm tra nếu ký tự là chữ hoa
            demHoa++; // Tăng biến đếm số ký tự hoa
        } else if (islower(c)) { // Kiểm tra nếu ký tự là chữ thường
            demThuong++; // Tăng biến đếm số ký tự thường
        } else if (isdigit(c)) { // Kiểm tra nếu ký tự là chữ số
            demSo++; // Tăng biến đếm số ký tự số
        }
    }
    cout << demHoa << " " << demThuong << " " << demSo << endl; // In ra số ký tự hoa, thường và số
    return 0; // Kết thúc chương trình
}