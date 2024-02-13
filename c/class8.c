// //Write a program to print of all array elements using pointer
// // find minimum values in an array of numbers using pointer
// //search a value from a list of 10 numbers using pointers
 
 
// //How to find maximum of an array using pointers:-  
// //#include<stdio.h>
// //int main()
// //{
// //int arr[9]= {2,3,1,6,4,8,9,11,5};
// //int *p;
// //int MAX;
// ////p=&arr[0]; // address of first element
// //p = arr; // same as above line
// //MAX = *p; // or MAX = arr[0];
// //for(int i=0; i<9; i++)
// //if(MAX< *(p+i))
// //MAX = *(p+i);
// //
// //printf("Values are %d\n", MAX);
// //return 0;
// //
// //
// //}

// //Q2:- 
// //#include<stdio.h>
// //int main()
// //{
// //int arr[9]= {2,3,1,6,4,8,9,11,5};
// //int *p;
// //int MIN;
// //
// //p = arr; 
// //MIN= *p; 
// //for(int i=0; i<9; i++)
// //if(MIN > *(p+i))
// //MIN = *(p+i);
// //
// //printf("Values are %d\n", MIN);
// //return 0;
// //
// //
// //}
// //Q1:- 
// //#include <stdio.h>
// //int main() {
// //    int arr[100], size;
// //    int *ptr, sum = 0;
// //    printf("Enter the size of the array: ");
// //    scanf("%d", &size);
// //    printf("Enter array elements: ");
// //    for (int i = 0; i < size; i++) {
// //        scanf("%d", &arr[i]);
// //    }
// //    // Set address of first array element to *ptr
// //    ptr = arr;
// //    for (int i = 0; i < size; i++) {
// //        sum = sum + *ptr;
// //        ptr++; // Increment pointer by one to get next element
// //    }
// //    printf("The sum of array elements is: %d", sum);
// //    return 0;
// //}

// //Q3:-
// #include <stdio.h>

// int main() 
// {
//     int numbers[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
//     int n,i;
//     printf("Enter values to be seacrched\n");
//     scanf("%d",&n);
//     int *ptr = numbers;
    
//     for (i = 0; i < 10; i++) 
//     {
//         if (*ptr == n) 
//         {
//             printf("Value found at index %d\n", i);
//             break;
//         }
//         ptr++;
//     }
//     if (i == 10) 
//     {
//         printf("Value not found in the list\n");
//     }
//     return 0;
    
// }