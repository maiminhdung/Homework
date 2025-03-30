#include <bits/stdc++.h>
using namespace std;
#define ll long long // ll = long long
#define pii pair<int, int> // pair<int, int> = (int, int) VD: (1, 2)
#define piii pair<pii, int> // pair<pii, int> = (int, int, int) VD: (1, 2, 3)
#define fi first // fi = first
#define se second // se = second
#define For(i,l,r) for(int i = l; i <= r; i++)
int main() {
	int n;
	cin>>n;
	
	int tich = 1;
	For(i,1,n) {
		int x;
		cin >> x;

		tich = tich * x;
	}
    int soTanCung = tich % 10;
	cout << abs(soTanCung) << endl;
    return 0;
}	

