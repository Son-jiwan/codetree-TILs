#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int i=0;
    int sum = 0;

    for(i=0; i < 100; i++){
        scanf("%d", &arr[i]);
        if(arr[i]==0){
            sum = arr[i-3] + arr[i-2] + arr[i-1];
            break;
        }
    }
    
    printf("%d", sum);

    return 0;
}