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
    cout << "\n---------------------------" << endl;
    cout << "\nInputkan Isi element array"<< endl;
    cout << "\n---------------------------" <<endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

void mergeSort(int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;


    
}