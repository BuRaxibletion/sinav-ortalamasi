//
//  main.c
//  sinav ortalamasi
//
//  Created by AHMET BUĞRA DEMİRCAN on 23.11.2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float sinav1, sinav2, sinav3, sozlu, ort;
    
    printf("birinci sinav notunuzu giriniz : ");
    scanf("%f",&sinav1);
    
    printf("ikinci sinav notunuzu giriniz : ");
    scanf("%f",&sinav2);
    
    printf("ucuncu sinav notunuzu giriniz : ");
    scanf("%f", &sinav3);
    
    printf("sozlu notunuzu giriniz : ");
    scanf("%f", &sozlu);
    
    ort=(sinav1+sinav2+sinav3+sozlu)/4;
    printf("donem sonu ortalamaniz : %f",ort );
    
    printf("\n");
    
    if(ort>=50)
    {
        printf(" gectiniz");
        
    }
    printf("\n");
    
    if(ort<50)
    {
        printf("kaldiniz");
        }
    printf("\n\n\n");
    
    
    return 0;
}
