#include <stdio.h>

int main(){

    printf("Precio del Producto:");
    float precio;
    unsigned int desc;
    scanf("%f",&precio);

    printf("Porcentaje de descuento:");

    scanf("%i",&desc);

    float desc_aplicado = (precio*desc)/100;

    float costo_desc = precio - desc_aplicado;

    printf("Cantidad a descontar:%.2f",desc_aplicado);
    printf("\n");
    printf("Precio con descuento aplicado:\n%.2f",costo_desc);

    return 0;
}