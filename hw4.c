//Name: Tanvir Alam
//Roll: 30;
//Sec:B

#include <stdio.h>

int main(){

    printf("Enter your number:");
    int a;
    scanf("%d",&a);
    if (a==54){
        printf("He wants to go Barishal.");
        }
    else if (a==12){
        printf("He wants to go Chittagoan.");
        }
    else if (a==100){
        printf("He wants to go Dhaka.");
    }
    else if (a==71){
        printf("He wants to go Mymensingh.");
    }
    else if (a==36){
        printf("He wants to go Khulna.");
    }
    else if (a==97){
        printf("He wants to go Rajshahi.");
    }
    else if(a==06){
        printf("He wants to go Rangpur.");
    }
    else if (a==85){
        printf("He wants to go Sylhet.");
    }
    else {
    printf("NOT FOUND!");
    }



return 0;
}

//Problem No:02
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("The largest portion is:%d",a);
    }
    if(a<b){
        printf("The largest portion is:%d",b);
    }

return 0;
}

//Problem No: 03.

#include <stdio.h>
int main(){
  int a;
  float t,f,c;
  char b;

  printf("If you want to convert C to F type 1.\n If you want to convert F to C type 2.");
  scanf("%d",&a);

  printf("Enter your temperature with C or F:");

  scanf("%f,%c",&t,&b);
  //sacnf("%c",&b);

  if (a==1){
    f = ((9*t)/5)+32;
    printf("%.1f Fahrenheit\n",f);
  }
  else if (a==2){

    c = ((t-32)*5)/9;
    printf("%.1f Celsius",c);
  }
  else{
    printf("The choice is not correct.");
  }
return 0;
}

