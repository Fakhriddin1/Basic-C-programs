#include <stdio.h>

int main()
{
	int raqam, n, bitstatus;
	
	printf("Har qanday raqamni kiriting:");
	scanf("%d", &raqam);
	
	printf("Tekshirish uchun n-bitni kiriting (0-31):");
	scanf("%d", &n);
	
	bitstatus = (raqam >> n) & 1;
	
	printf("The %d bit is set to %d", n, bitstatus);
	
	return 0;
	
}
