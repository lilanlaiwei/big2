#include <stdio.h>

#define MAX_LINE 512
#define CHR_NUM 256 

void countAllChr(unsigned int count[], char *str) {

	for (unsigned int i = 0; str[i] != '\0'; i++) {
	    	count[(unsigned char)str[i]]++;   
	}
}

int main(void) {
	    
	FILE *fr;
	char t1[] = "ko.txt";
    	char str[MAX_LINE];
	char pi[CHR_NUM];
    	unsigned int count[CHR_NUM];
	int m = 0;
	int moji;


	fr = fopen (t1,"r");
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


	printf("in [%s]\n", t1);
      	for (unsigned int i = 0; i < CHR_NUM; i++) {
		if(i >= 'a' && i <= 'z'){
			printf("%c : %u\n", i, count[i]);
			m += count[i];
		}
	}

	printf("文字数：[%d]\n", m); 
    	
	fclose(fr);

	return 0;
}
