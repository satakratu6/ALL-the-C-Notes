// //#include <stdio.h>
// //
// //int main()
// //{
// //    int array[20], num_elements, i;
// //    FILE *fptr;
// //
// //    printf("Enter the number of elements : ", MAX_SIZE);
// //    scanf("%d", &num_elements);
// //
// //    printf("Enter %d elements: ", num_elements);
// //    for(i=0; i<num_elements; i++)
// //    {
// //        scanf("%d", &array[i]);
// //    }
// //
// //    fptr = fopen("numbers.txt", "w");
// //    if(fptr == NULL)
// //    {
// //        printf("Error opening file.");
// //        return 1;
// //    }
// //
// //    for(i=0; i<num_elements; i++)
// //    {
// //        fprintf(fptr, "%d ", array[i]);
// //    }
// //
// //    fclose(fptr);
// //
// //    // read array from file
// //    fptr = fopen("numbers.txt", "r");
// //    if(fptr == NULL)
// //    {
// //        printf("Error opening file.");
// //        return 1;
// //    }
// //
// //    printf("\nReading array from file: ");
// //    for(i=0; i<num_elements; i++)
// //    {
// //        fscanf(fptr, "%d", &array[i]);
// //        printf("%d ", array[i]);
// //    }
// //
// //    fclose(fptr);
// //
// //    return 0;
// //}
// //
// //#include<stdio.h>
// //int main(){
// //	int a = 7;
// //	int *p;
// //	p=&a;
// //}
// ////make a program to copy contents of 1 file to another 
// //#include<stdio.h>
// //int main()
// //{
// //	int num;
// ////	char msg;
// //	FILE * fp1;
// //	FILE * fp2;
// //
// //	printf("enter a number");
// //	scanf("%d",&num);
// //	fp1=fopen("source.txt","w");
// //	if(fp1==NULL)
// //	printf("\nfile not found");
// //	fp2=fopen("dest.txt","w");
// //	
// //	
// //	fscanf(fp1,"%d",num);
// //	fprintf(fp2,"%d",num);
// ////	fprintf(fp2,"%d",&num);
// ////	fprintf(fp2,"%s",msg);
// //	
// //	
// //	fclose(fp1);
// //	fclose(fp2);
// //	
// //}

// //#include <stdio.h>
// //
// //int main() {
// //    int a = 7,*p;
// //    int p = &a;
// //
// //    printf("The address of a is %u\n", p);
// //    printf("The value of *p is %d\n", *p);
// //
// //    return 0;
// //}

// //#include<stdio.h>
// //#include<stdlib.h>
// //#include<string.h>

// //int main()
// //{
// //    int a=8;
// //    int *const p;
// //    int b=5;
// //	p = &b;
// //    p = &a;
// //
// //    printf("The value of p is:%u",p); 
// //
// //    //printf("\nThe value of *p is: %d",*p);
// //}
// #include<stdio.h>
// int main()
// {

// void *q;
// int a=5;
// float f=10.9;
// char c='s';
// q=&a;
// printf("%d", (int)q);
// q=&c;
// printf("%c",(char)q);
// return 0;
// }

// #include<stdio.h>
// int main()
// {

// void *q;
// {

// int a=5;
// float f=10.9;
// char c='s';
// q=&a;
// printf("%d", (int)q);
// q=&c;
// printf("%c",(char)q);
// }
// return 0;
// }

// include<stdio.h>
// int main()
// {
// #i
// void *q;
// {

// int a=5;
// float f=10.9;
// char c='s';
// q=&a;
// printf("%d", (int)q);
// q=&c;
// printf("%c",(char)q);
// q=&f;
// printf("%f",(float)q);

// }
// printf("%f",(float)q);

// return 0;

// }

// #include<stdio.h>
// float calarea(int*);
// int main()
// {
// 	int r=5;
// 	float area = calarea(&r);
// 	printf("The area of the circle is :- %f",area);
// 	return 0;
	
// }
// float calarea(int *rad)
// {
// 	return (3.14 * *rad * *rad);
// }

// #include<stdio.h>
// int sum1(int*,int*);
// int main()
// {
// 	int a=10,b=20,ans;
// 	ans=sum1(&a, &b);
// 	printf("\nsum of increment and decrement :- %d" ,ans);
// 	return 0;
	
// }
// int sum1(int *p, int*q)
// {
// 	printf("\npointer p values is %u",p);
// 	p++;
// 	printf("\npointer p values is %u",p);
// 	return ((*p++)+(*q--));
// }
 
// s