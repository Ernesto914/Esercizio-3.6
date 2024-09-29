#include <stdio.h>

int main(void)
{
    int prodottiacquistati;
    float prezzounitario, importototale, scontoin, sconto; 0.10, 0.20;
    printf("Inserisci il numero di prodotti acquistati: ");
    scanf("%d", &prodottiacquistati);
    printf("Inserisci il prezzo unitario: ");
    scanf("%f", &prezzounitario);
    importototale = prodottiacquistati * prezzounitario;
    if (importototale > 10)
    {
        scontoin = 10.00;
    }
    else if (importototale > 50)
    {
        scontoin = 20.00;
    }
    else if (importototale <= 10)
    {
        scontoin = 0.00;
    }
    printf("L'importo totale è di %.2f euro\n", importototale);
    printf("Lo sconto è di %.2f euro\n", (importototale * scontoin) / 100);
    sconto = scontoin / 100;
    printf("L'importo totale non scontato è di %.2f euro\n", importototale - sconto);
    return 0;
}
