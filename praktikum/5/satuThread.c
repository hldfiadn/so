#include <stdio.h>
#include <pthread.h>

void *hello(void *arg) {
    puts("hello");
    pthread_exit(NULL);
}

int main() {
    pthread_t t;
    pthread_create(&t, NULL, hello, NULL);
    pthread_join(t, NULL);
    return 0;
}