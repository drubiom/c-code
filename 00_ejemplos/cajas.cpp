#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    a=5;
    b=8;
    printf("ANTES\n");
    printf("caja 1:%i \n",a);
    printf("caja 2:%i \n",b);
    printf("caja 3: NO EXISTE \n");
    //paso 1: creo caja 3
    int c;
    //paso 2: nº caja 2 >> caja 3
    c=b;
    //paso 3: nª caja 1 >> caja 2
    b=a;
    //paso 4: nº caja 3 >> caja 1
    a=c;
    printf("DESPUES\n");
    printf("caja 1:%i \n",a);
    printf("caja 2:%i \n",b);
    printf("caja 3:%i \n",c);

}
