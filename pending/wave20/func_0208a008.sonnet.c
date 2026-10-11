#include "ffc/types.h"

typedef struct {
    uint32_t pad[2];
    uint32_t *head;
    uint32_t *tail;
} Queue;

extern uint32_t *func_02088978(uint32_t *p);
extern void func_0208898c(uint32_t *x);
extern Queue data_021419a4;

void func_0208a008(uint32_t *p)
{
    uint32_t *t; Queue *q = &data_021419a4;
    uint32_t *x;

    x = func_02088978(p); q = &data_021419a4;
    t = q->tail;
    if (t == 0) {
        q->head = p;
    } else {
        *t = (uint32_t)p;
    }
    q->tail = p;
    *p = 0;
    func_0208898c(x);
}
