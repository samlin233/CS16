
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;

struct Undergrad{
	string name;
	double GPA;
};

//Generic function: works for arrays, vectors
//T自动检查类型
template <class T>
void printList(T&a){
	//print out element
	for(auto item: a){
		cout<<item<<endl;
	}
}

int binarySearch(vector<int>&v,int value, int lo, int hi){
	if(hi<lo)
		return -1;

	int mid = (hi-lo)/2;
	if(v[mid] == value)
		return mid;
	if(v[mid]<value)
		binarySearch(v,value,mid+1,hi);
	if(v[mid]>value)
		binarySearch(v,value,lo,mid-1);

}

int main(){
	srand(time(NULL));
	
	array<int,10> arr1;//static fixed size array
	vector<int> v1;
	array<double,10>arr2;
	array<Undergrad,10>arr3;
		
	//using the range based forloop
	//Initialize the raw array with random numbers
	for(int i=0; i<10;i++){
		v1.push_back(rand()%100+1);
	}

	printList(v1);
	
	cout<<"Vector after sorting"<<endl;
	
	sort(v1.begin(),v1.end());
	printList(v1);
	cout<<"Index of element 55 is"<<binarySearch(v1,55,0,v1.size()-1)<<endl;
	cout<<"Index of element 50005 is"<<binarySearch(v1,50005,0,v1.size()-1)<<endl;
	
	
}
