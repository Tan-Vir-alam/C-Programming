#include<stdio.h>
int main(){
    float x,y,z;
    printf("Enter 1st side of triangle: ");
    scanf("%f",&x);
    printf("Enter 2nd side of triangle: ");
    scanf("%f",&y);
    printf("Enter 3rd side of triangle: ");
    scanf("%f",&z);

    if (x+y > z && y+z > x && z+x > y){
        printf("Possible triangle");
    }
    else {
        printf("Impossible triangle");
    }
return 0;
}
