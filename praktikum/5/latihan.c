#include <stdio.h>
#include <pthread.h>
#define N 16

int sum = 0;

void* summ(void* arg) {
    int* A = (int*)arg;
    int i;
    for (i = 0; i < N/4; i++) {
        sum += A[i];
    }
    pthread_exit(NULL);
}

int main() {
    int A[N] = {68,34,64,95,35,78,65,93,51,67, 7,77, 4,73,52,91};
    pthread_t t[4];
    for (int i = 0; i < 4; i++) {
        pthread_create(&t[i], NULL, summ, &A[i*N/4]);
    }
    for (int i = 0; i < 4; i++) {
        pthread_join(t[i], NULL);
    }
    printf("%d\n", sum);
    return 0;
}