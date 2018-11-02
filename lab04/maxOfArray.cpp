#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int maxOfArray(int a[], int size) {
	if(size<1){
		std::cerr<<"ERROR: maxOfArray called with size < 1"<<std::endl;
	exit(1);
	}
	int maxnumb = a[0];
	for(int i = 1; i<size ;i++){
		if(a[i]>maxnumb)
			maxnumb = a[i];
	}
  	return maxnumb; // STUB!  Replace with correct code.
}
