#include <bits/stdc++.h>
using namespace std;

#define SIZE 50

void menu() {
    cout << "----------------------------------------" << endl;
    cout << "CHUONG TRINH BAI THI LAP TRINH CAN BAN - DE SO 07" << endl;
    cout << "Chon chuc nang:" << endl;
    cout << "1. Nhap mang" << endl;
    cout << "2. In mang" << endl;
    cout << "3. Dem so phan tu chia het cho m" << endl;
    cout << "4. Sap xep mang" << endl;
    cout << "0. Dung chuong trinh" << endl;
    cout << "----------------------------------------" << endl;
}

int chonMenu() {
    int chon;
    cout << "Nhap chuc nang: ";
    cin >> chon;
    return chon;
}

void nhapMang(int arr[], int &n) {
    cout << "Nhap so luong phan tu (toi da " << SIZE << "): ";
    cin >> n;

    cout << "Nhap cac phan tu mang: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Roi ban co the chon cac chuc nang roi do :>" << endl;
}

void inMang(int arr[], int n) {
    cout << "Mang: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void soPhanTuChiaHetChoM(int arr[], int n) {
    int m;
    cout << "Nhap so m: ";
    cin >> m;

    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % m == 0) {
            dem++;
        }
    }
    cout << "So phan tu chia het cho " << m << " la: " << dem << endl;
}

void sapXepMang(int arr[], int n) {
    sort(arr, arr + n); // Sắp xếp mảng tăng dần
    cout << "Mang sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void xuLyMenu(int arr[], int &n, int luaChon) {
    switch (luaChon) {
        case 1:
            nhapMang(arr, n);
            break;
        case 2:
            if (n == 0) cout << "Mang chua duoc nhap.\n";
            else inMang(arr, n);
            break;
        case 3:
            if (n == 0) cout << "Mang chua duoc nhap.\n";
            else soPhanTuChiaHetChoM(arr, n);
            break;
        case 4:
            if (n == 0) cout << "Mang chua duoc nhap.\n";
            else sapXepMang(arr, n);
            break;
        case 0:
            cout << "Ket thuc chuong trinh" << endl;
            break;
        default:
            cout << "Khong co chuc nang nay" << endl;
            break;
    }
}

int main() {
    int arr[SIZE], n = 0;
    int luaChon;

    do {
        menu();
        luaChon = chonMenu();
        xuLyMenu(arr, n, luaChon);
        cout << endl;
    } while (luaChon != 0);

    return 0;
}
