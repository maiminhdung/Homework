#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	
	while(n > 0) {
		count = count + 1; // hoac ++dem
		n = n / 10; // hoac n /= 10
	}
	cout << count;
}
