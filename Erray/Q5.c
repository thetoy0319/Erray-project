//.WAP to perform row-wise sum of 2D array.//

#include<stdio.h>

int main(){
	int i,j,c,r;
	int sum=0;  
	int a[3][3];                            
	
	printf("Enter row : ");
	scanf("%d",&i);
	
	printf("Enter column : ");
	scanf("%d",&j);
	
	for(r=0; r<i; r++){
	for(c=0; c<j; c++){
		printf("Enter number[%d][%d] :",r,c);
		scanf("%d", &a[r][c]);
		}
	}
	for(r=0; r<i; r++){
		for(c=0; c<j; c++){
			sum=sum+a[r][c];
		}
		 printf("\n the sum of element of row in matrix:  %d\t",sum);
	}
	  
        return 0;
    }
