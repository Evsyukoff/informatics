#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
    int value; 
    struct node_t* next; 
    struct node_t* prev; 
} node_t;

typedef struct queue_t {
    node_t* head; 
    node_t* tail; 
} queue_t;

void enqueue(queue_t* queue, int value); 
int dequeue(queue_t* queue); 
int is_empty(queue_t queue); 
#endif
