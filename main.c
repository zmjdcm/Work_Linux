#include<stdio.h>
#include<math.h>
#include "isprime.h"
int main()
{
	int count = 0;
	for(int j=1;j<100000;j++){
		int flag =isprime(j);
			count += flag;
	}
	printf("%d",count);
	return 0;
}
