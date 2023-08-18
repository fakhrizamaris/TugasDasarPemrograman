#include <stdio.h>
int main(){
    int potato,bengbeng,lays,silverqueen,bearbrand;
    int beli,uang,Kembalian,pilih;
    printf("==============================================\n");
    printf("        SELAMAT DATANG DI KEDAI WAK HAJI      \n");
    printf("==============================================\n");
    printf("1. Bengbeng    = Rp 10.000\n");
    printf("2. Potato      = Rp 15.000\n");
    printf("3. Lays        = Rp 15.000\n");
    printf("4. Silverqueen = Rp 25.000\n");
    printf("5. Bearbrand   = Rp 8.000\n");
    printf("==============================================\n");
    printf("Mau beli Apa ?            : "); scanf("%d",&beli);

    switch(beli){

    case 1 : printf("Anda memilih Bengbeng dengan harga Rp 10.000\n");
             bengbeng = 10000;
             printf("Mau Beli berapa pcs ?     : "); scanf("%d",&pilih);
             printf("Selamat Anda dapat diskon sebesar 10%% \n");
             printf("Masukkan jumlah Uang Anda : Rp "); scanf("%d",&uang);
             Kembalian = uang - ((pilih*bengbeng) - ((bengbeng*pilih)*0.1));
             printf("==============================================\n");
             printf("Kembalian anda            : Rp %d\n", Kembalian); break;

    case 2 : printf("Anda memilih Potato dengan harga Rp 15.000\n");
             potato = 15000;
             printf("Mau Beli berapa pcs ?     : "); scanf("%d",&pilih);
             printf("Selamat Anda dapat diskon sebesar 10%% \n");
             printf("Masukkan jumlah Uang Anda : Rp "); scanf("%d",&uang);
             Kembalian = uang - ((pilih*potato) - ((potato*pilih)*0.1));
             printf("==============================================\n");

             printf("Kembalian anda            : Rp %d\n", Kembalian); break;
    case 3 : printf("Anda memilih Lays dengan harga Rp 15.000\n");
             lays = 15000;
             printf("Mau Beli berapa pcs ?     : "); scanf("%d",&pilih);
             printf("Selamat Anda dapat diskon sebesar 10%% \n");
             printf("Masukkan jumlah Uang Anda : "); scanf("%d",&uang);
             Kembalian = uang - ((pilih*lays) - ((lays*pilih)*0.1));
             printf("==============================================\n");
             printf("Kembalian anda            : Rp %d\n", Kembalian); break;

    case 4 : printf("Anda memilih Silverqueen dengan harga Rp 25.000\n");
             silverqueen = 25000;
             printf("Mau Beli berapa pcs ?     : "); scanf("%d",&pilih);
             printf("Selamat Anda dapat diskon sebesar 10%% \n");
             printf("Masukkan jumlah Uang Anda : Rp "); scanf("%d",&uang);
             Kembalian = uang - ((pilih*silverqueen) - ((silverqueen*pilih)*0.1));
             printf("==============================================\n");
             printf("Kembalian anda            : Rp %d\n", Kembalian); break;

    case 5 : printf("Anda memilih Bengbeng dengan harga Rp 8.000\n");
             bearbrand = 8000;
             printf("Mau Beli berapa pcs ?     : "); scanf("%d",&pilih);
             printf("Selamat Anda dapat diskon sebesar 10%% \n");
             printf("Masukkan jumlah Uang Anda : Rp "); scanf("%d",&uang);
             Kembalian = uang - ((pilih*bearbrand) - ((bearbrand*pilih)*0.1));
             printf("==============================================\n");
             printf("Kembalian anda            : Rp %d\n", Kembalian); break;

             default : printf("==============================================\n");
                       printf("Produk yang Anda pilih tidak tersedia\n");
    }
    return 0;
}
