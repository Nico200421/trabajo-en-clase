#include <stdio.h>

int suma( float *numero1, float *numero2, float *respuesta){
    *respuesta = *numero1 + *numero2;  
    printf("La suma es %f\n", *respuesta);
    return 0;
}
int resta( float *numero1, float *numero2, float *respuesta){
    *respuesta = *numero1 - *numero2;
    printf("La resta es %f\n", *ans);
    return 0;
}
int multiplicacion( float *numero1, float *numero2, float *respuesta){
    *respuesta = *numero1 * *numero2;
    printf("La multiplicacion es %f\n", *respuesta);
    return 0;
}
int division( float *numero1, float *numero2, float *respuesta){
    if (*numero2!=0)
    {
        *respuesta = (*numero1) / (*numero2);
        printf("La division es %.2f\n", *respuesta);
    }
    else{
        printf("No se puede dividir para cero\n");
    }
    return 0;
}
int arregloescalar(float *arreglo, int tamaño, float escalar){
    for (int vec = 0; vec < tamaño; vec++)
    {
        (arreglo[vec+1])= arreglo[vec] + escalar;
    }
    printf("El nuevo vector con la suma del escalar %f es:\n", escalar);
    for (int vec = 0; vec < tam; vec++)
    {
        printf(" %.2f |", arreglo[vec]);
    }
 return 0;
}
int compararcadenas(char *gad1, char *gad2, int am1, int am2){
    int medio=1, positivo=0;
    if (am1 != am2)
    {
      printf("\nLas cadenas de caracteres no son iguales\n");         
    } else{
        while (*gad1 != '\0' && *gad2 != '\0' && med != 0)
        {
            if (*gad1 == *gad2)
            {
              gad1++;
              gad2++;
              med=1;  
              
            }
            else{
              med=0;
            } 
        } 
    }
    if (med == 1) {
      printf("Las cadenas son iguales\n");
    }
    else {
      printf("Las cadenas no son iguales\n");
    }
    return 0;
}