#include <bits/stdc++.h>

using namespace std;

double soDacBiet(int n);

int main() {
	int n;
	cin >> n;
	
	if(soDacBiet(n) == 0)
		cout << "YES";
	else
		cout << "NO";
}

double soDacBiet(int n) {
	int tong;
	int so = n;
	while(n > 0) {
		tong += n % 10; 
		n = n / 10; 
	}
	double chia = so % tong; 
	return chia;
}
