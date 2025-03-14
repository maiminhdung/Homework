#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
	double a, b;
	cout << "Nhap gia tri so thuc a va b: ";
	cin >> a >> b;
	
	double tong = a + b;
	double hieu = a - b;
	double tich = a * b;
	double thuong = a / b;
	cout << fixed << setprecision(2) << "Ket qua la: " << "\n" << tong << "\n" << hieu << "\n" << tich << "\n" << thuong;
}
