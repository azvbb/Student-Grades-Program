#include<stdio.h>
int main ()
{
	int i,j,max,min,low,sum;
    int class1[10];
    int class2[10];
    int class3[10];
	int passed = 0;
	int failed = 0;
	
	for (i=0;i<3;i++)
	{
		for(j=0;j<10;j++)
		{
			if (i==0)
			{
			printf("Enter Class 1 Student %d Degree : \n",j);
			scanf("%d",&class1[j]);
			}
			if (i==1)
			{
			printf("Enter Class 2 Student %d Degree : \n",j);
			scanf("%d",&class2[j]);
			}
			if (i==2)
			{
			printf("Enter Class 1 Student %d Degree : \n",j);
			scanf("%d",&class3[j]);
			}
		}
	}
	for ( i =1 ; i <= 3 ; i++)
	{
		for (j=0 ; j<10 ; j++)
		{
			if (i==1)
			{
				if (class1[j] > max)
					max = class1[j];
				else if (class1[j] < min)
					min=class1[j];
				
				if (class1[j] >= 50 )
					passed++;
				else
					failed++;
				sum+=class1[j];
			}
			
			if (i==2)
			{
				if (class2[j] > max)
					max=class2[j];
				else if (class2[j] < min)
					min=class2[j];
				
				if (class2[j] >= 50)
					passed++;
				else
					failed++;
				sum+=class2[j];
			}
			if (i==3)
			{
				if (class3[j] > max)
					max=class3[j];
				else if (class3[j] < min)
					min=class3[j];
				
				if (class3[j] >= 50)
					passed++;
				else
					failed++;
				sum+=class3[j];
			}
		}

	}
	printf("\nPassed Students = %d \n",passed);
	printf("Failed students = %d \n",failed);
	printf("Highest Grade = %d \n",max);
	printf("Lowest Grade = %d \n",min);
	printf("Average Grade = %d \n",sum/30);
	
	return 0;

}
			

