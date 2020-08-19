#include <iostream> 
#include <vector> 
using namespace std; 
 int main() 
{ 
   vector<int> myvector{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
  for (auto i = myvector.begin(); i != myvector.end(); ++i) { 
        if (*i % 2 == 0) { 
            myvector.erase(i); 
            i--; 
        } 
		   } 
     for (auto it = myvector.begin(); it != myvector.end(); ++it) 
        cout << ' ' << *it; 
    return 0; 
}
.................................
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	string str = "Geeksforgeeks is best"; 

	// Using unique() method 
	auto res = unique(str.begin(), str.end()); 

	cout << string(str.begin(), res) 
		<< endl; 
} 
....................................
// C++ program to remove the 
// duplicate elements from the array 
// using STL in C++ 

#include <bits/stdc++.h> 
using namespace std; 

// Function to remove duplicate elements 
void removeDuplicates(int arr[], int n) 
{ 

	int i; 

	// Initialise a set 
	// to store the array values 
	set<int> s; 

	// Insert the array elements 
	// into the set 
	for (i = 0; i < n; i++) { 

		// insert into set 
		s.insert(arr[i]); 
	} 

	set<int>::iterator it; 

	// Print the array with duplicates removed 
	cout << "\nAfter removing duplicates:\n"; 
	for (it = s.begin(); it != s.end(); ++it) 
		cout << *it << ", "; 
	cout << '\n'; 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 4, 2, 3, 3, 2, 4 }; 

	int n = sizeof(arr) / sizeof(arr[0]); 

	// Print array 
	cout << "\nBefore removing duplicates:\n"; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 

	// call removeDuplicates() 
	removeDuplicates(arr, n); 

	return 0; 
} 
......................................
#include <bits/stdc++.h> 
using namespace std; 

// Function to remove duplicate elements 
void remDup(int arr[], int n) 
{ 

	// Initialise a vector 
	// to store the array values 
	// and an iterator 
	// to traverse this vector 
	vector<int> v(arr, arr + n); 
	vector<int>::iterator it; 

	// sorting vector 
	sort(v.begin(), v.end()); 

	// using unique() method 
	// to remove duplicates 
	it = unique(v.begin(), v.end()); 

	// resize the new vector 
	v.resize(distance(v.begin(), it)); 

	// Print the array with duplicates removed 
	cout << "\nAfter removing duplicates:\n"; 
	for (it = v.begin(); it != v.end(); ++it) 
		cout << *it << " "; 
	cout << '\n'; 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 1, 2, 5, 1, 7, 2, 4, 2 }; 

	int n = sizeof(arr) / sizeof(arr[0]); 

	// Print array 
	cout << "\nBefore removing duplicates:\n"; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 

	// call remDup() 
	remDup(arr, n); 

	return 0; 
} 
.....................
