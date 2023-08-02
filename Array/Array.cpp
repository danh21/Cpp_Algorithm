#include <bits/stdc++.h>
#include "Array.h"
using namespace std;



int main() {
    int n, i, j;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter elements of array:" << endl;
    int* arr = new int[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];



    // cout << "Array after swapping first min element and last max element: ";
    // swap(arr[firstMin(arr, n)], arr[lastMax(arr, n)]);    
    // printArr(arr, n);



    // cout << "Square numbers of array: ";
    // printSquareElements(arr, n);



    // printFrequency(arr, n);
    // cout << "Frequency of the elements in the array " << (isFrequencyUnique(arr, n) == true ? "is" : "isn't") << " unique." << endl;



    cout << "Frequency of a majority element is: " << countElement(arr, n, majorityElement(arr, n));



    delete[] arr;
    return 0;
}