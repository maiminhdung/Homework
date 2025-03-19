// Đề bài: Cho một kí tự in hoa trong bảng chữ cái tiếng Anh, in ra kí tự đó ở dạng in thường.

// Input - Ouput
// A       a

#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    n = tolower(n[0]);
    cout << n;
    return 0;
}