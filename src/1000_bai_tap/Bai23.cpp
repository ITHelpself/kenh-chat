// Đếm số lượng “ước số” của số nguyên dương n
#include<stdio.h>
int main(){
    int n;
    int dem = 0;
    printf("n:");
    scanf("%d",&n);
    // 6 có ước số là 1,2,3, 6
    // 7 có ước số là 1,7
    // 8 có ước số là 1,2,4,8
    // --> ước số là số mà n chia hết
    printf("uoc so cua %d: ",n);
    for(int i = 1;i<=n;i++){
        if(n%i == 0){// n chia hết cho i
            printf("%d ", i);
            dem++;
        }
    }
    printf("\nso luong uoc so: %d", dem);
    return 0;
}