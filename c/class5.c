// Using struct function:- 
// #include<stdio.h>
// struct KOCMR {
// int roll;
// float marks;
// char grade;
// };
// int main() {
// struct KOCMR s1,s2;

// printf("Enter roll number of first student");
// scanf("%d",&s1.roll);
// printf("\nEnter roll number of second student");
// scanf("%d",&s2.roll);

// printf("\nEnter marks of first student");
// scanf("%f",&s1.marks);
// printf("\nEnter marks of second student");
// scanf("%f",&s2.marks);

// printf("\nEnter grade of first student");
// scanf(" %c",&s1.grade);
// printf("\nEnter grade of second student");
// scanf(" %c",&s2.grade);

// printf("Details of first student: %d, %.2f, %c", s1.roll,s1.marks,s1.grade);

// printf("Details of second student: %d, %.2f, %c", s2.roll,s2.marks,s2.grade);

// return 0;
// }



// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int main() {
// /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// int n,sum=0;
// scanf("%d",&n);
// int ar[n];
// for(int i=0 ; i<n ; i++)
// {
// scanf("%d",&ar[i]);
// sum = sum+ar[i];
// }
// printf("%d",sum);
// return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// int num, *arr, i;
// scanf("%d", &num);
// arr = (int*) malloc(num * sizeof(int));
// for(i = 0; i < num; i++) {
// scanf("%d", arr + i);
// }

// for(i = num-1; i>-1; i--)
// printf("%d ", *(arr + i));

// return 0;
// }

// #include<stdio.h>
// int sum(int u);
// int main()
// {
// 	int arr[100],i,n,s=0;
// 	scanf("%d",&n);
// 	printf("\n Enter array elements:- ");
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%d",&arr[i]);
// 	}
// 	printf("\n Passing elements by ");
// 	for(i=0;i<5;i++)
// 	{
// 	s=s+sum(arr[i]);
// 	}
// 	printf("\n\n Sum is %d",s);
// 	return 0;
// }
// int sum(int u)
// {
// 	return u;
// }

// #Name of the array itself is a pointer

// # arr=&arr[0]
// Call By Methods
// #include<stdio.h>
// void reference(int x[],int size);
// int main()
// {
// 	int arr[100],n,i;
// 	scanf("%d",&n);
// 	printf("Enter the elements:- ");
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%d",&arr[i]);
// 	}
// 	printf("\n Elements by reference: ");
// 	reference(arr,n);
// 	return 0;	
// }
// void reference(int x[],int size)
// {
// 	int i;
// 	for(i=0;i<size;i++)
// 	{
// 		printf("%d",x[i]);
// 	}
// }

// Sum:-
// Call By methods
// #include<stdio.h>
// void reference(int x[],int size);
// int main()
// {
// 	int arr[100],n,i;
// 	scanf("%d",&n);
// 	printf("Enter the elements:- ");
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%d",&arr[i]);
// 	}
// 	printf("\n Elements by reference: ");
// 	reference(arr,n);
// 	return 0;	
// }
// void reference(int x[],int size)
// {
// 	int i,sum=0;
// 	for(i=0;i<size;i++)
// 	{
// 		sum=sum+x[i];
// 	}
// 	printf("%d",sum);
// }

// Q) Make a structure of car of my choice name of the car, seats, price, mileage.

// #include <stdio.h>

// struct car {
//     int seats;
//     float mileage;
//     int price;
//     char name[15];
// };

// int main() {
//     struct car c1, c2, c3;
//     printf("Enter details of the first car:\n");
//     scanf("%s %d %f %d", c1.name, &c1.price, &c1.mileage, &c1.seats);
//     printf("Enter details of the second car:\n");
//     scanf("%s %d %f %d", c2.name, &c2.price, &c2.mileage, &c2.seats);
//     printf("Enter details of the third car:\n");
//     scanf("%s %d %f %d", c3.name, &c3.price, &c3.mileage, &c3.seats);
//     printf("Details of car1:  %s %d %.2f %d\n", c1.name, c1.price, c1.mileage, c1.seats);
//     printf("Details of car2: %s %d %.2f %d\n", c2.name, c2.price, c2.mileage, c2.seats);
//     printf("Details of car1: %s %d %.2f %d\n", c3.name, c3.price, c3.mileage, c3.seats);


//     return 0;
// }