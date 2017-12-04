#ifndef pqueue_H_   /* Include guard */
#define pqueue_H_
#define MAX 200

#include <stdio.h>
#include <stdlib.h>
//Declaration of priority queue
typedef struct
{
    int ele[MAX][MAX];
    int count;
}PQueue;
 
void init(PQueue *q);
void insertWithPriority(PQueue *q, int priority, int item );
int getNext(PQueue *q, int *item);
int peekAtNext(PQueue *q, int *item);

#endif // pqueue_
