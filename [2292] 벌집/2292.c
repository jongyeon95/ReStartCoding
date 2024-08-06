#include <stdio.h>

int main(){
    int n;
    int answer = 1;
    int start = 1;
    int gap = 0;
    scanf("%d",&n);
    for(int index= 0; index<=18258; index+=1){
        if(start+gap >= n){
            printf("%d" , index+1);
            return 0;
        }
        start = start + gap;
        gap=gap+6;
    }
    return 0;
}