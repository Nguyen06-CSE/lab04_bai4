#pragma one
#include<iostream>
#include<math.h>

#define TAB '\t'


using namespace std;




void xuatUocSo(int n);
int demUocSo(int n);
int tongUocSo(int n);
int canBac2(int n);
int luyThua2LonNhat(int n);


int chonMenu(int choise, int n) {
    switch (choise) {
        case 1:
            xuatUocSo(n);
            break;
        case 2:
            cout << "So luong uoc cua " << n << " la: " << demUocSo(n) << endl;
            break;
        case 3:
            cout << "Tong cac uoc so cua " << n << " la: " << tongUocSo(n) << endl;
            break;
        case 4:
            cout << "Can bac hai cua " << n << " la: " << canBac2(n) << endl;
            break;
        case 5:
            cout << "So luong lon nhat nho hon hoac bang " << n << " ma la luy thua cua 2 la: " << luyThua2LonNhat(n) << endl;
            break;
    }

    return 0; 
}


void xuatUocSo(int n) {
    cout << "cac uoc so cua " << n << " la: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int demUocSo(int n) {
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            dem++;
        }
    }
    return dem;
}

int tongUocSo(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong;
}

int canBac2(int n) {
    int can = 0;
    for (int i = 1; i * i <= n; i++) {
        can = i;
    }
    return can;
}

int luyThua2LonNhat(int n) {
    int luyThua = 1;
    while (luyThua * 2 <= n) {
        luyThua *= 2;
    }
    return luyThua;
}