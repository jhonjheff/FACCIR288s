#include <stdio.h>
int main(){
        int valor;
        scanf("%i", &valor);
        if(valor > 0){
                printf("positivo");
        }else{
        if(valor == 0){
                printf("zero");
        }else{
                printf("negativo");
        }
        return 0;
}
}

