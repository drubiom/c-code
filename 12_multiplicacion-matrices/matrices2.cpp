#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3

int main(){
   int A[N][N] = { {3,2,6}, {5,9,1}, {3,4,4} }; 
   int B[N][N] = { {6,3,9}, {1,2,1}, {2,2,8} };
   int C[N][N];
   
   bzero(C, sizeof(C));
   for (int i = 0; i < N ; i++){
   	for (int j = 0; j < N; j++){
   		for (int k = 0; k < N; k++){
   				C[i][j] += A[i][k] * B[k][j];
         }
   		printf("%i ", C[i][j]);
   	}
   	printf("\n");
   }

   return EXIT_SUCCESS;
}
