#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int num1,num2,numtotol=0;
	
	printf("�п�J�Ʀr�W��:");
	scanf("%d",&num2);
	for(num1=0;num1<=num2;num1++){
		numtotol=num1+numtotol;
	}
	printf("�Ʀr�[�`�ᬰ%d\n",numtotol);
	
    system("PAUSE"); 
	return 0;
}
