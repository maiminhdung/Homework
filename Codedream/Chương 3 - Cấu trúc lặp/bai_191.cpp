#include <bits/stdc++.h>
#define size 100
using namespace std;

void nhapMang(int A[], int n);
void inSoPhanTuChanThuX(int A[], int n, int x);
void xuatMang(int A[], int x);

int main() {
	int A[size], n, x;
	cin >> n >> x;
	
	nhapMang(A, n);
	inSoPhanTuChanThuX(A,n,x);
	
}

void inSoPhanTuChanThuX(int A[], int n, int x) {
	int demSoChan = 0;
	for(int i = 0; i < n; i++) {
		if(x==1&&A[0]%2==0)
		{
			cout<<-1;
			break;
		}	
		if(A[i] % 2 == 0)
			demSoChan++;
		if(demSoChan==x)
			break;
		cout<<A[i]<<" ";
	}
}

void xuatMang(int A[], int x) {
	for(int i = 0; i <= x; i++) {
		cout << A[i] << " ";
	}
}

void nhapMang(int A[], int n) {
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}
}
