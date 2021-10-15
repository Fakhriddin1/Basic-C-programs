#include <stdio.h>
#define  BITS sizeof(int)*8 //Butun sonni ifodalash uchun zarur bo'lgan umumiy bitlar

int main()
{
	int raqam, msb;
	
	printf("Har qanday raqamni kiriting:");
	scanf("%d",&raqam);
	
	msb = 1 << (BITS - 1);
	if(raqam & msb){
	printf("Msb %d ornatildi(1).", raqam);
		}else{
  	printf("Msb %d sozlanmagan(0).",raqam);
  }
  	return 0;
}
