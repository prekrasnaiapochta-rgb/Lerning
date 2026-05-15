#include <stdio.h>

int* findElement(int *arr, int size, int value)
{
    int arra_jan = -1;
    int *parra_jan = &arra_jan; 

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == value){
            parra_jan = arr + i;
        }
    }
    if(*parra_jan == -1){
        return NULL;
    }

    return parra_jan;
}
void um(int *arr, int size, int mu){
    for(int i = 0; i < size; i++){
        *(arr + i) = *(arr + i) * mu;
    }
}
int main(void)
{
    int size;
    scanf("%d", &size);
    int numbers[size];
    
    for(int i = 0; i < size; i++ ){
        scanf("%d", &numbers[i]);
    }
    int find;
    printf("find - ");
    scanf("%d", &find);
    printf("mu - ");
    int mu;
    scanf("%d", &mu);
    
    
    um(numbers, size, mu    );
    int *result = findElement(numbers, size, find);
    if(result == NULL){
        printf("ne gg");
    }
    else{printf("gg: %d\n", *result);}
    

    return 0;
}
