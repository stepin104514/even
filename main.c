#include<stdio.h>
#include "evennumber.h"

int main(void)
{
	int n=7;
	int p = evennumber(n);
	switch(p)
	{
   	 case 1:
        	printf("odd");
   	 case 0:
      		printf("even number");
	}
	return 0;
}
