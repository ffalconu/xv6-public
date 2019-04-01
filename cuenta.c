#include <stdlib.h>
#include "proc.h"

int main(void) 
{
 	printf("La cantidad de procesos en ejecucion en la CPU es %i\n", getprocs());
	return 0;
}