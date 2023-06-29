//write a program to print 1 to 10 uising a do-while loop.


#include<stdio.h>
#include<coino.h>

void main(){
int v;

clrscr();
printf("enter the value :");
scanf("%d",&v);

do{
if(v%2==0)
printf("%d\n",v);
v--;
}while(v<=1);

getch();
}