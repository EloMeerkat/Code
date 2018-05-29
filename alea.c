#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){
	int i=0, n;
	srand(time(NULL)); // on initialise la création de valeur aléatoire
	
	for(; i<6; i++){ // on parcours la boucle autant de fois que la valeur de size
		n = (((double)rand())/RAND_MAX)*9;
		printf("%d ",n);
		//comprise entre 0 et max_entry
	}
	return 0;
}

