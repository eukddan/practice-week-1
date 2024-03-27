#include "week_1.h"

void func(){
    printf("Hello World!");
    for (int i = 1; i < 5; i++){
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}