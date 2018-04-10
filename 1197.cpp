#include <stdio.h>
//#include <string.h>
//#include <math.h>

//struct stu a[3];
int main (){
    char b[10];
    while (scanf("%s",b)!=EOF){
        if(b[0]=='v')printf("SingleDog&YangRouHuoGuo\n");
        else if(b[0]=='q')printf("Couple&Program\n");
        else if(b[0]=='l')printf("SingleDog&GoodGoodStud\n");
    }
    return 0;
}