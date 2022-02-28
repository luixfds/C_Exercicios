// 05 - Elaborar um programa que dados 3 números apresente-os ordenados na tela.
#include <stdio.h>

int main()
{
   int a, b, c;
   printf("Numero 1:");
   scanf("%d", &a);
   printf("Numero 2:");
   scanf("%d", &b);
   printf("Numero 3:");
   scanf("%d", &c);
   if (a < b)                                           
       if (b < c) printf("%4d%4d%4d\n", a, b, c);       
       else                                             
           if (a < c) printf("%4d%4d%4d\n", a, c, b);   
           else printf("%4d%4d%4d\n", c, a, b);         
   else                                                 
       if (b < c)                                       
           if (a < c) printf("%4d%4d%4d\n", b, a, c);   
           else printf("%4d%4d%4d\n", b, c, a);         
       else printf("%4d%4d%4d\n", c ,b, a);            
   return 0 ;
}
