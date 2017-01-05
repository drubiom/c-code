
#include <stdio.h>
#include <stdlib.h>

//Haz un programa que calcule el producto escalar de dos vectores de dimensión n.

int main(){
    int n;
    float vector1[n], vector2[n], producto;
    for(int i=0; i<n; i++)
        producto += vector1[i] * vector2[i];
    return EXIT_SUCCESS;
}
