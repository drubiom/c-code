#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,x,y;
    do{
      x=3;
      y=1;
      printf("Introduce un número:(o cero para salir)\n");
      scanf("%i",&n);
      if(n!=0){
        if(n%2==0){
           printf("El número %i es par, por lo que no es primo\n",n);
         }
        else if(n==3){
           printf("El numero 3 es primo\n");
        }
        else{
          while(x,x=x+2,x<n && y==1){
              if(n%x==0){
                  printf("El número es divisible entre %i, por lo cual no es primo\n",x);
                  y=0;
               }
           }
          if(y==1){
            printf("El número %i es primo\n",n);
          }
        }
      }
    }while (n!=0);
    return EXIT_SUCCESS;
}
