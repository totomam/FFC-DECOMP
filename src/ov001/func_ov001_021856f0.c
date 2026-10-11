#include "ffc/types.h"

typedef struct List {
    void *head;
    void *tail;
    int32_t count;
} List;

void *func_ov001_021856f0(List *l)
{
    uint8_t *node = (uint8_t *)l->head;
    if (node != 0) {
        l->head = *(void **)(node + 0x24);
        if (l->head == 0) {
            l->tail = 0;
        }
        l->count = l->count - 1;
    }
    return node;
}
