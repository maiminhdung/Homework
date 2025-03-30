// Đề bài: Blue được thầy giáo cho học về chuỗi kí tự. Blue thắc mắc rằng ký tự khi được viết theo thứ tự ngược lại sẽ như thế nào, bạn hãy giúp Blue giải quyết vấn đề này nhé!
// Input: Nhập một chuỗi ký tự s không vượt quá độ dài 255.
// Output: In ra chuỗi ký tự s sau khi được viết theo thứ tự ngược lại.

// Example: Input - Output
//      maerdedoc   codedream

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}