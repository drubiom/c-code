
#include <stdio.h>
#include <stdlib.h>
//Realiza un programa que diga qué color está viendo un usuario preguntandole si ve las componentes roja, amarilla y azul. El nombre de los colores estará en una lista de palabras. Construye el número de color sabiendo que los bits de la cifra son Rojo | Amarillo | azul. De manera que, el color 3 ( 011 ) se corresponde con el verde ( amarillo y azul).

int main(){
    int color[3], colordec;
    system("clear");
    system("toilet --gay  COLORES");

    printf("\n ¿¿Estás viendo el color \e[0;31mrojo\e[0m??\n 0-no/1-si:");
    scanf(" %i", &color[0]);

    printf("\n ¿¿Estás viendo el color \e[1;33mamarillo\e[0m??\n 0-no/1-si:");
    scanf(" %i", &color[1]);

    printf("\n ¿¿Estás viendo el color \e[0;34mazul\e[0m??\n (S/N):");
    scanf(" %i", &color[2]);

    colordec = 4 * color[0] + 2 * color[1] + color[2];
    printf("\n El color que estás viendo es ");
    switch (colordec){
        case 0: printf("\eNEGRO");
                break;
        case 1: printf("\e[0;34mAZUL\e[0m");
                break;
        case 2: printf("\e[1;33mAMARILLO\e[0m");
                break;
        case 3: printf("\e[0;32mVERDE\e[0m");
                break;
        case 4: printf("\e[0;31mROJO\e[0m");
                break;
        case 5: printf("\e[0;35mMORADO\e[0m");
                break;
        case 6: printf("\e[01;38;5;208mNARANJA\e[0m");
                break;
        case 7: printf("\e[0;37;mBLANCO\e[0m");
                break;
    }
    printf("\n");
   return EXIT_SUCCESS;
}
