#include "conjuntos.h"
#include <stdio.h>

/// Incluir aqui las funciones que implementan las tres operaciones básicas 
/// en la representación de CONJUNTOS DISJUNTOS mediante ÁRBOLES
/// ......................................................................




void crea(particion P) {
	for(int i = 0; i < MAXIMO; i++) { P[i] = -1; }
}

tipoConjunto buscar(tipoElemento x, particion P) {
	if(P[x] == x) 	{ return P[x]; }
	else 			{ buscar(P[x], P); }
}

int unir(tipoConjunto x, tipoConjunto y, particion P) {
	if(P[x] == x && P[y] == y) {
		P[y] = x;
		return 1;
	}
	return 0;
}


//
// Función auxiliar para ver contenido de Partición 
//
void verParticion(particion P)
{ int i;
    printf("\n");
    for (i =0;i<MAXIMO;i++) printf("|%2d",P[i]);
    printf("| contenido  vector\n");
    for (i =0;i<MAXIMO;i++) printf("---");
    printf("\n");
    for (i =0;i<MAXIMO;i++) printf(" %2d",i);
    printf("  índices vector\n\n");
}
