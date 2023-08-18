#include<stdio.h>
int main(){
    double a,t,L;

    printf("================================\n");
    printf("Menghitung Luas Segitiga\n");
    printf("================================\n");
    printf("Masukkan nilai alas Segitiga   = "); scanf("%lf",&a);
    printf("Masukkan nilai tinggi Segitiga = ");  scanf("%lf",&t);
    L = a*t/2;
    printf("Hasil luas segitiga            = %lf\n",L);

    return 0;
}
