#include <stdio.h>
#include <string.h>

void ganti_kata(char *frasa, char lama, char baru);
 
int main(){
  	char frasa[1024], lama, baru;

  	printf("\n Masukkan Kata= ");
  	gets(frasa);
  	printf("\n Masukkan Huruf yang akan diganti= ");
  	scanf("%c", &lama);
  	getchar();
  	printf("\n Masukkan Huruf Pengganti= ");
  	scanf("%c", &baru);
  	
  	ganti_kata(frasa, lama, baru);
  	printf("\n Hasil kata baru= %s ", frasa);
  	return 0;
}

void ganti_kata(char *frasa, char lama, char baru)
{
	int i;
	for(i = 0; frasa[i] != '\0'; i++){
		if(frasa[i] == lama){
			frasa[i] = baru;
		}  
	}
}