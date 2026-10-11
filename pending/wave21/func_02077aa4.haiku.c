#include "ffc/types.h"

extern void func_02077a88(void *q, void *b);

typedef struct {
    uint32_t head;
    uint32_t tail;
    uint16_t count;
    uint16_t off;
} Q;

void func_02077aa4(Q *q, uint8_t *b)
{
    if (q->head == 0) {
        func_02077a88(q, b);
        return;
    }
    uint8_t *n = b + q->off;
    *(uint32_t *)n = q->tail;
    *(uint32_t *)(n + 4) = 0;
    *(uint32_t *)((uint8_t *)q->tail + q->off + 4) = (uint32_t)b;
    q->tail = (uint32_t)b;
    q->count++;
}
