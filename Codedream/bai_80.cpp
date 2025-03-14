#include <bits/stdc++.h> 
using namespace std;

int main() {
	int n;
	cout << "Nhap gia tri n: ";
	cin >> n;
	
	double giaTri= n % 2;
	
	if (giaTri == 0)
		cout << "1";
	else 	
		cout << "0";
}
