#include "ffc/types.h"

typedef struct Pool {
    uint32_t *head;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t *tail;
    int32_t idx;
    uint32_t f18;
    int32_t count;
} Pool;

extern uint32_t func_02088978(void);
extern uint32_t func_0208a39c(void);
extern void func_0208898c(uint32_t);
extern void func_020889f4(uint32_t);
extern Pool data_021419a4;
extern uint32_t *data_021419c8[];

uint32_t *func_02089f08(uint32_t a)
{
    Pool *d = &data_021419a4;
    uint32_t *node;
    uint32_t *last;
    uint32_t *tail;
    uint32_t saved;

    saved = func_02088978();
    if (a & 1) {
        if (d->f4 == func_0208a39c()) {
            do {
                func_0208898c(saved);
                func_020889f4(50);
                saved = func_02088978();
            } while (d->f4 == func_0208a39c());
        }
    } else {
        if (d->f4 == func_0208a39c()) {
            func_0208898c(saved);
            return 0;
        }
    }

    node = data_021419c8[d->idx];
    d->idx = d->idx + 1;
    if (d->idx > 8) {
        d->idx = 0;
    }

    last = node;
    if (*node != 0) {
        do {
            last = (uint32_t *)*last;
        } while (*last != 0);
    }

    tail = d->tail;
    if (tail != 0) {
        *tail = (uint32_t)node;
    } else {
        d->head = node;
    }
    d->tail = last;
    d->count -= 1;
    d->f4++;
    func_0208898c(saved);
    return node;
}
