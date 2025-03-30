// Đề bài: Cho chuỗi s, in ra chuỗi s và chuỗi đảo ngược của s (in liền nhau).
// Input: Nhập chuỗi gồm các ký tự thường viết liền không dấu, không vượt quá 255 ký tự.
// Example: Input - Ouput
//          code    codeedoc

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a; // Nhập giá trị a

    b = a; // Gán giá trị của a cho b
    reverse(b.begin(), b.end()); // Đảo ngược chuỗi b

    cout << a << b << endl;
    return 0;
}