#include <stdio.h>

int main(){
	
	int raqam, teskari_raqam;
	
	printf("Har qandat raqamni kiriting:");
	scanf("%d",&raqam);
	
	teskari_raqam =~ raqam;
	
	printf("Haqiqiy raqam = %d(Onlik kasrda)\n",raqam);
	printf("Bitdan keyin raqam = %d(Onlik kasrda)",teskari_raqam);
	
	return 0;
}
