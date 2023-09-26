#include <stdio.h>
#include <pthread.h>

void *hello(void *arg) {
    puts("hello");
    pthread_exit(NULL);
}

int main() {
    pthread_t t1, t2;

    pthread_create(&t1, NULL, hello, NULL);
    pthread_create(&t2, NULL, hello, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    return 0;
}