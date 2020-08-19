
#include <bits/stdc++.h> 
using namespace std; 
#define NO_OF_CHARS 256 
bool areAnagram(char* str1, char* str2) 
{ 
	int count[NO_OF_CHARS] = { 0 }; 
	int i; 

	for (i = 0; str1[i] && str2[i]; i++) { 
		count[str1[i]]++; 
		count[str2[i]]--; 
	} 

	// If both strings are of different length. Removing this condition 
	// will make the program fail for strings like "aaca" and "aca" 
	//if (str1[i] || str2[i]) 
	//	return false; 

	// See if there is any non-zero value in count array 
	for (i = 0; i < NO_OF_CHARS; i++) 
		if (count[i]) 
			return false; 
	return true; 
} 


/* Driver code*/
int main() 
{ 

	char str1[10] ;
	char str2[10];// = "geeksforgeeks";
	gets(str1);
	gets(str2); 
	if (areAnagram(str1, str2)) 
		cout << "The two strings are anagram of each other"; 
	else
		cout << "The two strings are not anagram of each other"; 

	return 0; 
} 

// This is code is contributed by rathbhupendra 

