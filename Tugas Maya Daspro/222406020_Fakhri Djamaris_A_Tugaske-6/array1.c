#include<stdio.h>

void main(){
    int inputan,x,i;

    printf("PROGRAM STATISTIK\n\n");

    printf("Banyaknya data [1-15] = ");
    scanf("%d",&inputan);
    int nilai[inputan],rerata,total,terbesar,terkecil;

        for(i=1; i<=inputan; i++){
        printf("Data ke-%d = ",i);
        scanf("%d",&nilai[i]);
        total += nilai[i];
        }
        terbesar=nilai[1];
        terkecil=nilai[15];
        printf("Data setelah diurutkan:\n\n");

        for(i=1; i<=inputan; i++){
            if(terbesar<nilai[i]){
                terbesar=nilai[i];
             }  else if(terkecil>nilai[i]){
                terkecil=nilai[i];
                }
        }

        rerata = total/inputan;
        printf("Data Terbesar = %d\n",terbesar);
        printf("Data Terkecil = %d\n",terkecil);
        printf("Rata-rata     = %d\n", rerata);
        printf("Terkecil      = %d\n",terkecil);

    return 0;
}


