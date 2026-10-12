#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_0208763c(void *p);
extern Pair func_0209a76c(uint32_t a, uint32_t b);
extern void func_020091a4(void *p);
extern uint32_t func_0203b708(uint32_t v);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_020817c8(uint32_t first, uint32_t second);
extern uint32_t func_02081210(uint32_t object, uint32_t second);
extern uint32_t func_02062a78(void *obj, Pair pr, uint32_t r3, uint32_t e5, int32_t e6);
extern void func_02087678(void *p);
extern uint32_t data_0209de28;
extern uint32_t data_020a7c00;
extern uint32_t data_0209de2c;
extern uint32_t data_020aad70[2];

void func_02009494(uint8_t *p)
{
    volatile uint32_t slots[15];
    volatile struct {
        uint8_t *ptr;
        uint8_t flag;
    } ctx;
    Pair pr;
    uint32_t *c0;
    uint32_t n;
    int32_t sh;

    ctx.flag = 1;
    ctx.ptr = p + 0x98;
    if (ctx.flag) {
        func_0208763c(ctx.ptr);
    }

    c0 = (uint32_t *)(p + 0xc0);
    *c0 = *c0 + 1;
    *c0 = func_0209a76c(*c0, *(uint32_t *)(p + 0xbc)).b;

    func_020091a4(p);
    func_02056bc0(p + 0x14, func_0203b708(data_0209de28));

    n = 0x2000;
    sh = (int32_t)func_02081210(func_020817c8(n << 3, data_020a7c00), n) >> 12;
    slots[0] = 0xb0;
    slots[1] = sh;
    slots[2] = 0;
    pr.a = 0;
    pr.b = 0xc0;
    func_02062a78(*(void **)(p + 0x88), pr, 0, slots[0], sh);

    func_02056bc0(p + 0x14, func_0203b708(data_0209de2c));

    *(uint32_t *)(p + 0x80) = data_020aad70[0];
    *(uint32_t *)(p + 0x84) = data_020aad70[1];

    if (ctx.flag) {
        func_02087678(ctx.ptr);
    }
}
