#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void accept(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter the element at %d index:",i);
		scanf("%d",&a[i]);
	}
}

void display(int a[],int n)
{
	printf("Array is :");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void sum_of_array(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}

	printf("Sum of Array is : %d\n",sum);
}

void max_element_of_array(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}

	printf("Max element of Array is : %d\n",max);
}

void min_element_of_array(int a[],int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}

	printf("Min element of Array is : %d\n",min);



}

void even_element_of_array(int a[],int n)
{
	printf("Even element of Array : ");
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}

void reverse_element_of_array(int a[],int n)
{
	printf("Reverse element of Array : ");
	for(int i=n-1;i>=0;i--)
	{
			printf("%d ",a[i]);
	}
		
	
	printf("\n");

}

void prime_element_of_array(int a[], int n) {
    printf("Prime elements of Array: ");
    
   
    for (int i = 0; i < n; i++)
     {
        int t = a[i];

        if (t <= 1) 
        {
            continue;
        }

        int isPrime = 1; 
        for (int j = 2; j < t; j++) 
        {
            if (t % j == 0) 
            {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime) {
            printf("%d ", t);
        }
    }
    printf("\n");
}
void ascending_order(int a[],int n)
{
	int t;
	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}

		}
	}

}

void decending_order(int a[],int n)
{
	int t;
	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}

		}
	}

}

int even_and_odd_element_of_array(int a[],int n)
{
	printf("Even element of Array : ");
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	printf("Odd element of Array : ");
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}

int second_largest_element(int a[],int n)
{
	int largest;
	int second_largest;

	largest=a[0];
	second_largest=a[1];

	for(int i=0;i<n;i++)
	{
		if(a[i]>largest)
		{
			largest=a[i];
			second_largest=largest;
		}
		else if(a[i]>second_largest && a[i]!=largest)
		{
			second_largest=a[i];
		}
	}

	printf("Second largest :%d\n",second_largest);
}


void occurance_of_given_element(int a[],int n,int data)
{
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==data)
		{
			cnt++;
		}
	}

	printf("%d occure %d time in above array \n",data,cnt);
}


int main()
{
	int *a,n;
	printf("How many number you want to store :");
	scanf("%d",&n);

	a=(int*)malloc(n*sizeof(int));

	accept(a,n);
	display(a,n);
	sum_of_array(a,n);
	max_element_of_array(a,n);
	min_element_of_array(a,n);
	even_element_of_array(a,n);
	reverse_element_of_array(a,n);
	ascending_order(a,n);
	printf("ascending_order is :");
	display(a,n);
	decending_order(a,n);
	printf("decending_order is :");
	display(a,n);
	prime_element_of_array(a,n);
	even_and_odd_element_of_array(a,n);
	second_largest_element(a,n);
	int data;
	printf("Find element how many time occure : ");
	scanf("%d",&data);
	occurance_of_given_element(a,n,data);
	
	return 0;
}