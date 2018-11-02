#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

bool isOdd(int num);

int sumOdds(int a[], int size) {
  	int sum = 0;
	for(int x= 0;x<size;x++){
		if(a[x]%2!=0)
			sum += a[x];
	}

	return sum;
}	
