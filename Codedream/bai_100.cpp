#include <bits/stdc++.h>
using namespace std;

int main() {
    double x; // Thu nhập cá nhân theo tháng (triệu VND)
    int y;    // Số người phụ thuộc

    cin >> x >> y;

    // Tính thu nhập tính thuế (TN)
    double TN = x - (11 + y * 4.4);// ví dụ lương 50 triệu thì chỉ tính thuế dựa trên 30,2 triệu thôi vì được giảm trừ 11 triệu và 4,4 triệu cho mỗi người phụ thuộc

    // Nếu TN <= 0, không phải nộp thuế
    if (TN <= 0) {
        cout << "1 0" << endl;
        return 0;
    }

    int bacThue;
    double thuePhaiNop = 0.0;

    // Xác định bậc thuế và tính thuế dựa trên bảng thuế lũy tiến
    if (TN <= 5) {
        bacThue = 1;
        thuePhaiNop = TN * 0.05;
    } else if (TN <= 10) {
        bacThue = 2;
        thuePhaiNop = TN * 0.1 - 0.25;
    } else if (TN <= 18) {
        bacThue = 3;
        thuePhaiNop = TN * 0.15 - 0.75;
    } else if (TN <= 32) {
        bacThue = 4;
        thuePhaiNop = TN * 0.2 - 1.65;
    } else if (TN <= 52) {
        bacThue = 5;
        thuePhaiNop = TN * 0.25 - 3.25;
    } else if (TN <= 80) {
        bacThue = 6;
        thuePhaiNop = TN * 0.3 - 5.85;
    } else {
        bacThue = 7;
        thuePhaiNop = TN * 0.35 - 9.85;
    }

    // Xuất kết quả với 2 chữ số thập phân
    cout << bacThue << " " << fixed << setprecision(0) << thuePhaiNop*1000000 << endl;// nhân 1 triệu để đổi tiền sang triệu

    return 0;
}
