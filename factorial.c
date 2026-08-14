#include<stdio.h>
int main(){
    int n;
    int fact=1;
    printf("enter the n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

    fact=fact*i;}
printf("the factoril of %d is %d\n",n,fact);
return 0;
}
     
     