
#include <stdio.h>

int main() {
    double cp,sp;
    printf("Enter cost price\n");
    scanf("%lf",&cp);
    printf("Enter selling price\n");
    scanf("%lf",&sp);
    if(cp>sp)
    {
        double loss = cp-sp;
        double percentage = loss/cp*100;
        printf("loss is %lf percent",percentage);
    }
    else if(cp<sp)
    {
        double profit = sp-cp;
        double percentage = profit/cp*100;
        printf("profit is %lf percent",percentage);
        
    }else{printf("No net change");}
    
    return 0;
}
