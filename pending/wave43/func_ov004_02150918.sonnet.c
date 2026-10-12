#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov004_02150ab8(void *mem, uint32_t a, uint32_t b);
extern void func_ov004_02150c5c(void *ctx, uint32_t a, uint32_t b);

typedef struct {
    uint8_t pad0[0x18];
    void *obj;
    uint8_t pad1[0x34 - 0x1c];
    uint8_t f34;
    uint8_t f35;
    uint8_t pad2[2];
} Elem;

typedef struct {
    uint8_t pad[0x10c];
    Elem *list;
    uint32_t count;
} Ctx;

void func_ov004_02150918(void *ctx_, uint32_t a, uint32_t b)
{
    Ctx *ctx = (Ctx *)ctx_;
    uint32_t i;
    void *mem;
    void *res;

    *(uint8_t *)((uint8_t *)ctx + 0x130) = 0;
    *(uint8_t *)((uint8_t *)ctx + 0x131) = 1;

    for (i = 0; i < ctx->count; i++) {
        ctx->list[i].f34 = 1;
        ctx->list[i].f35 = 0;
        {
            void **vt = *(void ***)ctx->list[i].obj;
            ((void (*)(void *))vt[11])(ctx->list[i].obj);
        }
    }

    mem = func_0205681c(0x38);
    res = mem;
    if (res != 0) {
        res = func_ov004_02150ab8(mem, *(uint32_t *)((uint8_t *)ctx + 0xfc), *(uint32_t *)((uint8_t *)ctx + 0x100));
    }
    *(void **)((uint8_t *)ctx + 0x134) = res;
    func_ov004_02150c5c(ctx_, a, b);
}
