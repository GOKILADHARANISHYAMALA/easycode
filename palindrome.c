# easycode
#include<stdio.h>
int main()
{
 int realnum,num,mod,rev=0;
 printf("\nEnter the number");
 scanf("%d",&num);
 realnum=num;
 while(num!=0)
 {
  mod=num%10;
  rev=rev*10+num%10;
  num=num/10;
 }
 printf("\n reverse is %d",rev);
 if(rev==realnum)
  printf("\n Palindrome");
 else
  printf("\nNot Palindrome");
 return 0;
}
