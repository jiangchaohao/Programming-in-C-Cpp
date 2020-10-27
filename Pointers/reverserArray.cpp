// Reverse the elements of an array using pointers

#include<iostream>

using namespace std; 

void reverseArray(int *arr, int size){
    int temp[size]; 
    for(int i = 0; i < size; i++){
        temp[i] = arr[i]; 
    }
    for(int i = 0; i < size; i++){
        arr[i] = temp[size - 1 - i]; 
    }

}

int main(){
    int size; 
    cout << "Enter the size of the array: "; 
    cin >> size; 
    int arr[size]; 
    cout << "Enter the elements of the array one by one: "; 
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]); 
    }
    int *ptr = &arr[0]; 
    reverseArray(ptr, size); 
    cout << "Printing the reversed array: "; 
    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; 
    }
    cout << "\n"; 
    return 0; 
}

/*
Enter the size of the array: 4          
Enter the elements of the array one by one: 2 3 4 5 
Printing the reversed array: 5 4 3 2 
*/