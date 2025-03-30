#include <iostream>
#include <cmath>

using namespace std;
int main() {
	long long a, b, mod;
	cout << "Nhap gia tri a, b va mod: ";
	cin >> a >> b >> mod;
	
	cout << "Ket qua lai " << ((a+b) % mod + mod) %mod;
}
