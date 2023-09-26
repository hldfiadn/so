#include <stdio.h>
#include <pthread.h>

void *hello(void *arg) {
    printf("hello from thread-%d\n", ((int*)arg)[0]);
    pthread_exit(NULL);
}

int main() {
    pthread_t t1, t2;
    int id[2] ={1, 2};

    pthread_create(&t1, NULL, hello, id);
    pthread_create(&t2, NULL, hello, &id[1]);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    return 0;
}