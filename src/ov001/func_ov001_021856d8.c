#include "ffc/types.h"

struct Queue {
    void *head;
    void *tail;
    uint32_t count;
};

void func_ov001_021856d8(struct Queue *q, uint8_t *node)
{
    *(void **)(node + 0x24) = q->head;
    void *t = q->tail;
    q->head = node;
    if (t == 0) {
        q->tail = node;
    }
    q->count++;
}
