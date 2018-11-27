#include<stdio.h>
main(){
int a,new,n;
printf("Enter the no");
scanf("%d",&a);
printf("Enter the bit no you want to change");
scanf("%d",&n);
new=a^(1<<n);
printf("After Toggling The no is: %d",new);



}
