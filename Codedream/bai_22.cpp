#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, mod;
    cin >> a >> b >> c >> d >> e >> mod;
    a %= mod; b %= mod; c %= mod; d %= mod; e %= mod;
    long long tich = 1;
    tich = (tich * a) % mod;
    tich = (tich * b) % mod;
    tich = (tich * c) % mod;
    tich = (tich * d) % mod;
    tich = (tich * e) % mod;
    cout << (tich + mod) % mod;
    return 0;
}