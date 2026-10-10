#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t arg);
extern char data_020aedf8[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S;

void *func_0203e488(S s, uint8_t e)
{
    char *p = (char *)func_0205681c(0x94);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(void **)p = data_020aedf8;
        *(uint32_t *)(p + 0x84) = s.a;
        *(uint32_t *)(p + 0x88) = s.b;
        *(uint32_t *)(p + 0x8c) = s.c;
        *(uint8_t *)(p + 0x90) = (uint8_t)s.d;
        *(uint8_t *)(p + 0x91) = e;
    }
    return p;
}
