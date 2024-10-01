#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double score[10];
    int i=0;
    int num;
    double sum;

    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%lf", &score[i]);
        sum += score[i];
    }
    double avg = 0;
    avg = sum/num;
    
    printf("%.1lf\n", avg);
    
    if(avg >= 4.0)
        printf("Perfect");
    if(avg >= 3.0)
        printf("Good");
    else
        printf("Poor");

    return 0;
}