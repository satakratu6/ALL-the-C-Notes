// Steps to work with files:-
// 1.File pointer of type FILE
// 2.Open the file
// modes
// 3. If file pointer doesn't open, returns NULL value
// 4.Read -> fscanf/fgets
// 5.Write -> fprintf/fputs

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
// int num;
// char msg[50];
// FILE *fptr;
// fptr = fopen("hellostudents.txt","w");
// if(fptr == NULL)
// {
// printf("Error opening file!");
// exit(1);
// }
// printf("Enter num: ");
// scanf("%d",&num);

// printf("Enter greetings: ");
// scanf("%s",msg);
// fprintf(fptr,"%d\n",num);
// fprintf(fptr,"%s",msg);
// fclose(fptr);

// return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// int num;
// char msg[20];
// FILE *fptr;
// if ((fptr = fopen("hellostudents.txt","r")) == NULL){
// printf("Error! opening file");

// // Program exits if the file pointer returns NULL.
// exit(1);
// }

// fscanf(fptr,"%d", &num);
// fscanf(fptr,"%s", msg);

// printf("Value of n=%d\n", num);
// printf("Value of msg=%s", msg);
// fclose(fptr);

// return 0;
// }s