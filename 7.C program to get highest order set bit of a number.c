#include <stdio.h>
#define int_size sizeof(int) * 8

int main(){
	
	int raqam, buyurtma = -1, i;
	
	printf("Har qanday raqamni kiriting:");
	scanf("%d", &raqam);
	
	for(i=0; i<int_size; i++){
		if((raqam>>i)&1)
		buyurtma=i;
	}
	if(buyurtma != -1){
		printf("%Highest order set bit in %d is %d¸", raqam, buyurtma);
	}else{
		printf("0 has no set bits.");
	}
	return 0;
}
