#include <stdio.h>
#include <stdlib.h>

#include "queue_node.h"

QueueNode* createQueueNode(void* data) {
    QueueNode* newNode = (QueueNode*) malloc(sizeof(QueueNode));

    if (!newNode) {
        perror("Cannot allocate memory for a new node.");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

Queue* createQueue() {
    Queue* newQueue = (Queue*) malloc(sizeof(Queue));
    
    if (!newQueue) {
        perror("Cannot allocate memory for a new queue.");
        exit(1);
    }

    newQueue->front = NULL;
    newQueue->rear = NULL;

    return newQueue;
}

bool isQueueEmpty(Queue* q) {
    return q->front == NULL;
}

void enqueue(Queue* q, void* data) {
    QueueNode* newNode = createQueueNode(data);

    if (q->rear == NULL) {
        q->front = newNode;
        q->rear = newNode;
        return;
    }

    q->rear->next = newNode;
    q->rear = newNode;
}

void* dequeue(Queue* q) {
    if (isQueueEmpty(q)) {
        return NULL;
    }

    QueueNode* temp = q->front;
    void* data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);

    return data;
}

void freeQueue(Queue* q) {
    while (!isQueueEmpty(q)) {
        dequeue(q);
    }
    free(q);
}