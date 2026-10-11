#include "ffc/types.h"

extern void *func_02078030(void *pool, uint32_t size, uint32_t align);

typedef struct List {
    uint32_t tag;
    uint32_t head;
    uint32_t tail;
} List;

uint32_t func_02078168(uint8_t *self, uint32_t val)
{
    uint32_t tag = *(uint32_t *)(self + 0x24);
    List *list = (List *)(self + 0x24);
    uint32_t *n = (uint32_t *)func_02078030(list, 0x10, 4);
    if (n == 0) {
        return 0;
    }
    n[0] = val;
    n[1] = tag;
    n[2] = list->head;
    n[3] = list->tail;
    list->tail = (uint32_t)n;
    return 1;
}
