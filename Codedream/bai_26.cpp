// Đề bài: Cho một số nguyên 2 chữ số. In ra chữ số hàng chục và đơn vị bằng C/C++

// Input: 94 
// Output: 9 4

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    cout << a / 10 << endl << a % 10;
    return 0;
}