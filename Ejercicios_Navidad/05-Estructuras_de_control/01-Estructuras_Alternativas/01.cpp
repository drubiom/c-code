
#include <stdio.h>
#include <stdlib.h>

//Pregunta al usuario si ve las componentes roja, amarilla y azul y diga que color está viendo.

int main(){
    int rojo, amarillo, azul;
    char opc;
    system("clear");
    system("toilet --gay  COLORES");
    printf("\n ¿¿Estás viendo el color \e[0;31mrojo\e[0m??\n (S/N):");
    scanf(" %c", &opc);
    do{
      switch(opc){
         case 'S':rojo = 1;
                  break;
         case 's':rojo = 1;
                  break;
         case 'N':rojo = 0;
                  break;
         case 'n':rojo = 0;
                  break;
         default :printf("Esta opción no es válida. Vuelve a introducir una opción: (S/N):");
                  scanf(" %c", &opc);
                  break;
      }
    }while(opc != 's' && opc != 'S' && opc != 'N' && opc != 'n');
    printf("\n ¿¿Estás viendo el color \e[1;33mamarillo\e[0m??\n (S/N):");
    scanf(" %c", &opc);
    do{
      switch(opc){
          case 'S':amarillo = 1;
                   break;
          case 's':amarillo = 1;
                   break;
          case 'N':amarillo = 0;
                   break;
          case 'n':amarillo = 0;
                   break;
          default :printf("Esta opción no es válida. Vuelve a introducir una opción: (S/N):");
                   scanf(" %c", &opc);
                   break;
       }
    }while(opc != 's' && opc != 'S' && opc != 'N' && opc != 'n');
    printf("\n ¿¿Estás viendo el color \e[0;34mazul\e[0m??\n (S/N):");
    scanf(" %c", &opc);
    do{
      switch(opc){
          case 'S':azul = 1;
                   break;
          case 's':azul = 1;
                   break;
          case 'N':azul = 0;
                   break;
          case 'n':azul = 0;
                   break;
          default :printf("Esta opción no es válida. Vuelve a introducir una opción: (S/N):");
                   scanf(" %c", &opc);
                   break;
      }
    }while(opc != 's' && opc != 'S' && opc != 'N' && opc != 'n');
    printf("\n El color que estás viendo es ");
    if(rojo)
        if(amarillo)
            if(azul)
                printf("\e[0;37;mBLANCO\e[0m");
            else printf("\e[01;38;5;208mNARANJA\e[0m");
        else if(azul)
            printf("\e[0;35mMORADO\e[0m");
        else printf("\e[0;31mROJO\e[0m");
    else
        if(amarillo)
            if(azul)
               printf("\e[0;32mVERDE\e[0m");
            else printf("\e[1;33mAMARILLO\e[0m");
        else if(azul)
            printf("\e[0;34mAZUL\e[0m");
        else printf("\eNEGRO");
    printf("\n");
   return EXIT_SUCCESS;
}
