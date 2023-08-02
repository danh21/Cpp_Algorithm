#include <bits/stdc++.h>
using namespace std;





/* --------------------------------------------------------- PROTOTYPE - START -------------------------------------------------------- */

/* ---------------------------------------------  SORT ALGORITHM - START  ------------------------------------------- */
/**
 * @brief Traverse from left and compare adjacent elements and the higher one is placed at right side. 
 * In this way, the largest element is moved to the rightmost end at first. 
 * This process is then continued to find the second largest and place it and so on until the data is ascending sorted.
 * 
 * @ref https://www.geeksforgeeks.org/bubble-sort/
 * 
 * @param arr 
 * @param size 
 */
void bubbleSort(int arr[], int size);



/**
 * @brief The array is virtually split into a sorted and an unsorted part. 
 * Values from the unsorted part are picked and placed at the correct position in the ascending sorted part.
 * 
 * @ref https://www.geeksforgeeks.org/cpp-program-for-insertion-sort/
 * 
 * @param arr 
 * @param size 
 */
void insertionSort(int arr[], int size);



/**
 * @brief The algorithm repeatedly selects the smallest element from the unsorted portion of the list 
 * and swaps it with the first element of the unsorted part. 
 * This process is repeated for the remaining unsorted portion until the entire list is ascending sorted.
 * 
 * @ref https://www.geeksforgeeks.org/selection-sort/
 * 
 * @param arr 
 * @param size 
 */
void selectionSort(int arr[], int size);



/**
 * @brief Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, 
 * sorting each subarray, and then merging the sorted subarrays back together to form the final ascending sorted array.
 * 
 * @ref https://www.geeksforgeeks.org/merge-sort/ 
 * 
 * @param arr
 * @param start 
 * @param end 
 */
void mergeSort(int arr[], int start, int end);



/**
 * @brief Choose interval, sort elements interval apart.
 * Decrease interval and continue to sort until entire array is ascending sorted.
 * 
 * @ref https://codelearn.io/learning/data-structure-and-algorithms/856660
 * 
 * @param arr 
 * @param size 
 */
void shellSort(int arr[], int size);



/**
 * @brief Consider an element of the array as a pivot, then put all elements smaller than pivot before pivot, 
 * and put all elements greater than pivot after pivot then entire array is ascending sorted.
 * 
 * @ref https://codelearn.io/learning/data-structure-and-algorithms/858618
 * 
 * @param arr 
 * @param start 
 * @param end 
 */
void quickSort(int arr[], int start, int end);



/**
 * @brief First convert the array into heap data structure using heapify, 
 * then one by one delete the root node of the Max-heap and replace it with the last node in the heap 
 * and then heapify the root of the heap. Repeat this process until entire array is ascending sorted.
 * 
 * @ref https://www.geeksforgeeks.org/heap-sort/
 * 
 * @param arr 
 * @param size 
 */
void heapSort(int arr[], int size);



/**
 * @brief rearrange the elements of the array in a zig-zag fashion so that the converted array should be in the below form: 
 * arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 
 * 
 * @ref https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 */
void zigZagSort(int arr[], int size);



/**
 * @brief Given two sorted arrays arr1[] and arr2[] of sizes N and M in non-decreasing order. 
 * Merge them in sorted order without using any extra space. 
 * Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1?page=2&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr1 
 * @param arr2 
 * @param len1 - N
 * @param len2 - M
 */
void merge2Arrs(int arr1[], int arr2[], int len1, int len2);



/**
 * @brief From left to right:
 * Sort positive integers by ascending order
 * Sort negative integers by descending order
 * No change element equal to 0
 * No change sign in each position
 * 
 * @ref https://codelearn.io/learning/data-structure-and-algorithms/928897
 * 
 * @param arr 
 * @param size 
 */
void sort_Type1(int arr[], int size);
/* -----------------------------------------------  SORT ALGORITHM - END  --------------------------------------------- */



/* ---------------------------------------------  SEARCH ALGORITHM - START  ------------------------------------------- */
/**
 * @brief search element equal to value in array
 * 
 * @param arr 
 * @param size 
 * @param value 
 * @return index
 */
int search(int arr[], int size, int value);



/**
 * @brief Based on Divide and Conquer technique and assure that array was sorted
 * Search for a specific element by comparing the middle element in the data set. 
 * If a match is found, the index of the element is returned. 
 * If the element to be searched is greater than the value of the middle element, the element will be searched in the right subarray, 
 * otherwise it will be searched in the left subarray of the middle element. 
 * The process will continue like this on the subarray until all elements in this subarray are found.
 * 
 * @ref https://codelearn.io/learning/data-structure-and-algorithms/825257
 * 
 * @param arr 
 * @param size 
 * @param value 
 * @return index 
 */
int BinSearch(int arr[], int size, int value);



/**
 * @brief Reletive to Binary Search and assure that array was sorted 
 * 
 * @ref https://codelearn.io/learning/data-structure-and-algorithms/837719
 * 
 * @param arr 
 * @param size 
 * @param value 
 * @return index 
 */
int interpolationSearch(int arr[], int size, int value);



/**
 * @brief search first min element of array
 * 
 * @param arr 
 * @param size 
 * @return index 
 */
int firstMin(int arr[], int size);



/**
 * @brief search last max element of array
 * 
 * @param arr 
 * @param size 
 * @return index 
 */
int lastMax(int arr[], int size);



/**
 * @brief Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @return index
 */
int equilibriumPoint(int arr[], int size);



/**
 * @brief find the Kth smallest element in the given array. It is given that all array elements are distinct
 * 
 * @ref https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param l 
 * @param r 
 * @param K 
 * @return int 
 */
int KthSmallest(int arr[], int l, int r, int K);



/**
 * @brief A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @return int 
 */
int majorityElement(int arr[], int size); 
/* ----------------------------------------------  SEARCH ALGORITHM - END  ------------------------------------------- */



/* ---------------------------------------------  PRINT ALGORITHM - START  ------------------------------------------- */
/**
 * @brief print all elements of array
 * 
 * @param arr 
 * @param size 
 */
void printArr(int arr[], int size);



/**
 * @brief print all even elements of array
 * 
 * @param arr 
 * @param size 
 */
void printEvenElements(int arr[], int size);



/**
 * @brief a square number is an integer that is the square of an integer
 * 
 * @param arr 
 * @param size 
 */
void printSquareElements(int arr[], int size);



/**
 * @brief print frequency of each element in the array
 * 
 * @param arr 
 * @param size 
 */
void printFrequencyElements(int arr[], int size);
/* -------------------------------------------------  PRINT ALGORITHM - END  ---------------------------------------------- */



/* ---------------------------------------------  CALCULATION ALGORITHM - START  ------------------------------------------- */
/**
 * @brief find sum of all elements of array
 * 
 * @param arr 
 * @param size 
 * @return int 
 */
int sumOfArr(int arr[], int size);



/**
 * @brief find the smallest positive number missing from the array
 * 
 * @ref https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @return int 
 */
int missingNumber(int arr[], int size);



/**
 * @brief find the largest sum of the contiguous subarray within main array
 * 
 * @ref https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
 * 
 * @param arr 
 * @param size 
 * @return long long 
 */
long long maxSumOfSubArr(int arr[], int size);



/**
 * @brief Given an array arr[] denoting heights of N towers and a positive integer K, 
 * you have to modify the height of each tower either by increasing or decreasing them by K only once.
 * Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.
 * Assume that height of the tower can be negative.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/minimize-the-heights-i/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions 
 * 
 * @param arr 
 * @param size 
 * @param K
 * @return int 
 */
int getMinDiff(int arr[], int size, int K);



/**
 * @brief version 2 of getMinDiff
 * After the operation, the resultant array should not contain any negative integers.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @param K 
 * @return int 
 */
int getMinDiff2(int arr[], int size, int K);



/**
 * @brief The cost of stock on each day is given in an array price[] of size n. 
 * Each day you may decide to either buy or sell the stock i at price[i], 
 * you can even buy and sell the stock on the same day, Find the maximum profit which you can get.
 * Note: Buying and Selling of the stock can be done multiple times, but you can only hold one stock at a time. 
 * In order to buy another stock, firstly you have to sell the current holding stock.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param n - size of array
 * @param prices 
 * @return int 
 */
int stockBuyAndSell(int n, vector<int> &prices);



/**
 * @brief Given an array arr[] of n non-negative integers. 
 * The task is to find the maximum of j - i (i<=j) subjected to the constraint of arr[i] <= arr[j].
 * 
 * @ref https://practice.geeksforgeeks.org/problems/maximum-index3307/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @return int 
 */
int maxIndexDiff(int arr[], int size);
/* ----------------------------------------------  CALCULATION ALGORITHM - END  -------------------------------------------- */



/* ----------------------------------------------  COUNTING ALGORITHM - START  --------------------------------------------- */
/**
 * @brief find number of elements equal to value
 * 
 * @param arr 
 * @param size 
 * @param value 
 * @return int 
 */
int countElement(int arr[], int size, int value);



/**
 * @brief find number of odd elements
 * 
 * @param arr 
 * @param size 
 * @return int 
 */
int countOddElement(int arr[], int size);



/**
 * @brief find the number of possible contiguous subarrays having product less than a given number K.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @param K 
 * @return int 
 */
int countSubArrayProductLessThanK(const vector<int>& arr, int size, long long K);



/**
 * @brief For an array, inversion count indicates how far (or close) the array is from being sorted. 
 * Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @return int 
 */
int inversionCount(int arr[], int size); 



/**
 * @brief Given an array of N integers arr[] where each element represents the maximum length of the jump that can be made forward from that element. 
 * This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
 * Find the minimum number of jumps to reach the end of the array (starting from the first element). 
 * If an element is 0, then you cannot move through that element.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @return int 
 */

int minJumps(int arr[], int size);



/**
 * @brief In the current complicated situation of the Covid-19 epidemic, it is very important to propagate how to prevent the epidemic.
 * let a[i] be the coordinates of the i-th person, the distance between the two people i and j is |a[i]-a[j]|.
 * A person can transmit information to another person if the distance between them does not exceed K.
 * To spread information quickly, people will only transmit information to a few people initially, 
 * then they will pass the information on to others,
 * Give at least as many people as you need to initially transmit the information, so that everyone has access to the information.
 * 
 * @ref https://codelearn.io/learning/data-structure-and-algorithms/859980 
 * 
 * @param arr 
 * @param size 
 * @param K limit distance between 2 people
 * @return int 
 */
int minInitPeople (int arr[], int size, int K);
/* ----------------------------------------------  COUNTING ALGORITHM - END  --------------------------------------------- */



/* -----------------------------------------------  CHECK ALGORITHM - END  ---------------------------------------------- */
/**
 * @brief check whether the frequency of the elements in the array is unique or not. 
 * Or in other words, there are no two distinct numbers in array with equal frequency. 
 * If all the frequency is unique then return true, else return false.
 * 
 * @ref practice.geeksforgeeks.org/problems/unique-frequencies-of-not/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @return true 
 * @return false 
 */
bool isFrequencyUnique(int arr[], int size);



/**
 * @brief Check whether it contains a triplet that sums up to zero. (a+b+c = 0)
 * 
 * @ref https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @return true 
 * @return false 
 */
bool findTriplets(int arr[], int size);
/* ----------------------------------------------  CHECK ALGORITHM - END  --------------------------------------------- */



/* ----------------------------------------------  CREATION ALGORITHM - START  --------------------------------------------- */
/**
 * @brief find all the elements occurring more than once in the given array. Return the answer in ascending order.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @return vector<int> 
 */
vector<int> duplicates(int arr[], int size);



/**
 * @brief An element of array is leader if it is greater than or equal to all the elements to its right side. 
 * 
 * @ref https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param arr 
 * @param size 
 * @return vector<int> 
 */
vector<int> leaders(int arr[], int size);



/**
 * @brief Given an unsorted array A of size N that contains only positive integers, 
 * find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.
 * In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.
 * You have to return an ArrayList consisting of two elements left and right. 
 * In case no such subarray exists return an array consisting of element -1. 
 * 
 * @ref https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sprint=6ff6f4a5774041b7ad62a176ee94f5f5&sortBy=submissions
 * 
 * @param size 
 * @param S
 * @return vector<int> 
 */
vector<int> subarraySum(vector<int>arr, int size, long long S);

/* ----------------------------------------------  CREATION ALGORITHM - END  --------------------------------------------- */

/* ----------------------------------------------------------- PROTOTYPE - END -------------------------------------------------------- */





/* ----------------------------------------------------------- FUNCTION - START ------------------------------------------------------- */
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)          // to skip sorted elements of previous iterations 
        for (int j = 0; j < size-1-i; j++)    // to compare and sort
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}   



void insertionSort(int arr[], int size)
{
    int key, i;   
    
    for (i = 1; i < size; i++) {
        key = i;                                        // choose unsorted element

        while (key > 0 && arr[key] < arr[key-1]) {      // place key at the correct position in the sorted part
            swap(arr[key], arr[key-1]);
            key--;
        }
    }
}



void selectionSort(int arr[], int size) 
{   
    int iMin, start, i;

    for (start = 0; start < size-1; start++) {      
        iMin = start;                       // init index of min element

        for (i = start+1; i < size; i++)    // traverse to find min element in unsorted part
            if (arr[i] < arr[iMin])
                iMin = i;

        swap(arr[iMin], arr[start]);        // swap min element with the first element of the unsorted part     
    }
}



void merge(int arr[], int left, int mid, int right) 
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 =  right - mid;
    int *leftSub = new int[n1];
    int *rightSub = new int[n2];

    for (i = 0; i < n1; i++)                    // copy data of main array to temporary arrays
    	leftSub[i] = arr[left + i]; 
    for (j = 0; j < n2; j++)
    	rightSub[j] = arr[mid + 1 + j];

    k = left;                                   // init index of 3 arrays
    i = 0;
    j = 0;
    
    while (i < n1 && j < n2)                    // sort and merge the temporary arrays back into main array
        if (leftSub[i] <= rightSub[j])
            arr[k++] = leftSub[i++];
        else 
            arr[k++] = rightSub[j++];

    while (i < n1)                              // copy the remaining elements of temporary arrays, if there are any
        arr[k++] = leftSub[i++];
    while (j < n2)
        arr[k++] = rightSub[j++];

    delete[] leftSub;
    delete[] rightSub;
}

void mergeSort(int arr[], int start, int end)
{    
    int mid;

    if (end > start) {
        mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}



void shellSort(int arr[], int size) 
{             
	int interval, i, j, temp;
            
	for (interval = size/2; interval > 0; interval /= 2) {
		for (i = interval; i < size; i++) {
			temp = arr[i];                                                          // element being considered
			for (j = i; j >= interval && arr[j - interval] > temp; j -= interval)   // compare and swap with previous interval apart element   
				arr[j] = arr[j - interval];				
			arr[j] = temp;
		}
    }
}



void quickSort(int arr[], int start, int end)
{    
	int pivot = arr[(start + end) / 2], i = start, j = end;

    if (i < j) {                    // put elements smaller than pivot to the front and elements larger than pivot to the back.
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
        swap(arr[i++], arr[j--]);
	}

	if (i < end)                    // continue to sort in remaining parts
		quickSort(arr, i, end);
	if (start < j)
		quickSort(arr, start, j);
}



void heapify(int arr[], int size, int i)   
// move the maximum node in the branch (i_th node is root) to the i_th position            
{
    int iLeft = 2*i + 1, iRight = 2*i + 2, iMax = i;
    
    if (iLeft < size && arr[iLeft] > arr[iMax])
        iMax = iLeft;
    
    if (iRight < size && arr[iRight] > arr[iMax])
        iMax = iRight;
        
    if (iMax != i) {
        swap(arr[i], arr[iMax]);
        heapify(arr, size, iMax);
    }
}

void buildHeap(int arr[], int size)  
{ 
    for (int i = (size-1)/2; i >= 0; i--) 
        heapify(arr, size, i);
}

void heapSort(int arr[], int size)
{
    buildHeap(arr, size);               // Build a heap from the given input array
    
    for (int i = size-1; i > 0; i--) {
        swap(arr[0], arr[i]);           // Swap the root element of the heap (which is the largest element) with the last element of the heap
        heapify(arr, i, 0);             // Heapify the remaining elements of the heap.
    }
}



void zigZagSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++) {
        if (i % 2 == 0) {
            if (arr[i] > arr[i+1])
                swap(arr[i], arr[i+1]);
        }
        else {
            if (arr[i] < arr[i+1])
                swap(arr[i], arr[i+1]);
        }
    }
}



void merge2Arrs(int arr1[], int arr2[], int len1, int len2)
{ 
    int iMin2 = 0, iMax1 = len1-1;
    
    while (arr1[iMax1] > arr2[iMin2] && iMax1 >= 0 && iMin2 <= len2-1) {
        swap(arr1[iMax1--], arr2[iMin2++]);
    }
    
    shellSort(arr1, len1);
    shellSort(arr2, len2);
} 



void sort_Type1(int arr[], int size) 
{
    for (int i = 0; i < size-1; i++)
        for (int j = i+1; j < size; j++)
            if (arr[i]*arr[j] >= 1 && ((arr[j] > 0 && arr[i] > arr[j]) || (arr[j] < 0 && arr[i] < arr[j])))
                swap(arr[j], arr[i]);
}


 
int search(int arr[], int size, int value) 
{
    for (int i = 0; i < size; i++) 
        if (arr[i] == value)
            return i;
    return -1;
} 



int BinSearch(int arr[], int size, int value) 
{     
    int first = 0, last = size - 1, mid;
 
    do {
        mid = (first + last) / 2;
        if (arr[mid] >= value)                      // search on the left subarray
            last = mid;
        else                                        // search on the right subarray
            first = mid + 1;
    } while (first != last);

    if (arr[first] == value)                        // just only last element
        return first;
    else
        return -1;  
}   



int interpolationSearch(int arr[], int size, int value) 
{                         
	int first = 0, last = size-1, mid;

	while (last != first && value >= arr[first] && value <= arr[last]) {
		mid = first + (last-first) * (value-arr[first])/(arr[last]-arr[first]);   // evaluate index of value

		if (arr[mid] < value)                                                     // search on the right subarray
			first = mid + 1;
		else if (arr[mid] > value)                                                // search on the left subarray      
			last = mid - 1;
		else {
			if (mid > 0 && arr[mid-1] == value)                                   // have previous element matching value
				last = mid - 1;
			else                                                                  // first element matching value
				return mid;
		}
	}

	if (arr[first] == value)                                                      // just only last element
		return first;
	else
        return -1;
}



int firstMin(int arr[], int size) 
{
    int min = arr[0], i;

    for (i = 1; i < size; i++)             // find min
        if (arr[i] < min)
            min = arr[i];

    return search(arr, size, min);        // search first min
}



int lastMax(int arr[], int size) 
{
    int max = *max_element(arr, arr + size);

    for (int i = size-1; i >= 0; i--)         // search last max
        if (arr[i] == max)
            return i;
}



int equilibriumPoint(int arr[], int size) 
{
    int sumLeft = arr[0], sumRight = arr[size-1], left = 0, right = size-1;   
    
    while (left < right) {
        if (sumLeft < sumRight)
            sumLeft += arr[++left];
        else if (sumLeft > sumRight)
            sumRight += arr[--right];
        else {
            sumLeft += arr[++left];
            sumRight += arr[--right];
        }
    }
    
    if (sumLeft == sumRight && left == right)
        return left + 1;
    else
        return -1;
}



int KthSmallest(int arr[], int l, int r, int K) 
{
    mergeSort(arr, l, r);
    return arr[K-1];
}



int majorityElement(int arr[], int size) 
{
    int count = 0, i, start = arr[0];
    
    shellSort(arr, size);
    
    for (i = 0; i < size; i++) {
        if (arr[i] == start)
            count++;
        else {
            start = arr[i];
            count = 1;
        }
            
        if (count > size/2)
            return arr[i];
    }
            
    return -1;
}



void printArr(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}



void printEvenElements(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
		if (arr[i] % 2 == 0)
			cout << arr[i] << " ";
    cout << endl;
}



void printSquareElements(int arr[], int size) 
{
    int num, i;
    
    for (i = 0; i < size; i++) {
        num = (int)sqrt(arr[i]);
	    if (num * num == arr[i])
            cout << arr[i] << " ";
    }
    cout << endl;
}



void printFrequencyElements(int arr[], int size) 
{
    int i, j = 0;
    int *frequency = new int[size];

    fill_n(frequency, size, 1);             // init frequency = 1

    mergeSort(arr, 0, size-1);              // sorting

    for (i = 0; i < size-1; i++) {          // calculate frequencies
        if (arr[i] == arr[i+1])
            frequency[j]++;
        else
            j++;           
    }       

    cout << "All pairs (value - frequency): ";
    j = 0;
    for (i = 0; i < size; i++)              // print all pairs (value - frequency)
        if (i == 0 || arr[i] != arr[i-1])
            cout << "(" << arr[i] << " - " << frequency[j++] << ")" << "    ";
    cout << endl;

    delete[] frequency;
}



int sumOfArr(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++)
		sum += arr[i];
    return sum;
}



int missingNumber(int arr[], int size) 
{
    int missNum = 1, i;

    mergeSort(arr, 0, size-1);

    for (i = 0; i < size; i++)
        if (arr[i] == missNum)
            missNum++;
        
    return missNum;
}



long long maxSumOfSubArr(int arr[], int size) 
{
    long long max_so_far = INT_MIN, max_ending_here = 0;
    
    for (int i = 0; i < size; i++) {
        max_ending_here += arr[i];          // the maximum sum contiguous subarray ending at current index
        
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;   // the maximum sum of contiguous subarray found so far
            
        if (max_ending_here < 0)            // reset
            max_ending_here = 0;
    }
        
    return max_so_far;
}



int getMinDiff(int arr[], int size, int K) 
{
    int minDiff = INT_MAX, mini, maxi, i;
    
    shellSort(arr, size);
    
    for (i = 0; i < size-1; i++) {
        mini = min(arr[0] + K, arr[i+1] - K);
        maxi = max(arr[i] + K, arr[size-1] - K);
        
        minDiff = min(minDiff, maxi-mini);
    }
    
    minDiff = min(minDiff, arr[size-1]-arr[0]);
    
    return minDiff;
}



int getMinDiff2(int arr[], int size, int K) 
{
    int minDiff = INT_MAX, mini = INT_MIN, maxi = INT_MAX, i;
    
    shellSort(arr, size);
    
    for (i = 1; i < size; i++) {
        if (arr[i] - K >= 0 && arr[size-1] - K >= 0) {
            mini = min(arr[0] + K, arr[i] - K);
            maxi = max(arr[i-1] + K, arr[size-1] - K);
            minDiff = min(minDiff, maxi - mini);
        }
    }
    
    minDiff = min(minDiff, arr[size-1] - arr[0]);
    
    return minDiff;
}



int stockBuyAndSell(int n, vector<int> &prices)
{
    int maxProfit = 0, stock = 0, today, maxStock, day;
    
    for (today = 0; today < n; today++) {
        if (stock == 0 && prices[today] < prices[today+1]) {
            stock = prices[today];
            maxProfit -= stock;
            
            maxStock = stock;
            day = today + 1;
            while (prices[day] > maxStock && day < n) {
                maxStock = prices[day++];
            }
            
            today = --day;
            maxProfit += prices[today];
            stock = 0;
        }
    }
        
    return maxProfit;
}



int maxIndexDiff(int arr[], int size) 
{
    int maxDiff = 0, i = 0, j = size-1;
    
    while (i < j) {
        if (arr[i] <= arr[j]) {
            maxDiff = max(maxDiff, j - i);
            i++;
            j = size - 1;
        }
        else
            j--;
    }
    
    return maxDiff;
}



int countElement(int arr[], int size, int value)
{
    int count = 0;
	for (int i = 0; i < size; i++)
		if (arr[i] == value)
			count++;
    return count;
}



int countOddElement(int arr[], int size) 
{
	int count = 0;
	for (int i = 0; i < size; i++)
		if (arr[i] % 2 != 0)
			count++;
	return count;
}



int countSubArrayProductLessThanK(const vector<int>& arr, int size, long long K)
{
    int count = 0, i, start = 0; 
    long long product = 1;
    
    for ( ; start < size; start++) {
        for (i = 0; i < size-start; i++) {
            product *= arr[start + i];
            
            if (product < K)
                count++;
            else
                break;
        }
        product = 1;
    }
    
    return count;
}



int inversionCount(int arr[], int size)      
{
    int inversionCnt = 0, i, j;
    
    for (i = 0; i < size-1; i++) {
        for (j = i+1; j < size; j++) {
            if (arr[i] > arr[j])
                inversionCnt++;
        }
    }
    
    return inversionCnt;
}



int minJumps(int arr[], int size) 
{
    int numOfJumps = 0, maxSteps, currentPos = 0, i, choice, steps;
    
    while (currentPos < size-1) {
        if (arr[currentPos] == 0)
            break;
        
        numOfJumps++; 
            
        maxSteps = arr[currentPos];
        
        if (currentPos + maxSteps >= size - 1)
            steps = maxSteps;
        else {
            choice = arr[currentPos+1];
            steps = 1;
            for (i = 2; i <= maxSteps; i++)
                if ( (arr[currentPos+i] >= choice) || (abs(arr[currentPos+i] - choice) <= i - steps) ) {
                    choice = arr[currentPos+i];
                    steps = i;
                }
        }
        
        currentPos += steps;
    }
    
    if (currentPos >= size-1)
        return numOfJumps;
    else
        return -1;
}



int minInitPeople (int arr[], int size, int K)
{
    int minNumInit = 1;

    mergeSort(arr, 0, size-1);
    
    for (int i = 1; i < size; i++)
        if (arr[i] - arr[i-1] > K)
            minNumInit++;

    return minNumInit;
}
   


bool isFrequencyUnique(int arr[], int size)
{
    vector<int> frequency;
    int count = 1, i, j;
    
    shellSort(arr, size);
    
    for (i = 1; i < size; i++) {            // find frequency
        if (arr[i] == arr[i-1])
            count++;
        else {
            frequency.push_back(count);
            count = 1;
        }
    }
    frequency.push_back(count);
    
    for (i = 0; i < frequency.size()-1; i++) {  // compare
        for (j = i+1; j < frequency.size(); j++)
            if (frequency[i] == frequency[j])
                return false;
    }
    
    return true;
}



bool findTriplets(int arr[], int size) 
{ 
    int sum, start = 0, left = 1, right = size - 1;
    
    shellSort(arr, size);
    
    while (start < size-2) {
        sum = arr[start] + arr[left] + arr[right];
        
        if (sum == 0)
            return true;
        else if (sum < 0)
            left++;
        else
            right--;
            
        sum = 0;
        
        if (left == right) {
            start++;
            left = start + 1;
            right = size - 1;
        }
    }
    
    return false;
}



vector<int> duplicates(int arr[], int size) 
{
    vector<int> dup;
    int i;
    
    shellSort(arr, size);
    
    for (i = 0; i < size-1; i++) {
        if (arr[i] == arr[i+1] && (i == 0 || arr[i] != arr[i-1]))
            dup.push_back(arr[i]);
    }
    
    if (dup.size() < 1)
        dup.push_back(-1);
        
    return dup;   
}



vector<int> leaders(int arr[], int size) 
{
    vector<int> leaders, temp;
    int i;
    
    temp.push_back(arr[size-1]);                 // The rightmost element is always a leader.   
    for (i = size-2; i >= 0; i--)
        if (arr[i] >= temp.back())
            temp.push_back(arr[i]);
            
    for (i = temp.size()-1; i >= 0; i--)
        leaders.push_back(temp[i]);
            
    return leaders;
}



vector<int> subarraySum(vector<int>arr, int size, long long S) 
{
    vector<int> idxArr;
    int sum = 0, left, right = 0, i;
    
    for (i = 0; i < size; i++) {
        left = i + 1;
        
        while (sum < S && right < size)
            sum += arr[right++];
        
        if (sum == S && sum != 0) {
            idxArr.push_back(left);
            idxArr.push_back(right);
            break;
        }
        else if (sum < 0)
            break;
        else
            sum -= arr[i];
    }
    
    if (idxArr.size() != 2)
        idxArr.push_back(-1);
        
    return idxArr;
}
/* ----------------------------------------------------------- FUNCTION - END ------------------------------------------------------- */