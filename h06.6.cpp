#include<iostream>
using namespace std;

void foo(int* a,int* b,int& c,int d){
	*a = *a+2;
	b=b+2;
	c=c+2;
	d=d+2;
}
int main(){
	int x=10,y=15,z=20,s=30;
	foo(&x,&y,z,s);
	cout<<x<<","<<y<<","<<z<<","<<s<<endl;
	return 0;
}
