#include <stdio.h>
#include <stdlib.h>

int ciftSayi(int sayi){

    if(sayi == -1)
        return 1;
    else{
        if(sayi%2==0){
            printf("%d\n",sayi);
        }
        return ciftSayi(sayi-1);
    }
}

int main()
{
    int sayi=20;
    ciftSayi(sayi);
    return 0;
}
