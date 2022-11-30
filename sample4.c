#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LINE 512
#define CHR_NUM 256 

void countAllChr(unsigned int count[], char *str) {
	for (unsigned int i = 0; str[i] != '\0'; i++) {
		count[(unsigned char)str[i]]++;   
	}
}

int main(void) {
		    
	FILE *fr, *fw;
	char t1[] = "ko.txt";
	char t2[] = "random.txt";
	char pi[MAX_LINE];
	char str[MAX_LINE];
	unsigned int count[CHR_NUM];
	int k = 0, i = 0, M = 0;


	fr = fopen (t1,"r");
	fw = fopen (t2, "w") ;
	if (fr == NULL){
		printf("%s file open error!!\n", t1);
		return -1;
	}
	for (unsigned int i = 0; i < CHR_NUM; i++) {
		if(i >= 'a' && i <= 'z')
			count[i] = 0;
	}



	while (fgets(str, MAX_LINE, fr) != NULL) {
		countAllChr(count, str);

	}

	for (unsigned int i = 0; i < CHR_NUM; i++) {
		if(i >= 'a' && i <= 'z'){
			M += count[i];
		}
	}

	printf("%d\n", M);

	srand((unsigned int)time(NULL));

	for(i = 0; i < 10; i++){
		k = rand() % 10 + 1;
//		printf("%d\n",rand() %  + 1);
		fputc(str[k], fw);
	}

	fclose(fw);	
	fclose(fr);

	return 0;
}
