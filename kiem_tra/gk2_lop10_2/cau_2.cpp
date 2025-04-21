#include <bits/stdc++.h>
using namespace std;

void tinhTrungBinhCong(vector<int>& arr) {
    int sum = 0;
    for(int num : arr) {
        sum += num;
    }

    double average = (double)sum / arr.size();
    cout << "Trung binh cong cua mang la: " << average << endl;
}

void timViTriX(vector<int>& arr, int x) {
    bool timThay= false;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            cout << "Vi tri cua X la: " << i + 1 << endl;
            timThay = true;
            break;
        }
    }
    if (!timThay) {
        cout << "Khong tim thay X trong mang" << endl;
    }
}

void nhapMang(vector<int>& arr) {
    cout << "Nhap cac phan tu cua mang (toi da 10 so hoac nhap 0 de ket thuc):" << endl;
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        if (num == 0) {
            break; // Thoát khỏi vòng lặp nếu gặp số 0
        }
        arr.push_back(num);
    }
}

void xuatMang(vector<int>& arr) {
    cout << "Mang da nhap la: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
} 

int main() {
    vector<int> arr;
    int x;

    //Nhap mang va xuat mang
    nhapMang(arr);
    xuatMang(arr);
    
    // Tim vi tri x trong mang va tinh trung binh cong
    cout << "Nhap gia tri X: ";
    cin >> x;
    timViTriX(arr, x);
    tinhTrungBinhCong(arr);

    return 0;
}