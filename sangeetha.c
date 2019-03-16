
#include<stdio.h>
#include<math.h>
int main() {

    float _sum, _sub, _mul, _div;
    int operator;
    
    float a,b;

    printf("Enter an operator (1.add,2.sub,3.mul,4.div): ");
    scanf("%c",&operator);

    printf("Enter two floating points: ");
    scanf("%f %f",&a, &b);

    switch(operator)
    {
        case '1': _sum=a + b;
            printf("%f + %f = %f",a,b,_sum);
            break;

        case '2': _sub=a-b;
            printf("%f - %f = %f",a,b,_sub);
            break;

        case '3': _mul=a*b;
            printf("%f * %f = %f",a,b,_mul);
            break;

        case '4': _div=a/b;
            printf("%f / %f = %f",a,b,_div);
            break;

        
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
}