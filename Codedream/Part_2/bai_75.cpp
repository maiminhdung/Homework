#include <bits/stdc++.h> 
using namespace std;

int main() {
	int s1, v1, s2, v2;
	cout << "Nhap gia tri s1, v1, s2, v2: ";
	cin >> s1 >> v1 >> s2 >> v2;
	
	double Blue = s1/v1;
	double Green = s2/v2;
	
	if (Blue < Green)
		cout << "Yes";
	else
		cout << "No";
}
