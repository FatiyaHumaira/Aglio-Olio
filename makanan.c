#include <stdio.h>


int main(){
    
    int menu, harga, total,ulang;
        
        printf("=== BENVENUTO AL RISTORANTE AGLIO OLIO ===\n");
        printf("berikut daftar menu yang tersedia saat ini\n");
        menu :
        printf(" 1. risotto     44k\n");
        printf(" 2. pasta       39k\n");
        printf(" 3. lasagna     59k\n");
        printf(" 4. carbonara   39k\n");
        printf(" 5. ravioli     49k\n");
        printf(" 6. spaghetti   69k\n");
        printf(" 7. tiramissu   40k\n");
        printf("masukkan pilihan anda : ");
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
        scanf("%d", &total);
        harga = 39000;
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);
    }
    else if(menu == 3){
        printf("jumlah pesanan : ");
        scanf("%d", &total);
        harga = 59000;
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);
    } 
    else if(menu == 4){
        printf("jumlah pesanan : ");
        scanf("%d", &total);
        harga = 39000;
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);
    } 
    else if(menu == 5){
        printf("jumlah pesanan : ");
        scanf("%d", &total);
        harga = 49000;
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);
    } 
    else if(menu == 6){
        printf("jumlah pesanan : ");
        scanf("%d", &total);
        harga = 69000;
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);
    } 
    else if(menu == 7){
        printf("jumlah pesanan : ");
        scanf("%d", &total);
        harga = 40000;
        total = total*harga;
        printf("total harga yang harus dibayar= %d\n", total);
    }    
    else{
        printf("upss, sepertinya ada yang bermasalah, silahkan coba lagi\n");
        
    }
    printf("apakah ada pesanan tambahan? : \n");
    printf("1.ya\n");
    printf("2.tidak\n");
    printf("masukkan pilihan anda :");
    scanf("%d", &ulang);

    if(ulang==1){
        goto menu;
    }
    else if(ulang==2){
        printf("terima kasih sudah menggunakan layanan kami^__^\n"); 
        printf("pesanan anda akan segera disiapkan\n");
        printf("mohon menunggu beberapa saat\n");
        return 0;
    }

  
    
   return 0;
}



    

