#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
	int n;
	cout << "Nhap gia tri n: ";
	cin >> n;
	
	cout << fixed << setprecision(2) << "Ket qua la: " << sqrt(n);
}
