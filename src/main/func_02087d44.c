#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t x);
extern void *func_02087c24(void *head, void *node);
extern void *func_02087c40(void *head, void *node);
extern void *data_02141790[];

typedef struct {
    int32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t w3;
    uint8_t *arr;
} Blk;

typedef struct {
    uint32_t f0;
    void *f4;
    void *f8;
} Ent;

void func_02087d44(uint32_t a, int32_t b, uint32_t c)
{
    uint32_t r7 = func_02088978();
    Blk *blk = (Blk *)data_02141790[a];
    Ent *e;
    uint32_t node;
    if (b < 0) {
        b = blk->w0;
    }
    e = (Ent *)(blk->arr + b * 12);
    node = c - 0x20;
    e->f8 = func_02087c24(e->f8, (void *)node);
    e->f4 = func_02087c40(e->f4, (void *)node);
    func_0208898c(r7);
}
