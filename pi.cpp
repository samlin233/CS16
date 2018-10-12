#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a;
	double pi=0;
	cout.setf(ios::fixed); 	   // Display in fixed point notation. For example, display 1e-1 as 0.1
	cout.setf(ios::showpoint); // Always display the decimal point.
	cout.precision(3);         // Set the number of digits to display after the decimal point to 3
	cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
	cin>>a;
	while(a!=-1){
		for(int x=-1;x<a;x++){
			pi += 4*(pow(-1,x+1))/(2*(x+1)+1);
		}
		
		if (a==0)
		cout<<"The approximate value of pi using "<<1<<" term is"<<pi<<endl;
		else
		cout<<"The approximate value of pi using "<<a+1<<" terms is"<<pi<<endl;
		
		pi = 0;
		cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
		cin>>a;
	}
	if (a==-1)
		exit(0);
	return 0;

}
