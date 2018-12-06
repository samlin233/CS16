#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
	int len1 = s1.size();
	int len2 = s2.size();
	string f1;
	string f2;
	for(int i=0; i<len1; i++){
		if(!ispunct(s1[i]))
				f1 += tolower(s1[i]);
				}
	for(int z=0; z<len2 ;z++){
		if(!ispunct(s2[z]))
				f2 += tolower(s2[z]);
				}
	
	if(f1.length() != f2.length())
		return false;
	sort(f1.begin(),f1.end());
	sort(f2.begin(),f2.end());
	if(f1 == f2)
		return true;
	else
		return false;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
	int j=s1.length();
	for(int i=0;i<(j/2);i++)
		if(s1[i] != s1[j-1-i])
			return false;
	return true;
}


