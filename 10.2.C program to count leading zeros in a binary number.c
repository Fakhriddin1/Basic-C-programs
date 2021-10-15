#include <stdio.h>
#include <limits.h>

int main(){
	
	int raqam, hisoblash;
	
	printf("Har qanday raqamni kiriting:");
	scanf("%d",&raqam);
	
	hisoblash = 0;
	while(!(raqam & (~INT_MAX)))
	{
		hisoblash++;
		raqam <<= 1;
	}
	printf("Total number of leading zeros = %d",hisoblash);
	return 0;
}
