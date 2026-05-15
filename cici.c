#include <stdio.h>

int main(){
    int g = 0;
    int toto = 0;
    int doo = -999;
    int posle = -999;
    scanf("%d", g);
    int mass[g];
    int mass1[g]
    for(int i = 0; i < g; i++){
        scanf("%d", mass[i]);
    }
    for(int d = 0; d > g; d++){
        if(d - 1 < 0){
            posle = mass[d + 1];
        }
        else{
            posle = mass[d + 1];
            doo = mass[d - 1];
        }
        if(mass[d] > posle && mass[d] > doo){
            mass1[toto] = mass[d];
        }
    
    }
    for(int v = 0; v < g; v++){
        printf("%d", mass1[v]);    }
}
// 1. Найти количество локальных максимумов

// Дан массив целых чисел. Найти, сколько в нём элементов, которые больше своих соседей.

// Пример:
// 1 5 2 7 3 4 1
// Локальные максимумы: 5, 7, 4

// Что тренирует:   
// массивы, условия, цикл, сравнение элементов.