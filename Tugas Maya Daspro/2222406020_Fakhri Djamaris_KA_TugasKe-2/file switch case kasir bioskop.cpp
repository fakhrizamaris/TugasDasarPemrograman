#include <stdio.h>
int main(){
   int marvel,spongebob,jumanji,squidgame;
   int pilih,uang,Kembalian,jumlah;
   char ulang;

      printf("\n=======================================\n");
      printf("              Cinema TI A              \n");
      printf("1. Marvel :  Endgame        = Rp 75.000\n");
      printf("2. Spongebob The Movie      = Rp 35.000\n");
      printf("3. Jumanji : The Eternal    = Rp 25.000\n");
      printf("4. Squid Game               = Rp 65.000\n");
      printf("=======================================\n");
      printf("Masukkan Pilihan Anda        : "); scanf("%d",&pilih);


      switch(pilih){
        case 1:
            printf("Masukkan Jumlah Pesanan Anda : "); scanf("%d",&jumlah);
            marvel = 75000;
            printf("Masukkan Uang Anda           : Rp "); scanf("%d",&uang);
            Kembalian = uang - (jumlah*marvel);
            printf("=======================================\n");
            printf("Kembalian Uang anda          : Rp %d\n",Kembalian); break;
        case 2:
            printf("Masukkan Jumlah Pesanan Anda : "); scanf("%d",&jumlah);
            spongebob = 35000;
            printf("Masukkan Uang Anda           : Rp "); scanf("%d",&uang);
            Kembalian = uang - (jumlah*spongebob);
            printf("=======================================\n");
            printf("Kembalian Uang anda          : Rp %d\n",Kembalian); break;
        case 3:
            printf("Masukkan Jumlah Pesanan Anda : "); scanf("%d",&jumlah);
            jumanji = 25000;
            printf("Masukkan Uang Anda           : Rp "); scanf("%d",&uang);
            Kembalian = uang - (jumlah*jumanji);
            printf("=======================================\n");
            printf("Kembalian Uang anda          : Rp %d\n",Kembalian); break;
        case 4:
            printf("Masukkan Jumlah Pesanan Anda : "); scanf("%d",&jumlah);
            squidgame = 65000;
            printf("Masukkan Uang Anda           : Rp "); scanf("%d",&uang);
            Kembalian = uang - (jumlah*squidgame);
            printf("=======================================\n");
            printf("Kembalian Uang anda          : Rp %d\n",Kembalian); break;
           default:printf("Film yang anda pilih tidak ditemukan\n");
        }

}


