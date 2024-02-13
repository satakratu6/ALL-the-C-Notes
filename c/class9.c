// #include<stdio.h>
// #include<string.h>
// //int main(){
// //	char fname[50]="Satakratu ";
// //	char lname[50]="Chakraborty";
// //	strcat(fname,lname);
// //	printf("%s\n", fname);
// //	printf("%d\n", strlen(fname));
// //	printf("%d",sizeof(fname));
// //	return 0;
// //}

// //int main()
// //{
// //	char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// //	printf("%d\n",strlen(alphabet));
// //	printf("%d",sizeof(alphabet));
// //}

// //int main()
// //{
// //	char str2[20], str1[]="Welcome";
// //	strcpy(str2,str1);
// //	printf("%s",str2);
// //	
// //}
// int main()
// {
// 	char str1[]="Hello";
// 	char str2[]="Hello";
// 	char str3[]="Humbleazxcgju9";
// 	printf("%d\n",strcmp(str1,str2));
// 	printf("%d\n",strcmp(str1,str3));

	
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	int a=123;
// 	char str[1000];
// 	itoa(a,str,2);
// 	printf("\n Binary:%s",str);
// 	itoa(a,str,10);
// 	printf("\n Decimal:%s",str);
// 	itoa(a,str,16);
// 	printf("\n Hexadecimal:%s",str);
// 	itoa(a,str,8);
// 	printf("\n Octal:%s",str);
	
// }

// int main()
// {
// 	char x='z'-'a';
// 	printf("%c",x);
// 	return 0;
// }

// int main()
// {
// 	char str[]="Hello";
// 	printf("%s\n", strrev(str));
// 	if(strcmp(str,strrev(str))==0){
// 		printf("This is palindrome");
// 	}
// 	else
// 	printf("This is not a palindrome");
// 	return 0;
// }

// int main(){
// 	char s[20]="Madam";
// 	int i, j, flag=0;
// 	int l=strlen(s);
// 	for(i=0,j=l-1;i<j;i++,j--)
// 	{
// 		if(s[i]==s[j])
// 		flag=1;
// 	}
// 	if (flag==0)
// 	printf("Not palindrome");
// 	else
// 	printf("palindrome");
// 	return 0;
// }

// #include<stdio.h>
// int main(){
// 	char s1[]="Stringcopy!!",s2[100];
// 	int i;
// 	printf("string s1: %s\n",s1);
// 	for(i=0;s1[i]!='\0';++i){
// 		s2[i]=s1[i];
// 	}
// 	s2[i]='\0';
// 	printf("String s2: %s", s2);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	char str1[20];
// 	char str2[20];
// 	printf("Enter the 1st string:- ");
// 	scanf("%s",str1);
// 	printf("Enter the 2nd string:- ");
// 	scanf("%s",str2);
// 	int flag = 0, i=0;
// 	while(str1[i]!='\0' && str2[i]!='\0')
// 	{
// 		if(str1[i]!=str2[i])
// 		{
// 			flag=1;
// 			break;
// 		}
// 		i++;
// 	}
// 	if(flag==0)
// 	printf("strings are same");
// 	else
// 	printf("strings are not same");
	
// }

// #include<stdio.h>
// int main()
// {
// 	char str1[20];
// 	char str2[20];
// 	int i,j;
// 	printf("Enter the first string:- ");
// 	scanf("%s",str1);
// 	printf("Enter the second string:- ");
// 	scanf("%s",str2);
// 	while(str1[i]!='\0')
	
// 		i++;
// 		while(str2[j]!='\0')
// 		{
// 			str1[i]=str2[j];
// 			j++;
// 			i++;
// 		}
// 	str2[i]='\0';
// 	printf("Concentrated : %s",str1);
// 	return 0;
	
		
	
	
// }