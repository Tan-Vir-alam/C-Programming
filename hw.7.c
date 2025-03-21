/*Problem: Do the equations line by line to get desired output.
INPUT FORMAT: The input contains an integer X (-10000<X<10000).
OUTPUT FORMAT: Follow the given input output sample.
INPUT SAMPLE: 3
OUTPUT SAMPLE: X = 3
               X++ = 3
               ++X = 5
               X-- = 5
               --X = 3 */
int main(){
 int num,a;
 printf("Enter a number:");
 scanf("%d",&num);
 a = num+2;
 printf("X = %d\n",num);
 printf("X++ = %d\n",num);
 printf("++X = %d\n",a);
 printf("X-- = %d\n",a);
 printf("--X = %d\n",num);

 getch();

}


/*Problem: A little girl has been stuck in a forest. To escape from this forest she can only choose
those roads which road numbers are divisible by 3 or 5.
INPUT FFORMAT: Find if the number is divisible by 3,5 or not.
OUTPUT FORMAT: If the number isn't divisible by any of them print"Wrong Road." Without quotation.*/

int main(){
 int num;
 printf("Enter a number:");
 scanf("%d",&num);
 if (num%3 == 0 || num%5 == 0){
    printf("You may go little girl.");
 }
 else{
    printf("Wrong Road.");
 }

 getch();
}


/*Problem: Lily is so tensed about her weight gain. She's going for a diet, that's why she has to calculate
her BMI every week. Help her in BMI determination.
Underweight:- BMI < 18.5
Normal weight:- 18.5 <= BMI < 24.9
Overweight:- 25 <= BMI < 29.9
Obese:- BMI >= 30

INPUT FORMAT: Take weight & height as kg & m.
OUTPUT FORMAT: Tell her in which condition she is in.*/

int main(){
float weight,height,BMI;
printf("Enter your weight:");
scanf("%f",&weight);
printf("Enter your height:");
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


