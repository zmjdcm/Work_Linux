#include<stdio.h>
#include<math.h>
#include "isprime.h"
int isprime(int i)
{
	int flag=1;
	for(int j=2;j<sqrt(i);j++){
		if(i%j==0){
			flag=0;
			break;
		}
	}
	if(flag==1)
		return 1;
	else
		return 0;
 }

