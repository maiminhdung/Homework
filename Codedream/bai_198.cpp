#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 2; i <= n / i; i++) {
		if (n % i == 0) {
			cout << "NO";
			return 0;
		}		
	}
	cout<<"YES";
	return 0;	
}
