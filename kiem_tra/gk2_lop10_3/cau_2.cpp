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

void maxMin(vector<int>& arr) {
    int maxVal = arr[0];
    int minVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    cout << "Max: " << maxVal << ", Min: " << minVal << endl;
}

void nhapMang(vector<int>& arr) {
    cout << "Nhap cac phan tu cua mang (tu 1 den 10):" << endl;
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        while (num == 0) {
            cout << "Vui long nhap so khac 0 o dong: " << endl;
            cin >> num;
        }
        arr.push_back(num);
    }
}

void xuatMang(const vector<int>& arr) {
    cout << "Mang da nhap la: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr;

    nhapMang(arr);
    xuatMang(arr);
    tinhTrungBinhCong(arr);
    maxMin(arr);

    return 0;
}