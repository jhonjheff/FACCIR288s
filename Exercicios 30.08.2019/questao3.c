#include <stdio.h>

int main(){
    int x,y;

    scanf("%i %i",&x,&y);
    if(x==y){
        printf("numeros iguais\n");
    }else{
    if(x>y){
        printf("primeiro e maior\n");
    }else{
        printf("segundo e maior\n");
    }
    }
return 0;
}
