#include <bits/stdc++.h> 
using namespace std;

	int x;
	cout << "Nhap gia tri thang: ";
	cin >> x;
	
	if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
		cout << "30";
		else if (x == 4 || x == 6 || x == 9 || x == 11)
			cout << "31";
		else if (x == 2)
			cout << "28 ngay neu nam nhuan la 29 ngay";
	else 
		cout << "Sai gia tri";	 
}
