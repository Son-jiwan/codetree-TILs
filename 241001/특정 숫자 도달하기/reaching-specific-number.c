#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int i=0;
    int sum = 0, count = 0;

    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);    
    }

    for(i=0; i<10; i++){
        if(arr[i]>=250){
            break;
        }
        sum += arr[i];
        count ++;
    }

    double avg = 0;
    avg = (double)sum/count;

    printf("%d %.1lf", sum, avg);

    return 0;
}