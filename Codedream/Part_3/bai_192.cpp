#include <bits/stdc++.h>
using namespace std;
#define ll long long // ll = long long
#define pii pair<int, int> // pair<int, int> = (int, int) VD: (1, 2)
#define piii pair<pii, int> // pair<pii, int> = (int, int, int) VD: (1, 2, 3)
#define fi first // fi = first
#define se second // se = second
#define For(i,l,r) for(int i = l; i <= r; i++)
int main(){
	int n;
	cin>>n;
	
	int ans = 0;
	For(i,1,n) {
		int x,y;
		cin>>x>>y;

		if(y-x>=2){
			ans++;
		}
	}
	cout<<ans;
}	

