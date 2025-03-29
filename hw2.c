#include <stdio.h>
int main() {
    float x;
    scanf("%f",&x);
    float z;
    scanf("%f",&z);
    float y = x - z;
    float ys = 10000.625;
    float zs = 15000.342;
    float zst = zs*z;
    float yst = ys*y;
    float ms = 25000;
    float t = yst+zst+ms;
    printf("%.2f.",t);
    return 0;
}

//Problem NO:02.
#include <stdio.h>
int main(){
    float F;
   scanf("%f",&F);
    float c = (F-32)*5/9;
   printf("Temperature in celsius is:%.2f C.",c);
return 0;
}

//Problem No:03.
#include <stdio.h>
int main(){
   printf("NO    No    NO NO NO No NO   No NO NO NO NO NO\n");
   printf(" NO  NO     NO               NO               \n");
   printf("   NO       No               NO NO NO NO NO NO\n");
   printf("   NO       NO NO NO NO NO                  NO\n");
   printf("   NO       NO                              NO\n");
   printf("   NO       NO                              NO\n");
   printf("   NO       NO NO NO NO NO   NO NO NO NO NO NO\n");
return 0;
}

//Problem:04.
#include <stdio.h>
int main(){
  int Nirob,Prova,saud_sir;
  printf("nirob:");
  scanf("%d",&Nirob);
  saud_sir = Nirob;
  printf("prova:");
  scanf("%d",&Prova);
  printf("Nirob Bhaiya has %dTK Note now.",Prova);
  printf("Prova Apu has %dTK Note now.\n",saud_sir);
return 0;
}
