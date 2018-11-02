#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include<cmath>
#include "utility.h"

int countPrimes(int a[], int size) {
	int primenumb = 0;
		for (int i = 0;i<size;i++){
			if(isPrime(a[i]))
		primenumb+=1;
		
	}
	return primenumb; // STUB!  Replace with correct code.
}
