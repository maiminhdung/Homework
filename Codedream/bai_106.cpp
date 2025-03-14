#include <bits/stdc++.h> 
using namespace std;

int main() {
	int a, b, c, max, min;
	cout << "Nhap gia tri a b c: ";
	cin >> a >> b >> c;
	
	// Neu a > b > c
	if (a > b && a > c && b > c) {
		max = a;
		min = c;
		cout << min << " "<< max;
	}
		// Neu b > a > c
		else if (b > a && b > c && a > c) {
			max = b;
			min = c;
			cout << min << " "<< max;
		}	
			// Neu c > b > c
			else if (c > a && c > b && b > a) {
				max = c;
				min = a;
				cout << min << " "<< max;
			}	
				// Neu a > c > b
				else if (a > b && a > c && c > b) {
					max = a;
					min = b;
					cout << min << " "<< max;
				}
					// Neu c > a > b
					else if (c > a && c > b && a > b) {
						max = c;
						min = b;
						cout << min << " "<< max;
					}
						// Neu b > c > a
						else if (b > a && b > c && c > a) {
							max = b;
							min = a;
							cout << min << " "<< max;
						}	
	else
		cout << "Gia tri khong hop le";
			
}
