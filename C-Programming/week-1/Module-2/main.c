// ! Module 2 : Operator / conditional Statement
#include <stdio.h>

int main(){

    /*
    ? Conditional Statement

    ! 1
    int tk;
    scanf("%d", &tk);

    if (tk==100)
    {
        printf("I want to eat burger");
    }else{
        printf("I don't want to eat burger");
    }

    ! 2
    int tk;
    scanf("%d", &tk);

    if (tk>=100)
    {
        printf("I want to eat burger");
    }else if (tk >=50 && tk<100)
    {
        printf("I want to eat fuchkha");
    }else{
        printf("I don't want anything");

    */ 
    int tk;
    scanf("%d", &tk);

    if (tk>=5000)
    {
        printf("Cox Bazar jabo\n");

        if (tk >= 10000){
            printf("SentmartinO Jabo\n");
        }
        else{
            printf("Sentmartin jabo na\n");
        }
        
    }
    else{
        printf("KuthaO jabo na\n");
    }
    
    return 0;
}