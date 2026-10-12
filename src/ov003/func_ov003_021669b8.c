#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t v);
extern void *func_020424e0(void *p);
extern int func_ov003_021464f4(void *a, uint16_t b);
extern void *func_ov003_0215845c(int a, uint16_t b, void *c);
extern void func_0202d7b4(void *a, int b, int c);

typedef struct {
    uint8_t pad[0x14];
    void *p14;
    uint16_t h18;
    uint16_t h1a;
    uint32_t f1c;
    void *p20;
} S;

void func_ov003_021669b8(S *s)
{
    void *r6;
    int x;
    unsigned int i;

    s->h18 = func_ov003_021481c0(s->h18);
    if (s->h18 == 0) {
        return;
    }
    x = func_ov003_021464f4(func_020424e0(s->p14), s->h18);
    if (x == 0) {
        return;
    }
    r6 = func_ov003_0215845c(x, s->h1a, s->p20);
    if (r6 == 0) {
        return;
    }
    if (s->f1c == 0xFFFFFFFFu) {
        return;
    }
    for (i = 0; i < 3; i++) {
        func_0202d7b4(r6, (s->f1c & (1u << i)) ? 0 : 1, i);
    }
}
