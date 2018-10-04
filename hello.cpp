#include <iostream>
using namespace std;

int foobar(){
	return 5;
}
int main(){
	int x; //Declear variable x
	x = 3;//initialize

	string name;
	name = "caonima";
	
	int y = 10;
	int z;
	//Excution always starts with main()
	cout<<"Hello CS16!"<<x<<y<<z<<name<< endl;
	foobar();
	return 0;
}
