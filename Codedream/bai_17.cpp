#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
	long long a, mod;
	cout << "Nhap gia tri a va mod: ";
	cin >> a >> mod;
	
	cout << "Ket qua la: "<< (a % mod + mod) % mod;	
}
