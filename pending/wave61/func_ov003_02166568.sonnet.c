#include "ffc/types.h"
extern void func_020424e0(void *a);
extern void func_ov003_0214dda8(void);
extern void *func_02056aec(void);
extern void *func_ov003_0214de14(void);
extern void func_02056bc0(void *object, void *node);
typedef struct S {
    uint8_t pad0[0xc];
    uint32_t c;
    uint8_t pad1[0x14 - 0x10];
    uint8_t list[0x80 - 0x14];
    void *p80;
    uint8_t *p84;
    uint8_t f88;
} S;
void func_ov003_02166568(S *p)
{
    *p->p84 = p->f88;
    if (p->f88 != 0) {
        func_020424e0(p->p80);
        func_ov003_0214dda8();
        p->c = (p->c & ~0xff) | 2;
        return;
    }
    {
        void *r4 = func_02056aec();
        func_020424e0(p->p80);
        void *n = func_ov003_0214de14();
        void *l = p->list;
        func_02056bc0(l, n);
        func_02056bc0(l, r4);
    }
}
