#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas[9][9], i, j;
	
	for(i = 0; i < 9; i++) {
		for( j = 0; j < 9; j++){
			if(j <= 9 -i) 
				mas[i][j] = 0;
				else
					mas[i][j] = 1;
		}
	}
	
	for(i = 0; i < 9; i++) {
		for(j = 0; j < 9; j++)
		printf(" %d", mas[i][j]);
		printf("\n");
	}
	
	system("pause");
	return 0;		
}
