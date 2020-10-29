// https://www.geeksforgeeks.org/binary-search/

/*
Binary Search: Search a sorted array by repeatedly dividing the search interval in half. 
Begin with an interval covering the whole array. 
If the value of the search key is less than the item in the middle of the interval, 
narrow the interval to the lower half. Otherwise narrow it to the upper half. 
Repeatedly check until the value is found or the interval is empty.

The idea of binary search is to use the information that the array is sorted and 
reduce the time complexity to O(log n).
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std; 

int binarySearch(int arr[], int l, int r, int num){

    while(l <= r){

        int mid = l + (r - l)/2; 
        
        if(arr[mid] == num) return mid; 

        if(num < arr[mid]) {
            r = mid - 1; 
        } 
        else if(num > arr[mid]) {
            l = mid + 1; 
        } 
    }
    return -1; 
}

int main(){
    int arr[] = {2, 3, 4, 10, 40, 50, 60}; 
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = 50; 
    int result = binarySearch(arr, 0, size - 1, num);   
    (result == -1) ? cout << "Element not found in the array" << "\n" : cout << "Element found at the index: " << result << endl;  
    return 0; 
}

/*
Element found at the index: 5
*/