#include <stdio.h>
#include <string.h>

int main() {
    char *kode[]  = {"NGS", "AP", "SA", "BU", "MAP", "GG", "SAM", "RD", "IB", "NUK" };
    char *nama[]  = {"Nasi Goreng Spesial", "Ayam Penyet", "Sate Ayam(10 Tusuk)", "Bakso Urat", "Mie Ayam Pangsit", "Gado-Gado", "Soto Ayam", "Rendang Daging", "Ikan Bakar", "Nasi Uduk Komplit"};
    int harga[]   = {15000, 20000, 25000, 18000, 15000, 15000, 17000, 25000, 35000, 20000};
    int jumlahMenu = 10;

    char inputKode[10];
    int porsiButet;
    int totalBelanja = 0;

    while (1) {
        scanf("%s", inputKode);

        if (strcmp(inputKode, "END") == 0) {
            break;
        }

        scanf("%d", &porsiButet);

        int ditemukan = 0;
        for (int i = 0; i < jumlahMenu; i++) {
            if (strcmp(inputKode, kode[i]) == 0) {
                
                int totalPorsi = porsiButet + 1; 
                totalBelanja += (harga[i] * totalPorsi);
                ditemukan = 1;
                break;
            }
        }

        if (!ditemukan) {
            printf(">> Kode menu tidak valid!\n");
        }
    }

    char *kupon = "Tidak dapat kupon";
    if (totalBelanja >= 200000) {
        kupon = "Kupon KUNING";
    } else if (totalBelanja >= 100000) {
        kupon = "Kupon BIRU";
    }

    printf("\n======================================\n");
    printf("       STRUK MAKAN MALAM DEL        \n");
    printf("======================================\n");
    printf("Total Pembayaran : Rp %d\n", totalBelanja);
    printf("Hadiah Lebaran   : %s\n", kupon);
    printf("======================================\n");
    printf("Semangat kuliahnya, Ucok & Butet!\n");

    return 0;
}