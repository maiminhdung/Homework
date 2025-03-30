// Đề bài: Cho một số nguyên có 7 chữ số. In ra theo các yêu cầu sau:
// 1. Dòng 1 in ra 5 chữ số cuối của số đó (Nếu có xuất hiện chữ số ở đầu thì loại bỏ số 0 đó).
// 2. Dòng 2 in ra số đó sau khi bỏ đi 3 chữ số cuối cùng.
// 3. Dòng 3 in ra chữ số hàng nghìn số đó.
// 4. Dòng 4 in ra chữ số hàng nghìn với chũ số hàng trăm số đó.

// Input: 2107593 
// Output: 7593 2107 7 75

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    cout << a % 100000 << endl << a /1000 << endl << (a / 1000) % 10 << endl << (a / 100) % 100; 
}