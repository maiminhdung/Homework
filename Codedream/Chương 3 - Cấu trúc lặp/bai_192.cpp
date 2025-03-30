#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define piii pair<pii, int>
#define fi first
#define se second
#define For(i,l,r) for(int i = l; i <= r; i++)
int main(){
	int n;
	cin>>n;
	int ans = 0;
	For(i,1,n){
		int x,y;
		cin>>x>>y;
		if(y-x>=2){
			ans++;
		}
	}
	cout<<ans;
}	

