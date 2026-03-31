#include<iostream>
using namespace std;


int arr[56], B[20];
int n;

void input() {
    while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 56) {
            break;
        }
        else
        {
            cout << "\nMasukkan panjang array yang dapat dimasukkan adalah 20" << endl;

        }
    }
}