#include <stdio.h>
#define N 1

struct TCoordenadas
{
	int x;
	int y;
	
};


TCoordenadas cambiarcoordenadas( struct TCoordenadas);

int main(int argc, char const *argv[])
{
	TCoordenadas coord;
	printf("Introduce fila\n");
	scanf(" %i", &coord.x);
	printf("Introduce columna\n");
	scanf(" %i", &coord.y);
	printf("La fila en la que se imprime es: %i\nLa columna en la que se imprime es: %i\n", cambiarcoordenadas(coord).x, cambiarcoordenadas(coord).y);

	return 0;
}

TCoordenadas cambiarcoordenadas(TCoordenadas coord){
	TCoordenadas temp;
		temp.x = coord.y * N;
		temp.y = coord.x * N;
	}
	return temp;
}