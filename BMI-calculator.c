/*Problem: Lily is so tensed about her weight gain. She's going for a diet, that's why she has to calculate
her BMI every week. Help her in BMI determination.
Underweight:- BMI < 18.5
Normal weight:- 18.5 <= BMI < 24.9
Overweight:- 25 <= BMI < 29.9
Obese:- BMI >= 30
INPUT FORMAT: Take weight & height as kg & m.
OUTPUT FORMAT: Tell her in which condition she is in.*/

#include<stdio.h>
int main(){
float weight,height,BMI;
printf("Enter your weight(Kg):");
scanf("%f",&weight);
printf("Enter your height(m):");
scanf("%f",&height);
BMI = weight/(height*height);
  
    if (BMI<18.5){
    printf("Underweight.");
    }
    else if (18.4 < BMI && BMI < 24.5){
        printf("Normal weight.");
    }
    else if (24.9 < BMI && BMI < 29.9){
        printf("Overweight");
    }
    else{
        printf("Obese");
    }
getch();

}
