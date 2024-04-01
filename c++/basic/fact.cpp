#include<stdio.h>
int ispalidrome(long int num);
long int reve(long int n);


int main(){
    long int num;
    printf("Enter Your Number:");
    scanf("%ld",&num);
    if(ispalidrome(num))
       printf("Number is palidrome\n");
    else
    printf("Number is not palidrome\n");
    return 0;
}
int ispalidrome(long int num){
 if(num==reve(num)){
     return 1;
   
 }
    return 0;
}
       
       long int reve(long int n){
        long int  rev=0;
        
          do{
              rev=rev*10+n%10;
              n=n/10;
          }while(n>0);
          return rev;
       }
       
