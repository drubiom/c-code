#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,x=3;
    printf("Introduce un número:\n");
    scanf("%i",&n);
    if(n==0){
      printf("El número es 0\n");
       return EXIT_SUCCESS;
      }
    else if(n%2==0){
        printf("El número %i es par, por lo que no es primo\n",n);
        return EXIT_SUCCESS;
    }
    else if(n==3){
        printf("El numero 3 es primo\n");
        return EXIT_SUCCESS;
    }
    else{
        while(x,x=x+2,x<n){
            if(n%x==0){
                printf("El número es divisible entre %i, por lo cual no es primo\n",x);
                return EXIT_SUCCESS;
            }
        }
    }
    printf("El número %i es primo\n",n);
    return EXIT_SUCCESS;
}
