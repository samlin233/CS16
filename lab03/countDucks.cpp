// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
	ifstream ifs;
	ifs.open(argv[1]);
	if(!ifs){
		cerr<<"file does not exit"<<endl;
		return 0;
	}
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  	string animal;
	int duck = 0;
	while(ifs){
	      getline(ifs,animal);
	      if(animal == "duck"){
		      duck+=1;
	      }
	}
	cout<<"There were "<<duck<<" ducks in "<<argv[1]<<endl;
	ifs.close();
  
  return 0;
}
