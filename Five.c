/*5. Leia uma velocidade em km/h (quilômetros por hora) e apresente-aconvertida em m/s (metros por segundo).
A fórmula de conversão é: M=K/3.6, sendo K a velocidade em km/h e M em m/s.*/

#include <stdio.h>

int main()
{
    float nkm;
    
    printf ("Digite a velocidade em KM : ");
    scanf ("%f", &nkm);
    float nms = nkm/3.6;
    printf ("A velocidade em M\\S é : %.1f", nms);
    return 0;
}
