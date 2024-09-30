#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int a=0;
    int b=0;
    int count=0;

    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<10; i++){
        if((i+1) % 2 ==0){
            a+=arr[i];
        }
        if((i+1) % 3 ==0){
            b+=arr[i];
            count++;
        }
    }

    double avg = 0;
    avg = (double)b/count;

    printf("%d %.1lf", a,avg);
    
    return 0;
}