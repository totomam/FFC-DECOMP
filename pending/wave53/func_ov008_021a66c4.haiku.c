#include "ffc/types.h"

extern uint32_t func_02056aec(void *p);
extern uint32_t func_0203c058(int x);
extern uint32_t func_0203c044(int x);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b708(int x);
extern uint32_t func_020215cc(int x);

typedef struct {
    uint8_t raw[0x14];
} Sub;

void func_ov008_021a66c4(void *self)
{
    uint8_t *p = (uint8_t *)self;
    if (p[0x103]) {
        *(uint32_t *)(*(uint32_t *)(p + 0x108)) = (uint32_t)-1;
        uint32_t r7 = func_02056aec(self);
        uint32_t s = func_0203c058(0x1e);
        uint32_t r4 = func_0203c044(0x1e);
        void *r6 = (void *)func_0203b6fc();
        func_02056bc0(r6, (void *)r4);
        func_02056bc0(r6, (void *)s);
        uint32_t r0 = func_0203b708(0x1e);
        Sub *q = (Sub *)p + 1;
        func_02056bc0((void *)q, (void *)r0);
        func_02056bc0((void *)q, r6);
        func_02056bc0((void *)q, (void *)r7);
    } else {
        *(uint32_t *)(*(uint32_t *)(p + 0x108)) = (uint32_t)-1;
        uint32_t a = func_0203b708(0x1e);
        func_02056bc0(p + 0x14, (void *)a);
        uint32_t b = func_020215cc(0xf);
        func_02056bc0(p + 0x14, (void *)b);
        uint32_t r7 = func_02056aec(self);
        uint32_t s = func_0203c058(0x1e);
        uint32_t r4 = func_0203c044(0x1e);
        void *r6 = (void *)func_0203b6fc();
        func_02056bc0(r6, (void *)r4);
        func_02056bc0(r6, (void *)s);
        Sub *q = (Sub *)p + 1;
        func_02056bc0((void *)q, r6);
        func_02056bc0((void *)q, (void *)r7);
    }
}
