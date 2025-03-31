//Problem No:01.
#include <stdio.h>
int main(){
    int a,b;
    printf("1 For rock, 2 for papaer, 3 for scissor.\n");
    printf("Nirob:");
    scanf("%d",&a);
    printf("Prova:");
    scanf("%d",&b);
    int type;

    if (a==1 && b==2)
        type = 1;
    else if (a==2 && b==1)
            type = 2;
    else if (a==1 && b==3)
       type = 3;
    else if (a==3 && b==1)
        type = 4;
    else if (a==2 && b==3)
        type = 5;
    else if (a==3 && b==2)
        type = 6;
    else if (a==b)
        type = 7;
    else
        type = 8;

    switch(type){
    case 1:
        printf("The winner is Prova.");
        break;
    case 2:
        printf("The winner is Nirob.");
        break;
    case 3:
        printf("The winner is Nirob.");
        break;
    case 4:
        printf("The winner is Prova.");
        break;
    case 5:
        printf("THe winner is Prova.");
        break;
    case 6:
        printf("The winner is Nirob.");
        break;
    case 7:
        printf("The match is draw.");
        break;
    case 8:
        printf("Invalid Input.");
    default:
        printf("Please enter number flowing the rules.");
    }
return 0;
}
