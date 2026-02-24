#include <stdio.h>

int main() {
    int n, i;
    int nilai[100]; 
    int total_nilai = 0;
    int pola = 4; 

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
    }

    for(i = 0; i < n; i++) {
        if(i < pola) { 
            total_nilai += nilai[i];
        }
    }

    printf("%d\n", total_nilai);

    return 0;
}