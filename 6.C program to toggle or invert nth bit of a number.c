#include <stdio.h>

int main(){
	int raqam,n,yangi_raqam;
	
	printf("Har qanday raqamni kiriting:");
	scanf("%d", &raqam);
	
	printf("O'tish uchun n-bitni kiriting (0-31):");
	scanf("%d", &n);
	
	yangi_raqam = raqam ^ (1 << n);
	
	printf("Bit muvaffaqiyatli almashtirildi.\n\n");
	printf("Number before toggling %d bit: %d\n(o'nlik kasrda) \ n",n,raqam);
	printf("Number after toggling %d bit: %d %d (o'nlik kasrda) \ n",n,yangi_raqam);
	
	return 0;
	
}
