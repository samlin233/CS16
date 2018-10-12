#include<iostream>
using namespace std;
int main(int argc, char*argv[]){
	if (argc !=5){
		cerr<<"Usage: "<<argv[0]<<"num1 num2 num3 num4"<<endl;
		cerr<<"Print smallest of the four numbers"<<endl;
		exit(1);
	}
	int min = atoi(argv[1]);
	for(int i=1;i<(argc-1);i++){
		if(min>atoi(argv[i+1]))
			min = atoi(argv[i+1]);
	}
	cout<<min<<endl;
	return 0;
}
