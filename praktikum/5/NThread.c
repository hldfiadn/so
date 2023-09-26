#define N 8
#include <stdio.h>
#include <pthread.h>

void *hello(void *arg) {
    puts("hello");
    pthread_exit(NULL);
}

int main() {
    pthread_t t[N];

    for (int i = 0; i < N; i++)
        pthread_create(&t[i], NULL, hello, NULL);
    for (int i = 0; i < N; i++)
        pthread_join(t[i], NULL);

    return 0;
}