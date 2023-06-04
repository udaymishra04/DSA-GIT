#include<stdio.h>
#include<math.h>
int main(){
     int a,b;
     printf("enter the value for a : ");
     scanf("%d",&a);
     printf("enter the value for b : ");
     scanf("%d",&b);
     double result = pow(a,b);
     printf("are of the reactangle is %.0f\n",result);
     return 0;
}