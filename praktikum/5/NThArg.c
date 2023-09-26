#define N 8
#include <stdio.h>
#include <pthread.h>

void *hello(void *arg) {
    printf("hello from thread-%d\n", ((int*)arg)[0]);
    pthread_exit(NULL);
}

int main() {
    pthread_t t[N];
    int id[N] = {1, 2, 3, 4, 5, 6, 7, 8};

    for (int i = 0; i < N; i++)
        pthread_create(&t[i], NULL, hello, &id[i]);
    for (int i = 0; i < N; i++)
        pthread_join(t[i], NULL);

    //kalau for nya di gabung jadi paralel - urut 1 2 3 ... 8

    return 0;
}