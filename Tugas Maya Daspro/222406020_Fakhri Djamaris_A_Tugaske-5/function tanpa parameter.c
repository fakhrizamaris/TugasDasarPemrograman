#include<stdio.h>

int volume_dan_luas_permukaan_balok();

int main(void)
{
    judul_program();
    volume_dan_luas_permukaan_balok();

    return 0;
}

int judul_program(){
    printf ("Menghitung Luas Permukaan dan Volume Balok\n");
    printf ("==========================================\n\n");

}

int volume_dan_luas_permukaan_balok() {
    int pjg,lbr,tgi;
    printf ("Panjang = "); scanf("%d",&pjg);
    printf ("Lebar   = "); scanf("%d",&lbr);
    printf ("Tinggi  = "); scanf("%d",&tgi);

    int luas_permukaan = 2*(pjg*lbr+lbr*tgi+pjg*tgi);
    int volume = pjg*lbr*tgi;

    printf("\nLuas permukaan adalah: 2 x (%d x %d + %d x %d + %d x %d) = %d\n", pjg,lbr,lbr,tgi,pjg,tgi,luas_permukaan);
    printf("Volume adalah: %d x %d x %d = %d\n", pjg,lbr,tgi,volume);

}
