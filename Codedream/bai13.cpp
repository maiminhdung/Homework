#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
	double a, b;
	cout << "Nhap gia tri a va b: ";
	cin >> a >> b;
	
	cout << fixed << setprecision(2) << pow(a,3) + pow(b,3);
}
