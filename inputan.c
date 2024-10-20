#include <stdio.h>

int main(){
    int paswd = 12345;
    int pswdin;
    char nama[20];
    printf("\nmasukan nama anda :");
    scanf("%19s",nama);
    printf("masukan pasword :");
    scanf("%d",&pswdin);
    if (pswdin==paswd){
        printf("\npassword benar!\n");
        printf("selamat datang %s\n",nama);
    }else{
        printf("password salah");
    }
    
    return 0;
}