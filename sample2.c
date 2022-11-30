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
  	unsigned int count[CHR_NUM];
	float m = 0;


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


//	printf("in [%s]\n", t1);
      	for (unsigned int i = 0; i < CHR_NUM; i++) {
		if(i >= 'a' && i <= 'z'){
//			printf("%c : %u\n", i, count[i]);
			m += count[i];
		}
	}

	printf("文字数：[%.0f]\n", m); 
 
	printf("[a : %u : %5.3f%%]\n", count['a'], count['a'] / m * 100);
	printf("[b : %u : %5.3f%%]\n", count['b'], count['b'] / m * 100);
	printf("[c : %u : %5.3f%%]\n", count['c'], count['c'] / m * 100);
	printf("[d : %u : %5.3f%%]\n", count['d'], count['d'] / m * 100);
	printf("[e : %u : %5.3f%%]\n", count['e'], count['e'] / m * 100);
	printf("[f : %u : %5.3f%%]\n", count['f'], count['f'] / m * 100);
	printf("[g : %u : %5.3f%%]\n", count['g'], count['g'] / m * 100);
	printf("[h : %u : %5.3f%%]\n", count['h'], count['h'] / m * 100);
	printf("[i : %u : %5.3f%%]\n", count['i'], count['i'] / m * 100);
	printf("[j : %u : %5.3f%%]\n", count['j'], count['j'] / m * 100);
	printf("[k : %u : %5.3f%%]\n", count['k'], count['k'] / m * 100);
	printf("[l : %u : %5.3f%%]\n", count['l'], count['l'] / m * 100);
	printf("[m : %u : %5.3f%%]\n", count['m'], count['m'] / m * 100);
	printf("[n : %u : %5.3f%%]\n", count['n'], count['n'] / m * 100);
	printf("[o : %u : %5.3f%%]\n", count['o'], count['o'] / m * 100);
	printf("[p : %u : %5.3f%%]\n", count['p'], count['p'] / m * 100);
	printf("[q : %u : %5.3f%%]\n", count['q'], count['q'] / m * 100);
	printf("[r : %u : %5.3f%%]\n", count['r'], count['r'] / m * 100);
	printf("[s : %u : %5.3f%%]\n", count['s'], count['s'] / m * 100);
	printf("[t : %u : %5.3f%%]\n", count['t'], count['t'] / m * 100);
	printf("[u : %u : %5.3f%%]\n", count['u'], count['u'] / m * 100);
	printf("[v : %u : %5.3f%%]\n", count['v'], count['v'] / m * 100);
	printf("[w : %u : %5.3f%%]\n", count['w'], count['w'] / m * 100);
	printf("[x : %u : %5.3f%%]\n", count['x'], count['x'] / m * 100);
	printf("[y : %u : %5.3f%%]\n", count['y'], count['y'] / m * 100);
	printf("[z : %u : %5.3f%%]\n", count['z'], count['z'] / m * 100);

	fclose(fr);

	return 0;
}
