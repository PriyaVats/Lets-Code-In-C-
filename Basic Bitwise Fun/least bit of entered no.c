#include<stdio.h>
int main(){
int num;
printf("Enter a number");
scanf("%d",&num);
if(num&1)
printf("Least Bit is high!");
else
printf("Least Bit is low!");

}
