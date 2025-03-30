// Đề bài: Cho một ký tự, hãy đưa ra số hiệu cho bảng mã ASCII và ngược lại, 
// cho một số nguyên tương ứng là số hiệu của một ký tự, đưa ra ký tự đó.

// Input - Output
//  A        65
//  97       a

#include <bits/stdc++.h>
using namespace std;

int main() {
    char a;
    int b;
    cin >> a >> b;

    cout << static_cast<int>(a) << endl << static_cast<char>(b);
    return 0;
}