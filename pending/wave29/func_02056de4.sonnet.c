#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef struct Inner {
    uint8_t pad[0x12];
    uint8_t flag;
    uint8_t pad2[0x1c - 0x13];
    uint8_t sub[0];
} Inner;

typedef struct Outer {
    uint8_t pad[0xc];
    uint32_t word;
    uint8_t pad2[0x14 - 0x10];
    Inner *inner;
} Outer;

void func_02056de4(Outer *p) {
    volatile int unused[2]; (void)unused;
    Inner *s = p->inner;
    uint8_t flag = s->flag;
    uint8_t *q = (uint8_t *)s + 0x1c;
    if (flag != 0) {
        func_0208763c(q);
    }
    {
        int r4 = (*(void **)((uint8_t *)s + 0x14) == 0);
        if (flag != 0) {
            func_02087678(q);
        }
        if (r4 != 0) {
            p->word = (p->word & ~0xffu) | 2;
        }
    }
}
