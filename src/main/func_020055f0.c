#include "ffc/types.h"

extern uint32_t func_0205db5c(void *object);
extern uint32_t func_0205db6c(void *object);
extern uint32_t func_0205db04(const void *object);
extern void func_02005500(void *ctx, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

typedef struct Obj {
    uint32_t pad0;
    uint32_t pad1;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} Obj;

typedef struct Holder {
    uint32_t pad[3];
    Obj *items[1];
} Holder;

void func_020055f0(void *ctx, Holder *p, uint32_t idx) {
    Obj *obj = p->items[idx];
    uint32_t r7 = obj->fc;
    uint32_t r6 = obj->f10;
    uint32_t a, b, c;

    if (r6 == 0) {
        r6 = p->items[0]->f10;
    }
    a = func_0205db5c((void *)obj->f8);
    b = func_0205db6c((void *)p->items[idx]->f8);
    c = func_0205db04((void *)p->items[idx]->f8);
    func_02005500(ctx, r7, r6, a, b, c);
}
