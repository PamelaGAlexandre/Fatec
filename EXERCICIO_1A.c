#include <stdio.h>

int calculo(int z){
int k;
for(k=0; k * k <= z; ++k);
return k-1;
}
int main(){
    int n=0;
    printf("Digite um numero maior que 0 que seja inteiro: ");
    scanf("%d",&n);
    int raiz= calculo(n);
    printf("Seu resultado da raiz inteira é: %d",raiz);
}