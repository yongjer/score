#include <stdio.h>
int main(int argc,char*argv[]){
    int a;
    printf("請輸入考試成績:");
    scanf("%d",&a);
    if(a>=80){
        printf("你的成績等級為 A.");
    }
    else if(a>=70 && a<80){
        printf("你的成績等級為 B.");
    }
    else if(a>=60 && a<70){
        printf("你的成績等級為 C.");
    }
    else{
        printf("你的成績等級為 D.");
    }
    return 0;
}