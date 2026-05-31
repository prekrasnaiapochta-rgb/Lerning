#include <stdio.h>
char* findElement(char *arr, int size, char value){
    for(int i = 0; i <= size; i++){
        if(*(arr + i) == value){
            return arr + i;
        }
    }
    return NULL;
}
void main(){
    char arr[] = "Hello";
    char v;
    scanf("%c", &v);
    printf("%c", *findElement(arr, 6, v));
}
//     Поиск элемента и возврат указателя
// Условие

// Написать функцию:

// int* findElement(int *arr, int size, int value);

// Функция должна:

// найти элемент value в массиве;
// вернуть указатель на найденный элемент;
// если элемент не найден, вернуть NULL.
