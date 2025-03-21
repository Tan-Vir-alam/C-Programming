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



