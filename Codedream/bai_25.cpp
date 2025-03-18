#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, gcd_ab;
    cin >> a >> b;
    gcd_ab = gcd(a, b);

    cout << a / gcd_ab << " " << b / gcd_ab;
    return 0;
}