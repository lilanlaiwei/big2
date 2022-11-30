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
	float m = 0;
	int k = 0, i = 0;


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
			m += count[i];
		}
	}

	srand((unsigned int)time(NULL));

	for(i = 0; i < 500; i++){
		k = rand() % M + 1;
//		printf("%d\n",rand() % M + 1);
		fputc(str[k], fw);
	}

	fclose(fw);	
	fclose(fr);

	return 0;
}
