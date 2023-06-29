// write a program to print 1 to 10 using a do-while loop.

#include<stdio.h>
#include<conio.h>


void main(){
int v=1;
clrscr();
do{
  printf("%d\n",v);
  v++;
}while(v<=10);

getch();
}