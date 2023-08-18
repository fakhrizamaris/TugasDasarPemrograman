#include <stdio.h>
int main(){

	float nilai;
	printf("=========================\n");
	printf("    Program Nilai UAS    \n");
	printf("=========================\n");
	printf("Masukkan Nilai UAS Anda = ");
	scanf("%f",&nilai);

	if(nilai >= 75 && nilai < 80){
		printf("Selamat Anda mendapatkan Nilai C\n");
	} else if (nilai >= 80 && nilai < 85){
		printf("Selamat Anda mendapatkan Nilai B-\n");
	} else if (nilai >= 85 && nilai < 90){
		printf("Selamat Anda mendapatkan Nilai B+\n");
	} else if (nilai >= 90 && nilai < 95){
        printf("Selamat Anda mendapatkan Nilai A-\n");
    } else if (nilai >= 95 && nilai <= 100){
        printf("Selamat Anda mendapatkan Nilai A+\n");
    } else if (nilai >= 0 && nilai < 75.0){
        printf("Anda tidak lulus UAS.Tingkatkan lagi nilai Anda!\n");
    } else {
       printf("Nilai tidak ditemukan");
    }

	return 0;
}
