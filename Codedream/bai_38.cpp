// Đề bài: Blue có một chuỗi ký tự gồm các chữ cái trong bảng tiếng Anh in thường. Green hỏi Blue chữ cái thứ 2 và 7 của chuỗi dưới dạng in hoa là chữ cái nào? Hãy giúp Blue trả lời nhé!
// Input: Nhập chuỗi ký tự chỉ chứa các chữ cái tiếng Anh in thường, có độ dại không vượt quá 255.

// Example: 
// Input: whereyourdreamscometrue
// Output: H O

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a; // Nhập giá trị a

    cout << (char)toupper(a[1]) << " " << (char)toupper(a[6]) << endl; // In kết quả
    return 0;
}