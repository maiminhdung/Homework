#include <bits/stdc++.h>
using namespace std;

void solve();

void solve() {

    int x, y;

    cin >> x >> y;
    x = x-11-y*4.4;

    if(x <= 5) {
        if(x <= 0) 
            cout << 1 << " " << 0;
        else
            cout << 1 << " " << x*50000; 
    }
    else if(x > 5 && x <= 10)
        cout << 2 << " " << (long long) (x*100000-250000+1);
    else if(x > 10 && x <= 18)
        cout << 3 << " " << (long long) (x*150000-750000+1);
    else if(x > 18 && x <= 32)
        cout << 4 << " " << (long long) (x*200000-1650000+1);
    else if(x > 32 && x <= 52)
        cout << 5 << " " << (long long) (x*250000-3250000+1);
    else if(x > 52 && x <= 80)
        cout << 6 << " " << (long long) (x*300000-5850000+1);
    else {
        if((long long)(x*350000 >= 1000000000000))
            cout << 7 << " " << (long long) (x*350000-9850000);
        else
            cout << 7 << " " << (long long) (x*350000-9850000+1);    
    }

}

int main() {

    solve();
    return 0;
}