#include <stdio.h>

int main() {
    int lm;  
    int hk;  
    int jml; 
    int disc; 
    int byrakh; 


    printf("Masukkan lama menginap: ");
    scanf("%d", &lm);
    printf("Masukkan harga kamar/hari: ");
    scanf("%d", &hk);

    // Menghitung jumlah bayar
    jml = lm * hk;

    // terapkan diskon berdasarkan harganya
    if (jml > 300000) {
        // discount 30%
        disc = jml * 0.3;
    } else if (jml > 200000) {
        // discount 20%
        disc = jml * 0.2;
    } else if (jml > 100000) {
        // discount 10%
        disc = jml * 0.1;
    } else {
        disc = 0;
    }

    // Hitung total bayar akhir
    byrakh = jml - disc;

    printf("Jumlah bayar: %d\n", jml);
    printf("discount: %d\n", disc);
    printf("Total bayar akhir: %d\n", byrakh);

    return 0;
}