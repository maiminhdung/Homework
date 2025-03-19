// Đề bài: Bảng chữ cái tiếng anh có 26 ký tự từ 'A' đến 'Z' ('a' đến 'z'). In chữ cái được đánh số từ 1 đến 26.

// Input - Ouput
// 10      J j

#include <bits/stdc++.h>
using namespace std;

int kiemTra(int n);

int main() {
    int n;
    cin >> n;
    kiemTra(n);

    return 0;
}

int kiemTra(int n) {
    if(n == 1)
        cout << "A" << " " << "a";
        else if(n == 2)
            cout << "B" << " " << "b";
        else if(n == 3)
            cout << "C" << " " << "c";
        else if(n == 4)
            cout << "D" << " " << "d";
        else if (n == 5)
            cout << "E" << " " << "e";
        else if(n == 6)
            cout << "F" << " " << "f";
        else if(n == 7)
            cout << "G" << " " << "g";
        else if(n == 8)
            cout << "H" << " " << "h";
        else if(n == 9)
            cout << "I" << " " << "i";
        else if(n == 10)
            cout << "J" << " " << "j";
        else if(n == 11)
            cout << "K" << " " << "k";
        else if(n == 12)
            cout << "L" << " " << "l";
        else if(n == 13)
            cout << "M" << " " << "m";
        else if(n == 14)
            cout << "N" << " " << "n";
        else if(n == 15)
            cout << "O" << " " << "o";
        else if(n == 16)
            cout << "P" << " " << "p";
        else if(n == 17)
            cout << "Q" << " " << "q";
        else if(n == 18)
            cout << "R" << " " << "r";
        else if(n == 19)
            cout << "S" << " " << "s";
        else if(n == 20)
            cout << "T" << " " << "t";
        else if(n == 21)
            cout << "U" << " " << "u";
        else if(n == 22)
            cout << "V" << " " << "v";
        else if(n == 23)
            cout << "W" << " " << "w";
        else if(n == 24)
            cout << "X" << " " << "x";
        else if(n == 25)
            cout << "Y" << " " << "y";
        else if(n == 26)
            cout << "Z" << " " << "z";
    else
        cout << "Khong hop le";
    return 0;
}