#include <stdio.h>
long long a;
int main (){
    while (scanf("%lld",&a)!=EOF){
        if(a>=10000){printf("DaNuo\n");
            continue;}
        else if(a<=1000){printf("XiaoZhen\n");
            continue;}
        else{ printf("Zh0ngshen\n");
            continue;}
    }
    return 0;
}