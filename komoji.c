#include <stdlib.h>
#include <stdio.h>

int main(void)
{
       FILE *fr, *fw;
       char t1[] = "write.txt";
       char t2[] = "ko.txt";
       int chr;

       fr = fopen(t1,"r");
       fw = fopen(t2,"w");
       if (fr == NULL) {
	       printf("%s file open error!!\n", t1);

	       return -1;
       }

       while((chr = fgetc(fr)) != EOF){
	       if((chr >= 'a' && chr <= 'z')|| (chr == ' ') || (chr == '\n'))
		       fputc(chr, fw);

	       else if(chr >= 'A' && chr <= 'Z')
		       fputc(chr = chr + ('a' - 'A'), fw);

       }


       fclose(fr);
       fclose(fw);

       return 0;

}
