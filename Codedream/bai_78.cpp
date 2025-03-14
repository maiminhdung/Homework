#include <bits/stdc++.h> 
using namespace std;

int main() {
	int a;
	cout << "Nhap gia tri a: ";
	cin >> a;
	
	if (a == 2)
		cout << "Monday";
		else if (a == 3)
			cout << "Tuesday";
		else if (a == 4)
			cout << "Wednesday";
		else if (a == 5)
		 	cout << "Thursday";
		else if (a == 6)
			cout << "Friday";
		else if (a == 7)
			cout << "Sturday";
		else if (a == 8)
			cout << "Sunday";
	else
		cout << "Vui long nhap tu 2 den 8";
}
