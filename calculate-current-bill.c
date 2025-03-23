/*Problem: Summer has come and we had use a lot of colling devices again.
So that our mother don't beat us up let's learn to calculate the current bill.
(Total unit * per unit price) + (demand charge * load) + 5% vat.
INPUT FORMAT: The input contains an integer X(-10000<x<10000).
OUTPUT FORMAT: Calculate the current bill.
[- life line: 00 to 50 unit = 4.63 Taka.
-0 to 75 unit = 5.26 Taka.(kwh)
- 76 to 200 unit = 7.20 Taka.(kwh)
- 201 to 300 unit = 7.59 Taka.(kwh)
- 301 to 400 unit = 8.02 Taka.(kwh)
- 401 to 600 unit = 12.67 Taka.(kwh)
- up to 600 unit = 14.61 Taka.(kwh)
Demand charge = 42.00 Taka.
]*/

#include<stdio.h>
int main(){
   float total_unit,load,demand_charge,unit_price,bill;
    demand_charge = 42;
    printf("Enter Total Unit:");
    scanf("%f",&total_unit);
    printf("Enter Load:");
    scanf("%f",&load);
    if (total_unit >= 0 && total_unit <= 75){
        bill = (total_unit * 5.26) + (load * demand_charge);
        bill += bill*0.05;
        printf("Total Bill: %.2f Taka",bill);
    }
    else if (total_unit > 75 && total_unit <= 200){
        bill=(total_unit * 7.20)+(load * demand_charge);
        bill +=  bill*0.05;
        printf("Total Bill: %.2f Taka",bill);
    }

     else if (total_unit > 200 && total_unit <= 300){
        bill=(total_unit * 7.59)+(load * demand_charge);
        bill +=  bill*0.05;
        printf("Total Bill: %.2f Taka",bill);
    }

     else if (total_unit > 300 && total_unit <= 400){
        bill=(total_unit * 8.02)+(load * demand_charge);
        bill +=  bill*0.05;
        printf("Total Bill: %.2f Taka",bill);
        }

     else if (total_unit > 400 && total_unit <= 600){
        bill=(total_unit * 12.67)+(load * demand_charge);
        bill +=  bill*0.05;
        printf("Total Bill: %.2f Taka",bill);
    }

     else if (total_unit > 600){
        bill=(total_unit * 14.61)+(load * demand_charge);
        bill +=  bill*0.05;
        printf("Total Bill: %.2f Taka",bill);
    }

    else {
        printf("invalid Input");
    }
return 0;

}
