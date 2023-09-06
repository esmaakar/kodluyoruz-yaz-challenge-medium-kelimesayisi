#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char cumle[1000];
	printf("lutfen bir cumle giriniz:");
	gets(cumle);
	int i;
	int bosluk=1;
	
    for(i=0;cumle[i];i++){
    	if(cumle[i]==' '){
    		bosluk++;
		}
	}
	printf("cumledeki kelime sayisi:%d",bosluk);
	return 0;
}
