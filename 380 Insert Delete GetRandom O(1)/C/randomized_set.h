#include "stdbool.h"

typedef struct {
    int* arr;
    int size;
    int capacity;
} RandomizedSet;

RandomizedSet* randomizedSetCreate();

bool randomizedSetInsert(RandomizedSet* obj, int val);

bool randomizedSetRemove(RandomizedSet* obj, int val);

int randomizedSetGetRandom(RandomizedSet* obj);

void randomizedSetFree(RandomizedSet* obj);