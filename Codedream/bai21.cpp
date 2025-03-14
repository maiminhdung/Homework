#include <iostream>
#include <cmath>

using namespace std;
int main() {
	long long a, b, c, mod;
	cout << "Nhap gia tri a, b, c, mod: ";
	cin >> a >> b >> c >> mod;
	
	cout << (((((a*b)%mod)*c)%mod)+ mod)% mod;
}
