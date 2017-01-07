
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//Imprime cada caracter de una cadena con un beep del altavoz hasta que llegues al valor centinela.
int main(){
    char palabra[] = "Hola Caracola";
    for(int i = 0; palabra[i] != 0; i++){
        printf("%c", palabra[i]);
        system("echo '\7'");
        sleep(1);
    }
    return EXIT_SUCCESS;
}
