#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int array[1000];
int gap=100;

void *add(void *arg)
{
    int start=(int)arg;
    int end=start+gap;
    int sum=0;
    for (int i=arg;i<end;i++)
        sum=sum+array[i];
    return ((void*)sum);
}
int main()
{
    int sum=0,status_t[10];
    pthread_t t[10];
    for(int i=0;i<1000;i++)
        array[i]=i;
    for(int i=0;i<10;i++)
    {
        pthread_create(&t[i],NULL,add,(void*)(i*gap));
        pthread_join(t[i],(void**)&status_t[i]);
        sum=sum+status_t[i];
    }

    printf("Sum %d ",sum);
    return 0;
}
