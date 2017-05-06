#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>



void *print_hola(void*);

int main(int argc, char *argv[]) {
	pthread_t tid;
	int j;

	for (j = 0; j < 15; j++) {
		pthread_create(&tid, NULL, print_hola, NULL);	
	}	
	return 0;
}

void *print_hola(void *null) {
	long identif = 0;
	identif = pthread_self();	
	printf("Hola %ld\n",identif);	
 	pthread_exit(NULL);
}            
