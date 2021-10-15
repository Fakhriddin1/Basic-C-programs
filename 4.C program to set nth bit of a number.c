#include <stdio.h>

int main()
{
	int raqam, n, yangi_raqam;
	
	printf("Har qanday raqamni kiriting:");
	scanf("%d",&raqam);
	
	printf("Ornatish uchun n-bitni kiriting(0-31):");
	scanf("%d", &n);
	
	yangi_raqam = (1 << n) | raqam;
	
	printf("Bit sozlandi. \n\n");
	printf("Number before setting %d bit: %d (o'nlik kasrda) \n",n,raqam);
	printf("Number after setting %d bit: %d(o'nlik kasrda) \n",n,yangi_raqam);
	
	return 0;
}
