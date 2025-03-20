// Đề bài: Bạn Blue có một cái đĩa trên đó có ghi các chữ cái tiếng Anh in thường từ 'a' tới 'z' theo thứ tự vòng tròn. Green chọn một chữ cái rồi đố Blue chữ cái đứng sau chữ cái đó n vị trí là chữ cái nào?
// Lưu ý: Chữ 'a' đứng sau chữ 'z' khi các chữ cái được xếp theo vòng tròn.

// INPUT: Nhập một ký tự chữ cái tiếng Anh in thường và một số nguyên không âm n có giá trị không vượt quá 10^9, cách nhau bởi một dấu cách.
// OUTPUT: In ra chữ cái đứng sau n vị trí so với chữ cái đã cho dưới dạng chữ in hoa.

// Example
// Input - Output
// y 5      D

#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    int n;
    cin >> ch >> n;

    int num = ch - 'a'; // Chuyển chữ cái thành số (0-25)
    int newNum = (num + n) % 26; // Tính vị trí mới và xử lý vòng tròn

    char newCh = newNum + 'a'; // Chuyển số thành chữ cái
    cout << (char)tolower(newCh) << endl; // In hoa và in kết quả

    return 0;
}