/*Lily's result has came out, she can pass in the exam only if she gets numbers as below:
Marks in Mathematics >= 65
Marks in physics >= 55
Marks in Chemistry >= 50
Total in all three subject >= 190 or
Total in math and physics >= 140

INPUT FORMAT: 100 is the highest mark for a subject.
OUTPUT FORMAT: If she is pass print "Lily is eligible." and if she fails "Lily is not eligible."
without the quotation.
*/
#include<stdio.h>
int main(){
    int m,p,c,mpc,mp,type;
    printf("The marks obtained in Mathematics:");
    scanf("%d",&m);
    printf("The marks obtained in Physic:");
    scanf("%d",&p);
    printf("The marks obtained in Chemistry:");
    scanf("%d",&c);
    printf("Marks of Maths,Physics and Chemistry:");
    scanf("%d",&mpc);
    printf("Marks of Maths and Physics:");
    scanf("%d",&mp);

    if (mpc < 190 || mp < 140){
        printf("Lily is not eligible.");
    }
    else if (m >= 65 && p >= 55 && c >= 50){
        printf("Lily is eligible.");
    }
    else{
        printf("Lily is not eligible.");
    }
return 0;
}
