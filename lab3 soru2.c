#include <stdlib.h>
#include<string.h>
   
int main() {	
char *kelime1,*kelime2;
int sonuc;
kelime1=(char*)malloc(50*sizeof(char));
kelime2=(char*)malloc(50*sizeof(char));
printf("iki kelime giriniz");	
scanf("%c %c",kelime1,kelime2);
	
sonuc=strcmp(kelime1,kelime2);
if(sonuc<0)
{
	printf("kelime1 kelime2 den daha kýsadýr");
}
else if(sonuc>0)

{
	printf("kelime2 kelime1 den daha kýsadýr ");
	}	
	else
	{
		printf("kelime1 ve kelme2 esittir");
	}
	
free(kelime1);
free(kelime2);	
	
	
	
	
	
return 0;
}
