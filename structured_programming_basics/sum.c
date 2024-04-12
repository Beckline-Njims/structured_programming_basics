#include<stdio.h>
int main(){
	int n,sum,rem,num;
	printf("enter a 3 digit number:\n");
	scanf("%d",&n);
	if(n<99 || n>999){
		printf("invalid option, enter a three digit number:\n");
	}
	while(num !=0){
		rem =num%10;
		sum += rem;
		num /= 10;
	}
	printf("sum of digits: %d",sum);
	return 0;
}
