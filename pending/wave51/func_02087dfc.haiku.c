#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t ip);
extern uint32_t data_02141790[];

typedef struct {
    int32_t size;
    uint32_t *addr;
    int32_t extra;
} Elem;

typedef struct {
    uint32_t a;
    int32_t count;
    uint32_t b;
    uint32_t c;
    Elem *elems;
} Pool;

int32_t func_02087dfc(int32_t idx, uint32_t a, uint32_t b) {
    uint32_t ip;
    Pool *p;
    int32_t i;
    int32_t count;
    Elem *e;
    uint32_t lo;
    uint32_t hi;

    ip = func_02088978();
    p = (Pool *)data_02141790[idx];
    count = p->count;
    lo = (a + 0x1f) & ~0x1fu;
    hi = b & ~0x1fu;
    for (i = 0; i < count; i++) {
        e = &p->elems[i];
        if (e->size < 0) {
            e->size = hi - lo;
            ((uint32_t *)lo)[0] = 0;
            ((uint32_t *)lo)[1] = 0;
            ((uint32_t *)lo)[2] = e->size;
            e->addr = (uint32_t *)lo;
            e->extra = 0;
            func_0208898c(ip);
            return i;
        }
    }
    func_0208898c(ip);
    return -1;
}
