#include <stdio.h>

char* return_retangle(int a, int b, int c){
    if(a+b <= c || b+c <= a || c+a <= b){
        return "Invalid";
    }

    if(a==b && b==c && c==a){
        return "Equilateral";
    }
    else if(a==b || b==c || c==a){
        return "Isosceles";
    }
    else{
        return "Scalene";
    }

}

int main(void)
{
    while(1){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        if(a==0 && b==0 && c==0){
            return 0;
        }
        printf("%s\n" ,return_retangle(a,b,c));

    }
    
    return 0;
}