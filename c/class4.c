// #WAP to replace all multiples of 5(array elements) with -1 and display the updated array on the screen
// #include <stdio.h>

// int main()
// {
//     int a[]={12,15,13,14,50,35,32,30,11,14};
//     for(int i=0; i<10; i++)
//     {
//         if(a[i]%5==0)
//         a[i]=-1;
//     }
//     for(int j=0; j<10; j++)
//     {
//         printf("%d,",a[j]);
//     }
    

//     return 0;
// }

// #WAP to add elements of two arrays(values):-
// #include <stdio.h>

// int main()
// {
//     int a[10],b[10],c[10],i;
//     printf("Enter the values of first array:-");
//     for(i=0;i<10;i++)
//     {
//     	scanf("%d",&a[i]);
// 	}
// 	printf("Enter the values of second array :-");
// 	for(i=0;i<10;i++)
// 	{
// 		scanf("%d",&b[i]);
// 	}
// 	for(i=0;i<10;i++)
// 	{
// 		c[i]=a[i]+b[i];
// 	}
// 	for(i=0;i<10;i++)
// 	{
// 		printf("%d",c[i]);
// 	}
	
// 	return 0;
// }

// Multidimensional Arrays:-
// how to input
// #include<stdio.h>
// int main()
// {
// int matrix[3][4];
// int i, j;
// for(i=0; i<3; i++)//rows
// { for(j=0; j<4; j++)//columns
// {
// printf("Enter value of matrix[%d][%d]: ",i,j);
// scanf("%d", &matrix[i][j]);
// }
// }
// for(i=0; i<3; i++)
// { for(j=0; j<4; j++)
// { printf("%d\t", matrix[i][j]); }
// printf("\n");
// }

// return 0;
// }



// #include <stdio.h>
// int main()
// {
// int array[10], position, c, n;
// printf("Enter elements\n");
// for (c = 0; c < 10; c++)
// scanf("%d", &array[c]);
// for (c = 0; c < n-1; c++)
// {
// printf("%d\t", array[c]);
// }
// printf("\n\nEnter the location where you wish to delete from an array\n");
// scanf("%d", &position);
// for (c = position; c < 10; c++)
// array[c-1] = array[c];
// printf("\nResultant array is\n");
// for (c = 0; c < 10; c++)
// printf("%d\t", array[c]);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int i, a[10], pos, n;
// printf("Enter the array elements\n");
// for (i = 0; i < 8 ; i++)
// scanf("%d", &a[i]);
// printf("\n CURRENT ARRAY \n");
// for (i = 0; i < 8 ; i++)
// printf("%d ", a[i]);
// printf("\nEnter the position for insertion: ");
// scanf("%d", &pos);
// printf("\nEnter the number for insertion: ");
// scanf("%d", &n);
// for(i = 7; i >=pos-1 ; i--)
// a[i+1]=a[i];
// a[pos-1] = n;
// printf("\n UPDATED ARRAY \n");
// for (i = 0; i < 10; i++)
// printf("%d ", a[i]);
// return 0;
// }

// write the program to count the number of your vowel?

// #include<stdio.h>
// int main()
// {
// char name[10];
// int count;
// printf("Enter your name\n");
// scanf("%s", &name);

// for(int i =0; i<10; i++)
// {
// if(name[i]=='a'||name[i]=='e'||name[i]=='o'||name[i]=='i'||name[i]=='u')
// count++;
// }

// printf("No of vowels: %d", count);
// return 0;
// } 

// Program to find a number from the list of number (Linear search)

// #include<stdio.h>
// int main()
// {
// 	int a[50];
// 	int i,loc=-1,key,n;
// 	printf("\nEnter value of n ");
// 	scanf("%d",&n);
// 	printf("\n Enter the elements: ");
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%d",&a[i]);
// 	}
// 	printf("Enter integer value to search in array ");
// 	scanf("%d",&key);
// 	for(i=0;i<n;i++)
// 	{
// 		if(a[i]==key)
// 		{
// 			loc=i;
// 			break;
// 		}
// 	}
// 	if(loc!=-1)
// 	{
// 		printf("Element found at %d ",loc+1);
// 	}
// 	else
// 	{
// 		printf("Element not found ");
// 	}
// }
