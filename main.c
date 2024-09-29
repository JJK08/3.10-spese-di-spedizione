#include <stdio.h>

int main() {
    int eta;
    float prezzo;
    printf("Inserisci la tua eta': ");
    scanf("%d", &eta);
    if (eta < 5) {
        prezzo = 0.0;
    } else if (eta <= 10) {
        prezzo = 1.0;
    } else if (eta >= 11 && eta <= 17) {
        prezzo = 1.5;
    } else if (eta >= 18 && eta <= 26) {
        prezzo = 2.0;
    } else {
        prezzo = 3.0;
    }
    printf("Il prezzo del biglietto da pagare e': %.2f\n", prezzo);
    return 0;
    }