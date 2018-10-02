#include <stdio.h>
#include <stdlib.h>
#include "Permuta.h"
#include "preenche.h"
#define tamM 5

int main()//int argc, char *argv[])
{
	int v[] = {1, 2, 3, 4, 5};
	int tam_v = sizeof(v) / sizeof(int);
	int Distancia[tamM][tamM];

 //   preenche(Distancia, tamM);

	permuta(v, 0, tam_v - 1);

	return 0;
}
