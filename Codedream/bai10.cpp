#include <iostream>
#include <cmath>

using namespace std;
int main () {
	int a, k;
	cout << "Nhap gia tri a (so keo) va k (so nguoi): ";
	cin >> a >> k;
	
	int ketQua = sqrt(a % k);
	cout << "Ket qua la: " << ketQua;
}
