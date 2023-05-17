//4.WAP to find peform addition of 2D array & store it into another.

#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter Size : ");
	scanf("%d",&n);
	
	int a[n][n],b[n][n],i,j,sum[n][n];
	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter Elements of 1st Matrix [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	 printf("\n");
	
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
			printf("Enter Elements of 2nd Matrix [%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
   
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
    
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	 printf("\n");
	
	printf("adition of two matrix : \n");
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
