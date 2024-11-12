#include <stdbool.h>

typedef struct queue_node {
    void* data;
    struct queue_node* next;
} QueueNode;

typedef struct Queue {
    QueueNode* front;
    QueueNode* rear;
} Queue;

QueueNode* createQueueNode(void* data);

Queue* createQueue();

bool isQueueEmpty(Queue* q);

void enqueue(Queue* q, void* data);

void* dequeue(Queue* q);

void freeQueue(Queue* q);