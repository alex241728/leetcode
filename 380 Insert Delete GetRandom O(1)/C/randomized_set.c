#include <stdio.h>
#include <stdlib.h>

#include "randomized_set.h"

RandomizedSet* randomizedSetCreate() {
    RandomizedSet* newSet = NULL;
    
    if ((newSet = (RandomizedSet*) malloc(sizeof(RandomizedSet))) == NULL) {
        perror("Cannot allocate memory for 'newSet'.");
        exit(1);
    }
    
    newSet->capacity = 10;
    newSet->arr = (int*) malloc(sizeof(int) * newSet->capacity);
    newSet->size = 0;

    return newSet;
}

bool randomizedSetInsert(RandomizedSet* obj, int val) {
    for (int i = 0; i < obj->size; i++) {
        if (obj->arr[i] == val) {
            return false;
        }
    }

    if (obj->size == obj->capacity) {
        obj->capacity *= 2;
        obj->arr = (int*) realloc(obj->arr, sizeof(int) * obj->capacity);
    }
    obj->arr[obj->size++] = val;
    return true;
}

bool randomizedSetRemove(RandomizedSet* obj, int val) {
    if (obj->size == 0) {
        return false;
    }

    for (int i = 0; i < obj->size; i++) {
        if (obj->arr[i] == val) {
            obj->arr[i] = obj->arr[obj->size - 1];
            obj->size--;
            return true;
        }
    }
    return false;
}

int randomizedSetGetRandom(RandomizedSet* obj) {
    if (obj->size == 0) {
        return -1;
    }
    int randomIdx = rand() % obj->size;
    return obj->arr[randomIdx];
}

void randomizedSetFree(RandomizedSet* obj) {
    free(obj->arr);
    free(obj);
}