#include <bits/stdc++.h> 
using namespace std;

int main() {
	int month, year;
	cout << "Nhap gia tri ngay - thang: ";
	cin >> month >> year;
	
	double nam = year % 400;
	
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		cout << "31";
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			cout << "31";
		// Kiem tra co phai nam nhuan hay khong
		else if (month == 2 && nam == 0)
			cout << "29";
		// Kiem tra co phai nam khong nhuan hay khong
		else if (month == 2 && nam != 0)
			cout << "28";
	else 
		cout << "Nhap sai gia tri";
}
