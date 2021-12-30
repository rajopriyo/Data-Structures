#include<stdio.h>
int main(){
	char str[45];
	printf("Enter the string= ");
	scanf("%s",str);
	int c=0,i=0,n;
	while(str[i]!='\0')
	{
		c++;
		i++;
	}
	
	printf("Length= %d",c);
	
	printf("\nEnter the index no of char= ");
	scanf("%d",&n);
	if(n>c)
	{
		printf("Invalid input");
	}
	else
	{
	
	printf("Character at index %d is %c",n,str[n-1]);
	
	}
}
