#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main (){
	
	int raqam,hisoblash,msb,i;
	
	printf("Har qanday raqamni kiriting:");
	scanf("%d",&raqam);
	
	msb = 1 << (INT_SIZE -1);
	
	hisoblash = 0;
	
	for(i = 0; i < INT_SIZE; i++)
	{
		if((raqam << i) & msb){
			break;
		}
		hisoblash++;
	}
	printf("Total number of leading zeros in %d is %d", raqam,hisoblash);
	
	return 0;
}
