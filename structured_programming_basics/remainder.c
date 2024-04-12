#include<stdio.h>
int main(){
	int a ,remainder,b;
	printf("enter the two numbers:\n");
	scanf("%d %d", &a,&b);
	remainder=a-b*(a/b);
	printf("the remainder is : %d\n",remainder);
	return 0;
}
