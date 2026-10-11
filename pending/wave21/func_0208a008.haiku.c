#include "ffc/types.h"

extern void *func_02088978(void *p);
extern void func_0208898c(void *p);

typedef struct {
    uint32_t pad0;
    uint32_t pad4;
    uint32_t head;
    uint32_t tail;
} Queue;

extern Queue data_021419a4;

void func_0208a008(void *p) {
    Queue *q;
    uint32_t *t;
    void *r;
    r = func_02088978(p);
    q = &data_021419a4;
    t = (uint32_t *)q->tail;
    if (t == 0) {
        q->head = (uint32_t)p;
    } else {
        *t = (uint32_t)p;
    }
    q->tail = (uint32_t)p;
    *(uint32_t *)p = 0;
    func_0208898c(r);
}
