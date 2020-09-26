// https://youtu.be/g-1Cn3ccwXY

#include "iostream"
#include "vector"
#include "set"
#include "map"
#include "algorithm"

using namespace std;

int main(){

  // Declare a vector using STL
  vector<int> A = {11, 2, 3, 14};

  // Access the second element of vector A
  cout << A[1] << endl;

  // Sort the vector A in O(N log N) time
  sort(A.begin(), A.end());

  // Print the sorted vector A
  for (int i = 0; i < A.size(); i++){
    cout << A[i] << " ";
  }
  cout << endl;

  // A = {2, 3, 11, 14}

  // Perform a binary search to find an element in O(log N) time
  bool present = binary_search(A.begin(), A.end(), 3); // True
  cout << present << endl;

  bool present1 = binary_search(A.begin(), A.end(), 4); // False
  cout << present1 << endl;

  // Insert more elements in vector A
  A.push_back(100);
  A.push_back(100);
  A.push_back(100);
  A.push_back(100);
  A.push_back(100);
  A.push_back(123);

  // A = {2, 3, 11, 14, 100, 100, 100, 100, 100, 123}

  // Find the first occurence of element 100 in vector A
  // Get the iterator to the first occurence of element 100 in vector A
  // Apply lower_bound which returns an iterator to the first element >= 100
  vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);

  // Apply upper_bound which returns an iterator to the first element > 100
  vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100);

  // Print the contents of it and it2
  cout << *it << " " << *it2 << endl;

  // Print the difference of it and it2
  // Count the number of occurences of element 100
  /* Iterators in vectors are random. */
  cout << it2 - it << endl; // 5, It takes O(1) time
}
