#include<stdio.h>
main()
{
	int x=0,y=0,m,n;
	int sum=0;
	int a[5][5]={{2,4,1,6,3},{9,5,4,6,7},{8,2,6,3,5},{3,4,8,5,1},{2,3,9,5,7}};
	
	printf("Enter the array's row size: ");
	scanf("%d",&m);
	printf("Enter the array's column size: ");
	scanf("%d",&n);

	
		for(x=0; x<5; x++){
		for(y=0; y<5; y++){
			scanf("\n%d",&a[x][y]);
		}
	}

	printf("\nEnter array's elements: ");
	for(x=0; x<5; x++){
		for(y=0; y<5; y++){
			printf("\na[%d][%d]= %d\n",x,y,a[x][y]);
		}
	}
	printf("\n");
	for(x=0; x<5; x++){
		for(y=0; y<5; y++){
		  if(x==0 || y==0 || x==5-1 || y==5-1){
          printf("%d ",a[x][y]);
	}else{
		printf(" ");
		printf(" ");
	}
		}
		printf("\n");
	}
	printf("\nThe sum of boundary elements of an Array: ");
 for (x= 0; x<5; x++) {
        for (y=0; y<5; y++) {
            if (x==0)
                sum+=a[x][y];
            else if (x==5-1)
                sum += a[x][y];
            else if (y==0)
                sum += a[x][y];
            else if (y==5-1)
                sum += a[x][y];
        }
    }
    printf("%d",sum);
}