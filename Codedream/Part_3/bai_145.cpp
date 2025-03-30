#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	for (int i = n; i >= m; i--) {
		if (i % 3 == 0 && i % 5 == 0) 
			cout << "FizzBuzz" << " ";
			else if (i % 3 == 0) 
				cout << "Fizz" << " ";
			else if (i % 5 == 0) 
				cout << "Buzz" << " ";
		else 
			cout << i << " ";
	}
}
