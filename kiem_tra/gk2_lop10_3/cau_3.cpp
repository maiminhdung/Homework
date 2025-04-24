#include <bits/stdc++.h> 
using namespace std;

int main() {
    string s;
    getline(cin, s);

    replace(s.begin(), s.end(), ' ', '\n'); // Thay thế khoảng trắng bằng dấu gạch dưới
    cout << s << endl;
}