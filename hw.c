/*Name: Tanvir Alam.
My assignment*/
#include <stdio.h>
int main() {
    printf("Enter chips price:\n");
     int x;
    scanf("%d",&x);
    printf("Enter chocolate price:\n");
    int y;
    scanf("%d",&y);
     int z = x + y;
    printf("Enter students number:");
    int a;
    scanf("%d",&a);
    int p = z*a;
    printf("%d",p);
    return 0;
}

//Problem No:02
#include <stdio.h>
int main() {
   printf("Enter time in seconds:");
   int a;
   scanf("%d",&a);
   int hour = a/3600;
   int min = (a%3600)/60;
   int sec = a - (hour*3600) - (min*60);
   printf("%d : %d : %d",hour,min,sec);
    return 0;
}

//Problem No:03(a)
#include <stdio.h>
int main(){
printf("      *      \n");
printf("     * *     \n");
printf("    * * *    \n");
printf("   * * * *   \n");
printf("  * * * * *  \n");
printf(" * * * * * * \n");
}

//problem No:03(b)
#include <stdio.h>
int main() {
   printf("         *          \n");
   printf("       * * *        \n");
   printf("     * * * * *      \n");
   printf("   * * * * * * *    \n");
   printf(" * * * * * * * * *  \n");
   printf(" * * *       * * *  \n");
   printf(" * * *       * * *  \n");
   printf(" * * *       * * *  \n");
    return 0;
}
