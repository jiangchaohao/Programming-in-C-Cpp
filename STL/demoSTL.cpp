// https://youtu.be/g-1Cn3ccwXY

#include "iostream"
#include "vector"
#include "set"
#include "map"
#include "algorithm"
#include "string"

using namespace std;

bool f(int x, int y) {
  return x > y;
}

/* vectors using STL */
void vectorDemo(){

  cout << "vectors using STL" << endl;

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
  // vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);
  auto it = lower_bound(A.begin(), A.end(), 100);

  // Apply upper_bound which returns an iterator to the first element > 100
  // vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100);
  auto it2 = upper_bound(A.begin(), A.end(), 100);

  // Print the contents of it and it2
  cout << *it << " " << *it2 << endl;

  // Print the difference of it and it2
  // Count the number of occurences of element 100
  /* Iterators in vectors are random. */
  cout << it2 - it << endl; // 5, It takes O(1) time

  // Sort the vector A in reverse order
  // Use overloaded function by passing a comparator
  sort(A.begin(), A.end(), f);

  // Print the sorted vector A using iterators
  vector<int>::iterator it3;

  for (it3 = A.begin(); it3 != A.end(); it3++){
    cout << *it3 << " ";
  }
  cout << endl;

  // A = {123, 100, 100, 100, 100, 100, 14, 11, 3, 2}

  // Print vector A another way
  for (int x : A){
    cout << x << " ";
  }
  cout << endl;

  // Reiterate and simultaneously update the values of vector A
  for (int &x : A){
    x++;
    // cout << x << " ";
  }
  // cout << endl;

  // Check whether the values in vector A have been updated
  for (int x : A){
    cout << x << " ";
  }
  cout << endl;

  /* In case of vectors, we need to sort the elements first before applying the
  lower_bound and upper_bound operations. What if we want to insert the elements
  in a random order? Like insert 2, 4, 1, etc and after each operation, we want
  to have queries in between. For this, we can go for a set.
  */
}

/* sets using STL */
void setDemo(){

  cout << "\n sets using STL" << endl;

  // Declare a set using STL
  set<int> S;

  // Insert a number in set S
  S.insert(1);
  S.insert(2);
  S.insert(-1);
  S.insert(-10);
  // Set maintains the ascending order sequence

  // Print the elements of set S
  for (int x : S) {
    cout << x << " ";
  }
  cout << endl;
  // S = {-10, -1, 1 ,2}

  // Check whether -1 is present in the set S
  auto it = S.find(-1); // The iterator it will point to the location of -1

  /*If some element is not present, the find function will return S.end() */
  if (it == S.end()) cout << "Not present! \n";
  else {
    cout << "Present\n";
    cout << *it << endl;
  }

  // Find the first number in the set S which is greater than or equal to -1
  auto it2 = S.lower_bound(-1); // It will return an iterator

  // Find the first number in the set S which is strictly greater than -1
  auto it3 = S.upper_bound(-1); // It will return an iterator

  // Print the contents of the iterators
  cout << *it2 << " " << *it3 << endl;

  // What if we try to find the upper_bound of 2
  // The upper_bound of 2 does not exist in the set S
  auto it4 = S.upper_bound(2);
  if(it4 == S.end()) cout << "Couldn't find something like that!" << endl;
}


/* maps using STL */
void mapDemo(){
  cout << "\n maps using STL" << endl;

  // Declare a map using STL
  map<int, int> M;
  M[1] = 100;
  M[2] = -1;
  M[3] = 200;

  // Declare another map
  map<char, int> cnt;
  string x = "Sudhakar";

  for (char c : x) {
    cnt[c]++;
  }

  // Find how many times a character occurs in the string
  cout << cnt['a'] << " " << cnt['d'] << endl; // O(log N) time
}


/* Solving a problem using STL */
/* Given a number of intervals and an element, find out the interval
in which the element lies.

For example, suppose we have intervals like [2, 3], [10, 20], [30, 400],
[401, 450] and and an element 13, we see that 13
lies in the interval [10, 20].
*/

void powerOfSTL(){

  cout << "\n Solving a problem using STL" << endl;

  set< pair<int, int> > mySet;

  // Insert pairs of elements
  mySet.insert({401, 450});
  mySet.insert({2, 3});
  mySet.insert({10, 20});
  mySet.insert({30, 400});

  // 2,3
  // 10, 20
  // 30, 400
  // 401, 450

  // Set is always ordered in ascending order.
  // How do we compare two pairs

  /* For two pairs {a,c} and {b, d}, we can say that
  {a,c} < {b,d} iff (a < b) or (a == b and c < d)
  */

  // Do an upper_bound to find the interval of the element
  int point = 50;

  auto it = mySet.upper_bound({ point, INT8_MAX });
  // Since our set is of pair<int, int>, we also have to
  // perform an upper_bound with passing in a pair of integers.

  if (it == mySet.begin()) {
    cout << "The current point is not lying in any of the intervals" << endl;
    return;
  }

  it--;

  pair<int , int> current = *it;

  // The values in pair X = {a, b} can be accessed using X.first and X.second

  if (current.first <= point && point <= current.second) {
    cout << "Yes! " << current.first << " " << current.second << endl;
  }
  else cout << "The current point is not lying in any of the intervals" << endl;
}

/* Driver function */
int main(){
  vectorDemo();
  setDemo();
  mapDemo();
  powerOfSTL();
}


/*
vectors using STL
2
2 3 11 14
1
0
100 123
5
123 100 100 100 100 100 14 11 3 2
123 100 100 100 100 100 14 11 3 2
124 101 101 101 101 101 15 12 4 3

 sets using STL
-10 -1 1 2
Present
-1
-1 1
Couldn't find something like that!

 maps using STL
2 1

 Solving a problem using STL
Yes! 30 400

*/
