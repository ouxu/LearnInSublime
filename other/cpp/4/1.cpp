#include <stdio.h>
#include <string.h>

void FuncT(int iNum, char *aslP[]){
    for (int i=0; i< iNum; i++) {
        printf("%s\n", aslP[i]);
    }
}

int main(void) {
    char aslP[20][16];
    strcpy(aslP[0],"172.2.2.1");
    strcpy(aslP[1],"172.23.3.2");
    FuncT(2, aslP);
    return(0);
}
