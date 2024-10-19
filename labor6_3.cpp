#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <vector>  
using namespace std;

template <typename T>
int CountOddtemp(T mas[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (mas[i] % 2 != 0) { 
            count++;
        }
    }

    return count;
}
int Countodd(int mas[], const int k) {
    int sumforodd = 0;
    for (int p = 0; p < k; p++) {
        if (mas[p] % 2 != 0) 
            sumforodd += 1;
    }
    return sumforodd;
}

int main() {
    srand((unsigned)time(0)); 

  
    int size = 5 + rand() % 16; 

  
    int* arr = new int[size];

  
    for (int i = 0; i < size; i++) {
        arr[i] = 1 + rand() % 100; 
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

  
    cout << "Sum (template) =  " << CountOddtemp(arr, size) << endl;
    cout << "Sum (standart function) =  " << Countodd(arr, size) << endl;

    delete[] arr;

    return 0;
}