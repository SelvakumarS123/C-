//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//    int a=4,b;
//    b=sqrt(a);
//    cout << b << endl;
//    int c=4,d=4,e;
//    e=pow(c,2)+pow(d,2);
//    cout<<e<<endl;
//    return 0;
//}




////1.	Check whether the given number is prime or not
//#include <stdio.h>
//int main()
//{
//int n, i, flag = 0;
//printf("Enter a positive integer: "); scanf("%d", &n);
//
//
//for (i = 2; i <= n / 2; ++i)
//{
//if (n % i == 0) { flag = 1; break;
//}
//}
//
//
//if (n == 1) {
//printf("1 is neither Prime nor Composite");
//}
//else {
//if (flag == 0)
//printf("%d is a Prime number", n); else
//printf("%d is not a Prime number", n);
//}


//return 0;
//}


////2.	Check if the given number is Odd or Even
//#include <stdio.h>
// int main()
//{
//int n;
//printf("Enter an integer: "); scanf("%d", &n);
//
//
//if(n % 2 == 0)
//printf("%d is an Even Number", n); else
//printf("%d is an Odd Number", n);
//
//
//return 0;
//}
//
//
////3.	Check if the given number is Positive or Negative
//#include <stdio.h>
//int main()
//{
//int num;
//
//
//printf("Enter a number: "); scanf("%d", &num);
//
//if (num == 0)
//printf("The number is neutral (0)"); else if (num < 0)
//printf("%d is a Negative Number", num); else
//printf("%d is a Positive Number", num); return 0;
//}

//
////4.	Reverse the given string
//#include <stdio.h>
//
//#include <string.h>
//
//
//void reverse(char *str1)
//{
//static int i, len, temp; len = strlen(str1);
//if (i < len/2)
//{
//temp = str1[i];
//str1[i] = str1[len - i - 1]; str1[len - i - 1] = temp; i++;
//reverse(str1);
//}
//}
//int main()
//{
//char str1[50];
//
//
//printf ("\n\nEnter the string: "); gets(str1);
//
//printf (" \nBefore Reversing the String : %s", str1);
//
//
//reverse(str1);
//printf (" \nAfter Reversing the String : %s", str1);
//
//
//return 0;
//}
//
//5.	Check if the given string is Equal or Not
#include<stdio.h> #include<conio.h>
int main()
{
char str1[50], str2[50]; int i = 0, flag = 0;

printf("\nEnter First String : "); gets(str1);
printf("\nEnter Second String : "); gets(str2);

while(str1[i] != '\0' || str2[i] != '\0')
{
if(str1[i] != str2[i])
{
flag = 1; break;
}
i++;
}


if(flag == 0)
printf("\nStrings are Equal"); else
printf("\nStrings are not Equal"); return 0;
}
