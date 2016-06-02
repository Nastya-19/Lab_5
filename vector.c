#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[10][10], X[10], Y[10];
    int i, j;

    srand(time(0));

	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++){  
            A[i][j] = rand() % 10;  
		} 

    for(i = 0; i < 4; i++){ 
        X[i] = rand() % 6 + 1 ; 
    } 

    for (i = 0; i < 4; i++){ 
        Y[i] = 0; 
        for (j = 0; j < 4; j++){ 
            Y[i] += X[j] * A[i][j];
		}  
    }
	
	printf("Matriza:\n");
	
	for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++)
            printf("%d ", A[i][j]);
            printf("\n");
    }
	
	printf("Vector:\n");
	
	for (i = 0; i < 4; i++){
            printf("\t%d\n ", X[i]);
    }
	
	printf("\nRezyl'tat peremnojenia matrizu na vector:\n");
	
	for (i = 0; i < 4; i++){
            printf("\t%d\n", Y[i]);
    } 

	system("pause");
	return 0;
}
