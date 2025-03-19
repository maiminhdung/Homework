// Đề bài: Cho một chữ cái in hoa trong bảng chữ cái tiếng Anh.
// In ra chữ cái liền trước, in thường của chữ cái đó.

// Input - Output
// A       z
// C       b

#include <bits/stdc++.h>
using namespace std;

int main() {
    char a;
    cin >> a;

    if(a == 'A')
        cout << 'z';
        else if (a == 'Z')
            cout << 'a';
    else
        cout << static_cast<char>(tolower(a - 1)); 
}