#include "head.h"
#include <stdio.h>

//array menyimpan nama makanan
char makanan[8][20]={"Risotto","Pasta","Lasagna","Carbonara","Ravioli","Spaghetti","Tiramisu"};
    
//array untuk menyimpan banyak pesanan tiap menu ke-i
int pesanan[8]={0,0,0,0,0,0,0};

//array untuk menyimpan harga makanan
int harga_makanan[9]={44000,39000,59000,39000,49000,69000,40000};

//variabel untuk menyimpan total belanja
int total_bayar=0;

//untuk cek apakah pemesanan sudah dilakukan atau belum
int cek_pemesanan=0;

//cek apakah keranjang sudah ada isinya atau belum
int cek_cart=0;


//Fungsi untuk tampilan awal aplikasi
void apps(){
    printf("           === WELCOME ===\n");
    printf("=== BENVENUTO AL RISTORANTE AGLIO OLIO ===\n\n");
    printf("1. Menu\n2. Add to Cart\n3. Checkout\n4. Receipt\n5. Exit\n");
    
    int pilihan;
    printf("Pilihan : ");
    scanf("%d", &pilihan);

    if(pilihan==1){
        menu();
    }
    else if(pilihan==2){
        pesan();
    }
    else if(pilihan==3){
        checkout();
    }
    else if(pilihan==4){
        status();
    }
    else if(pilihan!=5){
        printf("Mohon masukkan angka yang sesuai\n");
        apps();
    }
}

//Fungsi untuk tampilan awal menu
void menu(){
    int i; int balik;
    printf("\t---------------\n\t     Menu\n");
    printf("\t---------------\n");
    for( i = 0; i < 7; i++){
        printf("\n%d) %s \t\t %d \n", i+1, makanan[i], harga_makanan[i]);
    }
    printf("\t---------------\n");
    do{
        printf("Ketik angka 1 untuk kembali ke tampilan awal\n");
        scanf("%d",&balik);
    } while (balik!=1);
    apps();
}

//Fungsi untuk memesan makanan
void pesan(){
    int i;
    printf("\n");
    for(i=0; i<7; i++){
        printf("%d) %s\n",i+1,makanan[i]);
    }
    printf("Menu apa yang ingin anda pesan? (1-7)\n");
    //buy = menunjukkan menu yg di pesan, total harga merupakan harga menu * jumlah yg dipesan
    int buy;
    scanf("%d",&buy);
    
    if( (buy>0) && (buy<8)){
        //variabel untuk menyimpan banyak pesanan
        int cnt;
        printf("Jumlah pesanan : ");
        scanf("%d",&cnt);
        printf("\t---------------\n");
        int total_harga=harga_makanan[buy-1]*cnt;
        printf("\nPesanan : %s\nJumlah Pesanan : %d\nTotal Harga : %d\n", makanan[buy-1],cnt,total_harga);
        int option;

        printf("Tambahkan ke keranjang? (1. Yes || 2. No)\n");
        scanf("%d",&option);
        if(option==1){
            total_bayar+=total_harga;
            //menyimpan banyak pesanan
            pesanan[buy-1]+=cnt;
            cek_cart=1;
            printf("\n1. Pesan lagi\n2. Kembali ke tampilan awal\n");
            printf("Pilihan : ");
            int balik;
            scanf("%d",&balik);
            if(balik==1){
                pesan();
            }
            else if(balik==2){
                apps();
            }
            else{
                printf("Mohon masukkan angka yang sesuai\n");
                apps();
            }
        }
        else if(option==2){
            printf("1. Pesan ulang\n2. Kembali ke tampilan awal\n");
            printf("Pilihan : ");
            int balik;
            scanf("%d",&balik);
            if(balik==1){
                pesan();
            }
            else if(balik==2){
                apps();
            }
            else{
            printf("Mohon masukkan angka yang sesuai\n");
            }
        }
        else{
            printf("Masukkan angka yang benar\n");
            apps();
        }
    }
    else{
        printf("Mohon masukkan angka yang sesuai\n");
        pesan();
    }
}

void checkout(){

    //lakukan pengecekan
    int pilih;

    if(cek_pemesanan == 0){
        printf("\nAnda belum melakukan pemesanan\n");
        int i;

        //cek apakah keranjang sudah ada isinya atau belum
        if(cek_cart==1){
            //cetak apa saja yg telah dibeli
            for(i=0; i<7; i++){
                if(pesanan[i]>0){
                    if((i<3)||(i==4)){
                        printf("%s\t\t %d\n\t %dx\t\t %d\n", makanan[i], harga_makanan[i], pesanan[i], harga_makanan[i]*pesanan[i]);
                    }
                    else{
                        printf("%s\t %d\n\t %dx\t\t %d\n", makanan[i], harga_makanan[i], pesanan[i], harga_makanan[i]*pesanan[i]);
                    }
                }
            }
            printf("Total Harga\t%d\n",total_bayar);

            printf("Pesan sekarang?(1. Yes || 2. No)\n");
            scanf("%d",&pilih);
            if(pilih==1){
                printf("Pemesanan berhasil\n");
                cek_pemesanan=1;
                int balik;
                do{
                    printf("Ketik angka 1 untuk kembali ke tampilan awal\n");
                    scanf("%d",&balik);
                } while(balik!=1);
                apps();
            }
            else if(pilih==2){
                int balik;
                do{
                    printf("Ketik angka 1 untuk kembali ke tampilan awal\n");
                    scanf("%d",&balik);
                } while(balik!=1);
                apps();
            }
            else{
                printf("Mohon masukkan angka yang sesuai\n");
                checkout();
            }
        }

        else{
            int balik;
            do{
                printf("Ketik angka 1 untuk kembali ke tampilan awal\n");
                scanf("%d",&balik);
            } while(balik!=1);
            apps();
        }
    
    }

    else if(cek_pemesanan==1){
        printf("Anda telah melakukan pemesanan\n");
        int balik;
        do{
            printf("Ketik angka 1 untuk kembali ke tampilan awal\n");
            scanf("%d",&balik);
        } while(balik!=1);
        apps();
    }
}

   
void status(){
    if(cek_pemesanan==0){
        printf("Anda belum melakukan pemesanan\n");
        int balik;
        do{
            printf("Ketik angka 1 untuk kembali ke tampilan awal\n");
            scanf("%d",&balik);
        } while(balik!=1);
        apps();
    }
    else if(cek_pemesanan==1){
        printf("\n\n\t   -----------------\n");
        printf("    \t        RECEIPT\n");
        printf("\n\n\t   -----------------\n");
        printf("=== BENVENUTO AL RISTORANTE AGLIO OLIO ===\n\n");
        int i;
        for(i=0; i<7; i++){
            if(pesanan[i]>0){
                if((i<3)||(i==4)){
                        printf("%s\t\t %d\n\t %dx\t\t %d\n", makanan[i], harga_makanan[i], pesanan[i], harga_makanan[i]*pesanan[i]);
                    }
                    else{
                        printf("%s\t %d\n\t %dx\t\t %d\n", makanan[i], harga_makanan[i], pesanan[i], harga_makanan[i]*pesanan[i]);
                    }
            }
        }
        printf("\nTotal Harga \t\t%d\n",total_bayar);
        printf("\n\t   ------------------\n");
    
        printf("Pesanan anda akan segera disiapkan\n");
        printf("Mohon menunggu beberapa saat\n");
        int balik;
        do{
            printf("Ketik angka 1 untuk kembali ke tampilan awal\n");
            scanf("%d",&balik);
        } while(balik!=1);
        apps();
    }
}
