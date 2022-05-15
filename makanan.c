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

//Fungsi untuk tampilan awal aplikasi
void apps(){
    printf("           === SELAMAT DATANG ===\n");
    printf("=== BENVENUTO AL RISTORANTE AGLIO OLIO ===\n\n");
    printf("1. Menu\n2. Add to Cart\n3. Checkout\n4. Receipt\n5. Keluar\n");
    
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
    }
}

//Fungsi untuk tampilan awal menu
void menu(){
    int i; int balik;
    printf("\t---------------\n");
    for( i = 0; i < 7; i++){
        printf("\n%d %s \t\t %d \n", i+1, makanan[i], harga_makanan[i]);
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
    printf("Menu apa yang ingin anda pesan? (1-7)\n");
    //buy = menunjukkan menu yg di pesan, total harga merupakan harga menu * jumlah yg dipesan
    int buy;
    scanf("%d",&buy);
    
    if( (buy>0) && (buy<8)){
        //variabel untuk menyimpan banyak pesanan
        int cnt;
        printf("Jumlah pesanan : ");
        scanf("%d",&cnt);
        int total_harga=harga_makanan[buy-1]*cnt;
        printf("\nPesanan : %s\nJumlah Pesanan : %d\nTotal Harga : %d\n", makanan[buy-1],cnt,total_harga);
        int option;

        do{
            printf("Pesan sekarang? (1. Yes || 2. No)\n");
            scanf("%d",&option);

            if(option==1){
                total_bayar+=total_harga;
                //menyimpan banyak pesanan
                pesanan[buy-1]+=cnt;
                printf("1. Pesan lagi\n2. Kembali ke tampilan awal\n");
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
        } while((option!=1)||(option!=2));
    }
    else{
        printf("Mohon masukkan angka yang sesuai\n");
        pesan();
    }
}

void checkout(){
    //lakukan pengecekan
    cek_pemesanan=0;
    int i;
    for(i=0;i<7;i++){
        if(pesanan[i]>0){
            cek_pemesanan=1;
            break;
        }
    }

    int pilih;
    if(cek_pemesanan == 0){
         printf("Anda belum melakukan pemesanan\n");
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
        }
    }
    
    if(cek_pemesanan==1){
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
    //lakukan pengecekan
    cek_pemesanan=0;
    int i;
    for(i=0;i<7;i++){
        if(pesanan[i]>0){
            cek_pemesanan=1;
            break;
        }
    }

    if(cek_pemesanan==0){
        printf("anda belum melakukan pemesanan\n");
        int balik;
        do{
            printf("Ketik angka 1 untuk kembali ke tampilan awal\n");
            scanf("%d",&balik);
        } while(balik!=1);
        apps();
    }
    else if(cek_pemesanan==1){
        int i;
        for(i=0; i<7; i++){
            if(pesanan[i]>0){
                printf("%s\t\t %d\n\t %d x\t %d\n", makanan[i], harga_makanan[i], pesanan[i], harga_makanan[i]*pesanan[i]);
            }
        }
    
        printf("Pesanan anda akan segera disiapkan\n");
        printf("Mohon menunggu beberapa saat\n");
    }

    /*
    jika udah memesan{
        printf semua pesanan yg udh dipesan
        caranya cek pesanan[] kalo >0 berarti printf
        cetak : 
        no nama_menu harga_makanan
        banyak_pesanan  harga_total_permakanan
        total harga
    }

    jika belum memesan{
        printf "Anda belum memesan apa apa"
    }

    contoh klo udh mesan
        1. Lasagna              59000
            x2                          118000
        2. Risotto              44000
            x1                          44000

        Total Harga :                   162000

    printf("Pesanan anda akan segera disiapkan\n");
    printf("Mohon menunggu beberapa saat\n");
    trs di akhir bikin pilihan mau ke menu awal
    */
}