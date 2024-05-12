#include<stdio.h>
main()
{
	int x=0,y=0,n;
	float sum=0,average;
	int a[3][3]={{2,4,1},{3,5,4},{8,2,6}};
	
	printf("Enter the array's row size: ");
	scanf("%d",&n);
	printf("Enter the array's column size: ");
	scanf("%d",&n);

	
		for(x=0; x<3; x++){
		for(y=0; y<3; y++){
			scanf("\n%d",&a[x][y]);
		}
	}

	printf("\nEnter array's elements: ");
	for(x=0; x<3; x++){
		for(y=0; y<3; y++){
			printf("\na[%d][%d]= %d\n",x,y,a[x][y]);
		}
	}
	printf("\nAverage of an Array: ");
	for(x=0; x<3; x++){
		for(y=0; y<3; y++){
		  sum += a[x][y];
		  average = sum/9;	
		}
	}
	printf("%.2f ",average);
}