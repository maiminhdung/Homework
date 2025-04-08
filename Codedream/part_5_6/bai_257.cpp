#include <bits/stdc++.h>
using namespace std;

void layChuoiX(string chuoi, int x) {
    // Hàm này sẽ in từng ký tự của chuỗi trên một dòng riêng biệt
    stringstream ss(chuoi); // Tạo một stringstream từ chuỗi
    string word;
    int dem = 0; // Biến đếm số từ
    while (ss >> word) {
        dem++;
        if (dem == x) {
            cout << word << endl; // In ra từ thứ x
            break; // Thoát khỏi vòng lặp khi đã in từ thứ x
        }
    }
}

int main() {
    int x;
    string chuoi;
    
    cin >> x; // Đọc số nguyên từ bàn phím
    cin.ignore(); // Bỏ qua ký tự newline còn lại trong buffer
    getline(cin, chuoi); // Đọc chuỗi từ bàn phím

    layChuoiX(chuoi, x); // Gọi hàm để in từ thứ x trong chuỗi

    return 0; // Kết thúc chương trình 
}