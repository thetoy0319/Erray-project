//6.WAP to perform diagonal sum of 2D array.

#include<stdio.h>

int main(){
	
	int a[10][10];
	int i,j,r,c;
	int sum=0;
	
	printf("enter row : ");
	scanf("%d",&i);
	
	printf("enter column : ");
	scanf("%d",&j);
	
	for(r=0;r<i;r++){
		for(c=0;c<j;c++){
			printf("enter nnumber[%d][%d] : ",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	
	for(r=0;r<i;r++){
		sum=sum+a[r][r];
	}
	
	printf("\n the sum of diagonal elements : %d",sum);
	
	
	return 0;
}


