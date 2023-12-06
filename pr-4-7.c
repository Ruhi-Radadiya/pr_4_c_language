#include<stdio.h>
void main()
{
	int i,j,s;
	for(i=1;i<=5;i++){
		for(s=4;s>=i;s--){
			printf("  ");
		}
		for(j=1;j<=i;j++){
			(j==1)?printf("*"):printf("   ");
		}
		for(j=2;j<=i;j++){
			(j==i)?printf("*"):printf(" ");
		}
		printf("\n"); 
	}
}