#include <bits/stdc++.h> 
using namespace std;

int main() {
	int n;
	cout << "Nhap gia tri n: ";
	cin >> n;
	
	if (0 <= n && n <= 50)
		cout << n * 1678;
		else if (51 <= n && n <= 100)
			cout << n * 1734;
		else if (101 <= n && n <= 200)
			cout << n * 2014;
		else if (201 <= n && n <= 300)
			cout << n * 2536;
		else if (n > 300)
			cout << n * 2834;
	else 
		cout << "Gia tri khong hop le";
} 
