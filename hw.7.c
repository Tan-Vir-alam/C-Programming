/*Problem: Do the equations line by line to get desired output.
INPUT FORMAT: The input contains an integer X (-10000<X<10000).
OUTPUT FORMAT: Follow the given input output sample.
INPUT SAMPLE: 3
OUTPUT SAMPLE: X = 3
               X++ = 3
               ++X = 5
               X-- = 5
               --X = 3 */
#include <stdio.h>
int main(){
 int num;
 printf("Enter a number:");
 scanf("%d",&num);

 printf("X = %d\n",num);
 printf("X++ = %d\n",num++);
 printf("++X = %d\n",++num);
 printf("X-- = %d\n"num--);
 printf("--X = %d\n",--num);
 getch();
}
/*Problem: A little girl has been stuck in a forest. To escape from this forest she can only choose
those roads which road numbers are divisible by 3 or 5.
INPUT FFORMAT: Find if the number is divisible by 3,5 or not.
OUTPUT FORMAT: If the number isn't divisible by any of them print"Wrong Road." Without quotation.*/
#include<stdio.h>
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
