#include <stdio.h>
void copyString(char *source, char *destination){
    int v = 0;
    int b = 0;
    while (*source != '\0')
    {
        *destination = *source; 
        source++;
        destination++;
        
    }
    *destination = '\0';
    
}
int main(){
    // int gg;
    // scanf("%d", &gg);
    // hello world 67
    char source[5];
    scanf("%s", source);
    char destination[100];
    copyString(source, destination);
    printf("%s", destination );
}

// 10. Копирование строки через указатели

// Написать функцию:

// void copyString(char *source, char *destination);

// Функция должна скопировать строку source в destination без использования strcpy.

// Пример:
// source = "Hello"

// После вызова:
// destination = "Hello"

// Важно:
// - копировать символы через указатели;
// - не забыть скопировать завершающий символ '\0'.