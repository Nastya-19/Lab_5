#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas[9][9], i, t;
	
	for(i = 0; i < 9; i++){
		for(t = 0; t < 9; t++)
			if(i < t)
				mas[i][t] = 0;
				else if(i < 9 - t)
					mas[i][t] = 1;
						else
							mas[i][t] = 0;
	}
	
	for(t = 0; t < 9; t++){
		for(i = 0; i < 9; i++)
		printf("%3d", mas[i][t]);
		printf("\n");
	}	
	
	
	system("pause");
	return 0;
}
