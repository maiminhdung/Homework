#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int a, b, c, d, mod;
	cout << "Nhap gia tri a, b, c, d, mod: ";
	cin >> a >> b >> c >> d >> mod;
	
	cout << "Ket qua la: " << ((a*b*c*d) % mod + mod) % mod;
}
