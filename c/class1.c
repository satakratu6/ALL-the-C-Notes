// Array of Characters:-
// #include<stdio.h>
// int main()
// {
// 	char name[10];
// //	for(int i=0;i<10;i++)
// //	{
// //		scanf("%c",&name[i]);
// //		
// //	}
// //	for(int i=0;i<10;i++)
// //	{
// //		printf(" %c",name[i]);
// //		
// //	}
// //	return 0;

// //method 2
// //    scanf("%s",&name);
// //    printf("%s",name);
// //method 3
// //      gets(name);
// //      puts(name);
    
    

// }


// Program of reverse of arrays

// #include<stdio.h>
// int main()
// {
// //	int a[10],i;
// //	for(i=0;i<10;i++)
// //	{
// //		scanf("%d",&a[i]);
// //	}
// //	for(i=9;i>=0;i--)
// //	{
// //		printf("%d",a[i]);
// //	}
// //	return 0;
//     int n,i,j,a[10],b[10];
// //    for(i=0;i<10;i++)
// //    {
// //    	scanf("%d",&a[i]);
// //	}
// //    for(i=10-1;i>=0;i--)
// //	{
// //    	printf("%d",a[i]);
// //
// //	}
//     for(i=0;i<10;i++){
//     	scanf("%d",&a[i]);
// 	}
//     for(i=10-1,j=0;i>=0;i--,j++)
//     {
//     	b[j]=a[i];
// 	}
// 	printf("Reverse array is\n");
// 	for(i=0;i<10;i++)
// 	{
// 		printf("%d\n",b[i]);
// 	}
// //	
// 	return 0;

// }

// Find the maximum and minimum of array
// #include<stdio.h>
// int main()
// {
// 	int i,a[10];
// 	for(i=0;i<10;i++)
// 	{
// 		scanf("%d", &a[i]);
// 	}
// 	int smallest = a[0];
// 	for(i=0;i<10;i++)
// 	{
// 		if(a[i]<smallest)
// 		smallest=a[i];
// 	}
// 	printf("Smallest: %d",smallest);
// 	return 0;
	
// }

// find the vowels of an array

// #include<stdio.h>
// int main ()
// {
// 	char a[10],e,i,o,u;
// 	for(int i=0;i<10;i++)
// 	{
// 		scanf("%c",&a[i]);
// 	}
// 	for(int i=0;i<10;i++)
// 	{
// 		printf("%c",a[i]);
// 	}
// 	char vowel = a[a,e,i,o,u];
// 	for(i=0;i<10;i++)
// 	{
// 		if(a[i]=vowel)
// 		vowel=a[i];
// 	}
// 	printf("Vowel: %d",vowel);
	
	
// 	return 0;
	
// } 

// best:- 
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