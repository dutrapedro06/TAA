#include <stdio.h> //telemarketing.c

#define MAX 100005

int main() {

    int C, K;
    scanf("%d %d", &C, &K);

    long long T[MAX]; 

    for (int i = 0; i < C; i++) {

        scanf("%lld", &T[i]);
    }

    int j = 0; 

    for (int i = 0; i < C; i++) {

        while (T[i] - T[j] > K) { 

            j++;
        }

        printf("%d", i - j + 1); 

        if (i < C - 1) {
            
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}