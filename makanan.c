#include <stdio.h>

int main(){
  
  int menu, harga, total;
  
  printf("===BENVENUTO ALRISTORANTE AGLIO OLIO===")
  printf("berikut daftar menu yang tersedia saat ini")
  printf(" 1. risotto     44000")
  printf(" 2. pasta       39000")
  printf(" 3. lasagna     59000")
  printf(" 4. carbonara   39000")
  printf(" 5. ravioli     49000")
  printf(" 6. spaghetti   69000")
  printf(" 7. tiramissu   40000")
  printf("masukkan menu yang ingin dipesan")
    scanf("%d", &menu);
  
if(menu == 1){
        printf("jumlah pesanan : ");
        harga = 44000;
        scanf("%d", &total);
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);
}
else if(menu == 2){
        printf("jumlah pesanan : ");
        harga = 39000;
        scanf("%d", &total);
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);
}
else if(menu == 3){
        printf("jumlah pesanan : ");
        harga = 39000;
        scanf("%d", &total);
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);
}
else if(menu == 4){
        printf("jumlah pesanan : ");
        harga = 39000;
        scanf("%d", &total);
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);
}
else if(menu == 5){
        printf("jumlah pesanan : ");
        harga = 39000;
        scanf("%d", &total);
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total); 
}
else if(menu == 6){
        printf("jumlah pesanan : ");
        harga = 39000;
        scanf("%d", &total);
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);  
}
else if(menu == 7){
        printf("jumlah pesanan : ");
        harga = 39000;
        scanf("%d", &total);
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);
}
else{
  printf("ada yang salah silahkan coba lagi");

    }

    return 0;
}  
  
  
  
