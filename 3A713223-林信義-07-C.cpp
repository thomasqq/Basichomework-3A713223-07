#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int num1,num2,numtotol=0;
	
	printf("請輸入數字上限:");
	scanf("%d",&num2);
	for(num1=0;num1<=num2;num1++){
		numtotol=num1+numtotol;
	}
	printf("數字加總後為%d\n",numtotol);
	
    system("PAUSE"); 
	return 0;
}
