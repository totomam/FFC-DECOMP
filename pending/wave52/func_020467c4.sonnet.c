#include "ffc/types.h"

typedef struct { uint8_t f; } Flag;
typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02037598(void);
extern uint32_t func_0203b738(void);
extern int func_020215a4(int a, int b);
extern void func_02056bc0(void *object, void *node);
extern void *func_020487a0(void *container, void *position, Flag flag);
extern void *func_0205681c(uint32_t size);
extern void *func_0203b02c(void *a, void *b, void *c);
extern Pair data_020afc28;

void func_020467c4(void *p)
{
    uint8_t *a = (uint8_t *)p;

    if (*(uint32_t *)(a + 0x468) == 0) {
        uint32_t t;
        int r;
        func_02037598();
        *(Pair *)(a + 0x80) = data_020afc28;
        t = func_0203b738();
        r = func_020215a4(-1, 10);
        a += 0x14;
        func_02056bc0(a, (void *)r);
        func_02056bc0(a, (void *)t);
        return;
    } else {
        Flag z, z2;
        void *node = *(void **)(a + 0x464);
        uint32_t id = *(uint32_t *)node;
        void *res;
        z.f = 0;
        z2 = z;
        func_020487a0(a + 0x464, node, z2);
        res = func_0205681c(0x1cc);
        if (res != 0) {
            res = func_0203b02c(res, a + 0xa4 + id * 0x60, a + 0x284 + id * 0x60);
        }
        a += 0x14;
        func_02056bc0(a, res);
    }
}
