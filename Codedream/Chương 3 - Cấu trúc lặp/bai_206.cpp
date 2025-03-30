#include <bits/stdc++.h>
using namespace std;

int min(int n); // Lay gia tri n sau khi nhap (VD: n = 123 thi max = 123)
int max(int n); // Lay gia tri n sau khi nhap (VD: n = 123 thi max = 123)

int main() {
	int n; // Gia tri nguyen duong
	cin >> n;
	
	cout << min(n) << " " << max(n); // In ra gia tri sau khi ham min va max xong
	return 0;
}

int min(int n) {
	int so = 0, cmin = n; 
	while (n > 0) {
		so = n % 10; // (so = 3)
		n = n / 10; // (n = 12)
		if(cmin > so) // Neu cmin = 123 > so = 3
			cmin = so; // Thi cmin = so (Tuc la cmin = 3)
	}
	return cmin; // Gui gia tri cmin sau vong lap while ve min
}

int max(int n) {
	int so = 0, cmax = 0;
	while (n > 0) {
		so = n % 10;
		n = n / 10; 
		if(cmax < so)
			cmax = so; 
	}
	return cmax;
}


