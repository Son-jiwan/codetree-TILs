#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char a[10];
    for(int i = 0; i<10; i++){
        scanf(" %c",&a[i]);
    }
    for(int i = 9; i>=0; i--){
        printf("%c", a[i]);
    }
    return 0;
}