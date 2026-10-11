#include "ffc/types.h"

typedef struct Node {
    struct Node *next;
    void (*fn)(void *, int);
    void *arg;
} Node;

extern Node *data_021452e0;

void func_0209ccac(void) {
    Node *n;
    while ((n = data_021452e0) != 0) {
        data_021452e0 = n->next;
        n->fn(n->arg, -1);
    }
}
