#include<stdio.h>
int main(){
	char n;
	printf("enter a symbol:\n");
	scanf("%c",&n);
	if(n>='a'&&n<='z') {
	printf("%c is a small letter,",n);
	}
	else if (n>='A' && n<='Z')
	{
		printf(" %c is a capital letter,",n);
	}
	else if(n>=1000 && n<=0){
		printf(" %d is a digit,",n);
	}
	else{
		printf("it is a special character:\n");
	}
}
