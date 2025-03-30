// Đề bài: Bảng chữ cái tiếng anh có 26 ký tự từ 'A' đến 'Z' ('a' đến 'z'). Các chữ cacis dượcd dánh số từ 0 đến 25.

// Input - Ouput
// a       10
// z       25

#include <bits/stdc++.h>
using namespace std;

int kiemTra(char n);

int main() {
    char n;
    cin >> n;
    kiemTra(n);
    
    return 0;
}

int kiemTra(char n) {
    if(n == 'a')
        cout << "0";
        else if(n == 'b')
            cout << "1";
        else if(n == 'c')
            cout << "2";
        else if(n == 'd')
            cout << "3";
        else if (n == 'e')
            cout << "4";
        else if(n == 'f')
            cout << "5";
        else if(n == 'g')
            cout << "6";
        else if(n == 'h')
            cout << "7";
        else if(n == 'i')
            cout << "8";
        else if(n == 'j')
            cout << "9";
        else if(n == 'k')
            cout << "10";
        else if(n == 'l')
            cout << "11";
        else if(n == 'm')
            cout << "12";
        else if(n == 'n')
            cout << "13";
        else if(n == 'o')
            cout << "14";
        else if(n == 'p')
            cout << "15";
        else if(n == 'q')
            cout << "16";
        else if(n == 'r')
            cout << "17";
        else if(n == 's')
            cout << "18";
        else if(n == 't')
            cout << "19";
        else if(n == 'u')
            cout << "20";
        else if(n == 'v')
            cout << "21";
        else if(n == 'w')
            cout << "22";
        else if(n == 'x')
            cout << "23";
        else if(n == 'y')
            cout << "24";
        else if(n == 'z')
            cout << "25";
    else
        cout << "Khong hop le";
    return 0;
}