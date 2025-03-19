// Đề bài: Cho hai chữ cái in thường trong bảng chữ cái tiếng Anh. In ra số lượng chữ cái nằm giữa chúng.

// Input - Ouput
// a e     3        (Các chữ cái nằm giữa a và e là b, c, d)
// d a     2        (Các chữ cái nằm giữa d và a là b, c)

#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;

    cout << max(a - b - 1, b - a - 1);
    return 0;
}