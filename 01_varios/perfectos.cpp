#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,x,contador;

    do{
    contador=0;
    printf("Introduce un número: (o cero para salir)\n");
    scanf("%i",&n);
        for(x=1;x<n;x++){
          if (n%x==0){
              contador+=x;
          }
        }
      if (contador==n){
          printf("ES PERFECTO\n");
      }
     else{
         printf("NO ES PERFECTO\n");
     }
    }while(n!=0);
    return EXIT_SUCCESS;
}
