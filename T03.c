#include <stdio.h>

int main(){
    int b_bln; 
    int mahasiswa;
    
    scanf("%d", &b_bln);
    scanf("%d", &mahasiswa);
    int total_bulan = b_bln*mahasiswa;
    int total_tahun = total_bulan*12;

    printf("pemasukan pihak laundry del dalam 1 bulan adalah : ");
    printf("%d\n", total_bulan);
    printf("pemasukan pihak laundry del dalam 1 tahun adalah : ");
    printf("%d\n", total_tahun);

    return 0;
}