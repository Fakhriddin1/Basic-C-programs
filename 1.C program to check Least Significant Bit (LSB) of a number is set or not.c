#include <stdio.h>

int main(){
	int raqam;
	
	printf("Har qanday sonni kiriting:");
	scanf("%d",&raqam);
	
	if(raqam & 1){
	
		printf("LBS %d ornatildi(1).",raqam);
		}else{
			printf("LBS %d sozlanmagan (0).",raqam);
		}
	return 0;			
}
