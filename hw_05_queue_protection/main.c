#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(void) {
    queue_t queue; 
    queue.head = NULL; 
    queue.tail = NULL;

    int value;
    scanf("%d", &value); 
    int last_value = -1;

    while (value != -1) {
        if (value != 0) {
            if (last_value == 0) {
                printf("%d ", value);
            }
        }
        else if (last_value != 0) {
            enqueue(&queue, last_value);
        }

        last_value = value; 
        scanf("%d", &value); 
    }

    printf("\n");

    while (!is_empty(queue))
        printf("%d ", dequeue(&queue));

    printf("\n");

    return 0;
}