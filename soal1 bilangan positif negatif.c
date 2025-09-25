#include<stdio.h>

int main(){
int bilangan_bulat;
printf("masukan bilangan bulat: ");
scanf("%d", &bilangan_bulat);

if(bilangan_bulat<0){
    printf("negatif");
} else if (bilangan_bulat == 0){
    printf("nol");
} else {
    printf("positif");
}
return 0;
}