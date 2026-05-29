#include <stdio.h>
#include <string.h>
void ee(char b [], char v []){
    if(strlen(b) != strlen(v)){
        printf("no");
        return;
    
    }
    for(int i = 0; b[i] != '\0'; i++){
        for(int n = 0; v[n] != '\0'; n++){
            if(v[n] == b[i]){
                b[i] = ' ';
                v[n] = ' ';
            }
        }
    }
    int reslt = strcmp(b, v);
    if (reslt == 0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return;
}
int main(){
    char b [100];
    scanf("%s", b);
    char v [100];
    scanf("%s", v);
    ee(b, v);
}










// Ввести две строки. Проверить, состоят ли они из одинаковых символов.

// Пример:

// Ввод:
// listen
// silent

// Вывод:
// yes