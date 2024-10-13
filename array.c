#include<stdio.h>
int main(){
    int n;
    printf("Masukan Jumlah elemen:");
    scanf("%d",&n);
    int angka[n];

    for (int i=0; i<n; i++){
        printf("masukan angka ke-%d:",i+1);
        scanf("%d",&angka[i]);
    }

    printf("angka yang dimasukan adalah:\n");
    for(int i=0;i<n;i++){
    printf("angka ke-%d:%d\n",i+1,angka[i]);
}
return 0;
}