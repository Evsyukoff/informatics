#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
void enqueue(queue_t* queue, int value) {
    node_t* node = (node_t*)malloc(sizeof(node_t)); 
    node->value = value; 
    node->prev = queue->tail; 
    node->next = NULL; 

    if (queue->tail == NULL) {
        queue->head = node; 
    }
    else {
        queue->tail->next = node;
    }

    queue->tail = node;
}


int dequeue(queue_t* queue) {
    int value = queue->head->value; 

    node_t* tmp = queue->head; 
    queue->head = queue->head->next; 
    free(tmp); 

  
    if (queue->head == NULL) {
        queue->tail = NULL; 
    }
    else {
        queue->head->prev = NULL; 
    }

    return value; 
}


int is_empty(queue_t queue) {
    return queue.head == NULL; 
}