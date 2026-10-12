#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern uint32_t func_0203bfe0(uint32_t x);
extern uint32_t func_0203bfcc(uint32_t x);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_020215a4(uint32_t a, uint32_t b);
extern uint32_t data_020afaf8[2];

void func_02044658(uint8_t *p)
{
    if (*(uint32_t *)(p + 0x94) != 3) {
        uint32_t a = func_0203bfe0(30);
        uint32_t b = func_0203bfcc(30);
        uint32_t c = func_0203b6fc();
        func_02056bc0((void *)c, (void *)b);
        func_02056bc0((void *)c, (void *)a);
        uint32_t d = func_020215a4(0xFFFFFFFFu, 15);
        uint8_t *q = p + 0x14;
        func_02056bc0((void *)q, (void *)d);
        func_02056bc0((void *)q, (void *)c);
    }
    {
        S t = *(S *)data_020afaf8;
        *(S *)(p + 0x80) = t;
    }
}
