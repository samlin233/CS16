#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int maxOfArray(int a[], int size) {
	int maxnumb = 0;
	for(int i = 0; i<size ;i++){
		if(a[i]>maxnumb)
			maxnumb = a[i];
	}
  	return maxnumb; // STUB!  Replace with correct code.
}
