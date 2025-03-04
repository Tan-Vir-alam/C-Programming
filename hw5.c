/*Name: Tanvir Alam.
Roll: 30.
Sec: B.


Problem No:01.*/

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


//Problem No:02.

#include <stdio.h>
int main(){
    int temp;

    printf("Enter temperature in C:");
    scanf("%d",&temp);
    switch(temp){
    case -273 ... 0:
        printf("The water is freeze.");
        break;

    case 1 ... 15:
        printf("The water is Cold.");
        break;

    case 16 ... 25:
        printf("The water normal.");
        break;

    case 26 ... 35:
        printf("The water is hOt.");
        break;

    case 36 ... 100:
        printf("The water is extremely hot.");
        break;

    default:
        printf("The number is invalid.");

    }

return 0;
}

//Problem No:03.

#include <stdio.h>
int main(){

    int number;
    printf("Enter number:");
    scanf("%d",&number);

    switch(number){
    case -10000 ... -1:
        printf("The number is a nagative number.");
        break;

    case 1 ... 10000:
        printf("The number is positive.");
        break;

    case 0:
        printf("The number is zero.");
        break;

    default:
        printf("Invalid Number.");

    }

return 0;
}

//Problem No:04.

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the Triangle length of three sides:");
    scanf("%d",&c);
    scanf("%d",&a);
    scanf("%d",&b);

    if (a==b && b==c)
        printf("Equilateral Triangle");
    else if (a==b || b==c || c==a)
        printf("Isosceles Triangle.");

    else
        printf("Scalene Triangle.");


return 0;
}

