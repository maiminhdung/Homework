#include <bits/stdc++.h> 
using namespace std;

int main() {
	double a, b;
	string c;
	cout << "Nhap gia tri a, b, phepTinh: ";
	cin >> a >> b >> c;
	
	if (c == "+")
		cout << fixed << setprecision(2) << "Gia tri la: " << a + b; 
	else if (c == "-")
		 	cout << fixed << setprecision(2) << "Gia tri la: " << a - b;
	else if (c == "*")
		 	cout << fixed << setprecision(2) << "Gia tri la: " << a * b;
	else if (c == "/")
		 	cout << fixed << setprecision(2) << "Gia tri la: " << a / b;
	else 
		cout << "Phep tinh khong hop le";
}
