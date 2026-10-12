#include "ffc/types.h"

extern void *func_02056aec(void *obj);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b821c(uint8_t *p, uint32_t id)
{
    int i;
    uint8_t *r;
    if (id == *(uint32_t *)(p + 0xd0)) {
        uint32_t *q = *(uint32_t **)(p + 0xd4);
        *q = 100;
        void *a = func_02056aec(p);
        void *b = func_0203b708(30);
        r = p + 0x14;
        func_02056bc0(r, b);
        func_02056bc0(r, a);
        return;
    }
    r = p;
    i = 0;
    r += 0x14;
    for (; i < 6; i++) {
        if (id == *(uint32_t *)(p + 0xb8 + i * 4)) {
            uint32_t *q = *(uint32_t **)(p + 0xd4);
            *q = i;
            void *a = func_02056aec(p);
            void *b = func_0203b708(30);
            func_02056bc0(r, b);
            func_02056bc0(r, a);
        }
    }
}
