#include <stdio.h>
int main(){
    int id;
    int password;

    printf("========================================\n");
    printf("        Selamat Datang di Kelas!        \n");
    printf("========================================\n");
    printf("Silahkan masukkan User Id  : "); scanf("%d",&id);
    if(id == 222406020){
        printf("Silahkan masukkan Password : "); scanf("%d",&password);
       if(password == 2022){
        printf("========================================\n");
        printf("Anda Terdaftar di Kelas!");
        } else {
        printf("========================================\n");
        printf("Password Anda Salah!\n");
        printf("Silahkan input ulang Password Anda\n");
        }

      } else {
        printf("========================================\n");
        printf("Id Anda Salah!\n");
        printf("Silahkan input ulang Id Anda\n");
      }
    return 0;
}
