#include<iostream>
#include"strFuncs.h"
#include"linkedListFuncs.h"
#include"linkedList.h"
#include"recLinkedListFuncs.h"
#include"tddFuncs.h"
using namespace std;

int main(int argc, char* argv[]){
	
	int l1[3] = {4,3,8};
	LinkedList *list1 = arrayToLinkedList(l1,3);
	int l2[4] = {6,8,12,20};
	LinkedList *list2 = arrayToLinkedList(l2,4);
	int l3[4] = {2,4,5,9};
	LinkedList * list3 = arrayToLinkedList(l3,4);
	int l4[10] = {1,8,8,7,4,1,5,1,5,7};
	LinkedList *list4 = arrayToLinkedList(l4,10);

	if(argc < 2){
	cout<<"Usage: "<<argv[0]<<"[num of test to run]"<<endl;
	return 1;
	}else{
		int testnum = atoi(argv[1]);
		if(testnum ==1){
			START_TEST_GROUP("--------------IS_ANAGRAM--------------");
			string s1 ="abc";
			string s2 ="PiZzA";
			string s3 ="cba";
			string s4 ="hello";
			string s5 ="bac";
			string s6 ="ccba";
			string s7 ="helo";

			
			ASSERT_EQUALS(true,isAnagram(s1,s3));
			ASSERT_EQUALS(true,isAnagram(s1,s1));
			ASSERT_EQUALS(true,isAnagram(s1,s5));
			ASSERT_EQUALS(true,isAnagram(s2,s2));
			ASSERT_EQUALS(true,isAnagram(s2,"ZapiZ"));
			ASSERT_EQUALS(false,isAnagram(s1,s6));
			ASSERT_EQUALS(false,isAnagram(s3,s6));
			ASSERT_EQUALS(false,isAnagram(s4,s7));
			ASSERT_EQUALS(false,isAnagram(s4,s2));
			ASSERT_EQUALS(false,isAnagram(s5,s7));
		}
		else if(testnum == 2){
			START_TEST_GROUP("--------------IS_PALINDROME--------------");
			
			ASSERT_EQUALS(true,isPalindrome("boomoob"));
			ASSERT_EQUALS(true,isPalindrome("abba"));
			ASSERT_EQUALS(true,isPalindrome("qwq"));
			ASSERT_EQUALS(true,isPalindrome("qaq"));
			ASSERT_EQUALS(true,isPalindrome("LOL"));
			ASSERT_EQUALS(false,isPalindrome("caonima"));
			ASSERT_EQUALS(false,isPalindrome("caoniba"));
			ASSERT_EQUALS(false,isPalindrome("caoniye"));
			ASSERT_EQUALS(false,isPalindrome("caonidi"));
			ASSERT_EQUALS(false,isPalindrome("caonige"));
		}
		else if(testnum ==3){
			START_TEST_GROUP("--------------RECURSIVE_SUM--------------");
				
			ASSERT_EQUALS(15,recursiveSum(list1->head));
			ASSERT_EQUALS(46,recursiveSum(list2->head));
			ASSERT_EQUALS(20,recursiveSum(list3->head));
			ASSERT_EQUALS(47,recursiveSum(list4->head));
		}
		else if(testnum ==4){
			START_TEST_GROUP("--------------RECURSIVE_LARGEST_VALUE--------------");
			
			ASSERT_EQUALS(8,recursiveLargestValue(list1->head));
			ASSERT_EQUALS(20,recursiveLargestValue(list2->head));
			ASSERT_EQUALS(9,recursiveLargestValue(list3->head));
			ASSERT_EQUALS(8,recursiveLargestValue(list4->head));
		}
	}
}
