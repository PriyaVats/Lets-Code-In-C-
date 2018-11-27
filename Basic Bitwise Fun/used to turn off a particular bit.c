#include<stdio.h>
main(){
int n,i,j;
printf("Enter the Num and position : ");
scanf("%d%d",&n,&i);
i=((n>>i)^0);
printf("The new Num is : %d",i);

}
