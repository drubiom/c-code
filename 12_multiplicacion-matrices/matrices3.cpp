#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3
#define K 2
#define M 4

int main(){
   int A[M][K] = { {3,2,6,7}, {5,9,1,-3} }; 
   int B[K][N] = { {6,3}, {-2,1}, {2,-8} };
   int C[M][N];
   
   bzero(C, sizeof(C));
   for (int i = 0; i < M ; i++){
   	for (int j = 0; j < N; j++){
   		for (int k = 0; k < K; k++){
   				C[i][j] += A[i][k] * B[k][j];
         }
   		printf("%i ", C[i][j]);
   	}
   	printf("\n");
   }

   return EXIT_SUCCESS;
}
