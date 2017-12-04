#include "pqueue.h"
 
 //Initialize priority queue
void init(PQueue *q)
{
    int i=0;
    q->count = 0;
      
    //All priority value set to -1
    for( i = 0; i < MAX ; i++ )
    {
        q->ele[i][1] = -1 ;  
    }
}

//Insert item with priority in queue
void insertWithPriority(PQueue *q, int priority, int item )
{
    int i = 0;
    if( q->count == MAX )
    {
        printf("\nPriority Queue is overflow");
        return;
    }
 
    for ( i = 0; i < MAX; i++ )
    {
        if( q->ele[i][1] == -1)
            break;
    }
     
    q->ele[i][0] = item;
    q->ele[i][1] = priority;
 
    q->count++;
    printf("\nInserted item is : %d\n",item);
}
 
//Remove & get element with highest priority in queue
int getNext(PQueue *q, int *item)
{
    int i = 0,max,pos=0;
 
    if( q->count == 0 )
    {
        printf("\nPriority Queue is underflow");
        return -1;
    }
     
    max = q->ele[0][1];
    for ( i = 1; i < MAX; i++ )
    {
        if( max < q->ele[i][1] )
        {
            pos = i;
            max = q->ele[i][1];
        }
    }
     
    *item = q->ele[pos][0];  
    q->ele[pos][1] = -1;
 
    q->count--;
    return 0;   
}
 
//Get element with highest priority without removing it from queue
int peekAtNext(PQueue *q, int *item)
{
    int i = 0,max,pos=0;
 
    if( q->count == 0 )
    {
        printf("\nPriority Queue is underflow");
        return -1;
    }
     
    max = q->ele[0][1];
    for ( i = 1; i < MAX; i++ )
    {
        if( max < q->ele[i][1] )
        {
            pos = i;
            max = q->ele[i][1];
        }
    }
     
    *item = q->ele[pos][0];  
 
    return 0;   
}


