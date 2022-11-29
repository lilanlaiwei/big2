#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	FILE *fr, *fw;
	char t1[] = "sample1.txt";
	char t2[] = "sample2.txt";
	char str[256];
	int chr;

	fr = fopen(t1,"r");
	fw = fopen(t2,"w");
	if (fr == NULL) {
		printf("%s file open error!!\n", t1);
		return -1;
	}
	
		
	while((chr = fgetc(fr)) != EOF){
		if((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z') || (chr == ' ') || (chr == '\n'))
			fputc(chr, fw);
		else
			fputc(chr = ' ', fw);
		
	}





	fclose(fr);
	fclose(fw);
	
	return 0;
	
}

