#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[3][3], B[3][3], C[3][3];
	int i, j, k;
	
	srand(time(0));
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++){
			A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
		}
	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++){
            C[i][j] = 0;
			for(k = 0; k < 3; k++)
			    C[i][j] += A[i][k] * B[k][j];
		}

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++){
            C[i][j] = 0;
			for(k = 0; k < 3; k++)
			    C[i][j] += A[i][k] * B[k][j];
		}
    
    printf("Matruzya A:\n");
    
	for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
            printf("%d ", A[i][j]);
            printf("\n");
    }

    printf("\nMatruzya B:\n");
   
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
            printf("%d ", B[i][j]);
            printf("\n");
    }
    
	printf("\nPeremnojeni matruzi:\n");
    
	for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
            printf("%3d ", C[i][j]);
            printf("\n");
	}

	system("pause");
	return 0;
}
