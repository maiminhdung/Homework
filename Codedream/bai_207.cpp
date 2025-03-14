#include <bits/stdc++.h>
using namespace std;

int soLe(int n);

int main() {
	int n;
	cin >> n;
	
	cout << soLe(n);
	return 0;
}

int soLe(int n) {
	int so = 0, soLuong = 0;
	while(n > 0) {
		so = n % 10;
		n  = n /10;
		if(so % 2 != 0)
			++soLuong;
	}
	return soLuong;
}
