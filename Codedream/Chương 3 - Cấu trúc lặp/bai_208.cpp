#include <bits/stdc++.h>
using namespace std;

bool soChan(int n);

int main() {
	int n;
	cin >> n;
	
	if (soChan(n) == 1)
		cout << "YES";
	else 
		cout << "NO";
	return 0;
}

bool soChan(int n) {
	int so = 0;
	while(n > 0) {
		so = n % 10;
		n  = n / 10;
		if(so % 2 != 0)
			return false;
	}
	return true;
}
