#include<stdio.h>
#define int_size sizeof(int)*8
main(){
int i,num,count=0;
printf("Enter the number : ");
scanf("%d",&num);
for(i=0;i<int_size;i++){
    if((num>>i)&1)
    break;
    else
     count++;
}
printf("\n The trailing zeroes are %d",count);

}
