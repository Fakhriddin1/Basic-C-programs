#include <stdio.h>

int main(){
		
		int raqam, n, yangi_raqam;
		
		printf("Har qanday raqamni kiriting:");
		scanf("%d",&raqam);
		
		printf("Tozalash uchun n-bitni kiriting (0-31):");
		scanf("%d",&n);
		
		yangi_raqam = raqam & (~(1 << n));
		
		printf("Bit muvaffaqiyatli tozalandi.\n\n");
		printf("Number before clearing %d bit: %d (in decimal)\n",n,raqam);
		printf("Number after clearing %d bit: %d (o'nlik kasrda) \ n",n,yangi_raqam);
		
		return 0;
}
