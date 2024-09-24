#include <stdio.h>

int main(void)
{
    float biglietto, guadagno, przfinale;
    printf("inserisci il valore del biglietto; \nil costo del biglietto e' di:" );
    scanf("%f", &biglietto);
    guadagno = biglietto*15/100;
    if(guadagno<5) {
        guadagno=5; }
    printf("il guadagno effettivo del biglietto e' di: %.2f \n",guadagno);
    przfinale = biglietto + guadagno;
    printf("il prezzo effettivo del biglietto e' di: %.2f ", przfinale);
}
