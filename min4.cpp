#include<iostream>

using namespace std;

int smalloffour(int num1, int num2, int num3, int num4);
int smallofthree(int num1, int num2, int num3);
int smalloftwo(int num1, int num2);

int main(int argc, char*argv[]){
	if (argc !=5){
		cerr<<"Usage: "<<argv[0]<<"num1 num2 num3 num4"<<endl;
		cerr<<"Print smallest of the four numbers"<<endl;
		exit(1);
	}
	
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	int d = atoi(argv[4]);

	cout<<smalloffour(a,b,c,d)<<endl;
}

int smalloftwo(int num1, int num2){
	if(num1>num2)
		return num2;
	return num1;
}

int smallofthree(int num1, int num2, int num3){
	if(num3<smalloftwo(num1,num2))
			return num3;
	return smalloftwo(num1,num2);
}

int smalloffour(int num1, int num2,int num3, int num4){
	if(num4<smallofthree(num1,num2,num3))
		return num4;
	return smallofthree(num1,num2,num3);
}
