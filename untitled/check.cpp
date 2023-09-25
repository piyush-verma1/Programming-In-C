#include<stdio.h>
int main () {
    int da_y;
    printf("Enter the number of the consicutive day which you wanna know: ");
    scanf("%d",&da_y);

    switch(da_y) {

        case 1:
            printf("IT's Sunday ENJOY!! \n");
            printf("I hate to admit it but tomorrow is a huge pressure no one likes mondays  :(  \n");
            break;

        case 2:
            printf("IT'S Monday, time to work \n");
            printf("AGAIN!!After a good break \n");
            break;

        case 3:
            printf("It's Tuesday,time to work\n");
            break;

        case 4:
            printf("It's Wednusday,time to work \n");
            break;

        case 5:
            printf("It's Thrusday,the day which brings joy to everyones heart \n");
            printf("WISPERS: The day after tomorrow is Saturday YAY!!! \n");
            break;

        case 6:
            printf("It's Friday!! the most happiest day in some human's life \n");
            break;

        case 7:
            printf("It's  SATURDAY \n");
            printf("Let's not waste time let me sleep \n");
            printf("I have got 2 days to live let's enjoy \n");
            break;

        default:
            printf("PLEASE ENTER THE CORRECT NUMBER WHICH SHOULD BE BETWEEN 1 AND 7 \n");
    }

    printf("Thanks for asking for my help");

    return 0;
}