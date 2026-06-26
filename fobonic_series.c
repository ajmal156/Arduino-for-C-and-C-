#include<stdio.h>
int main(){

     int n , first  = 0 , second  = 1 , next ;

     printf("Enter the number series: ");
     scanf("%d" , &n);

     for (int i = 1; i <= n; i++)
     {
          printf("%d\n" , first);

          next = first + second;
          first = second;
          second = next;
     }
     getchar();
     return 0;

}