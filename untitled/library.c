#include<stdio.h>
int main() {
    int mai;
    do {
        printf("Enter the numberv until I find an odd number: ");
        scanf("%d", &mai);

        if (mai % 2 != 0){
            break;
        }
    }while(1);
    printf("I found the odd number");
    return 0;
}