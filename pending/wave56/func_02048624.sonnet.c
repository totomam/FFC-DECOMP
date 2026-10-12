#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02037598(void);
extern uint32_t func_0203b738(void);
extern uint32_t func_020215a4(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *func_020487a0(void *container, void *position, uint8_t flag);
extern void func_02036750(void *obj);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1f0(void *obj, uint32_t a, void *b);
extern void func_02035f58(void *obj);
extern void func_0201f600(void *obj, uint32_t a, void *b, void *c);
extern void *func_0205681c(uint32_t a);
extern void *func_0203b02c(void *a, void *b, void *c);
extern void *func_02035fd0(void *object);
extern void func_020367a8(void *obj);
extern Pair data_020afd08;
extern void *data_020b93b8;

typedef struct { uint8_t p0[0x14]; uint8_t l14[0x6c]; uint32_t v80; uint32_t v84; uint8_t p88[0xc]; uint8_t a94[0x1cc-0x94]; uint8_t p1cc[0x274-0x1cc]; uint8_t c274[4]; uint32_t v278; } S;
void func_02048624(S *p)
{
    if (p->v278 == 0) {
        uint32_t r4;
        uint32_t x;
        func_02037598();
        *(Pair*)&p->v80 = data_020afd08;
        r4 = func_0203b738();
        x = func_020215a4(0xffffffff, 10);
        func_02056bc0(p->l14, (void *)x);
        func_02056bc0(p->l14, (void *)r4);
    } else {
        volatile uint8_t tmp[0xc];

        uint8_t loc0c[0x60];
        uint8_t loc6c[0x58];
        void *pos = *(void **)p->c274;
        uint32_t idx;
        void *node;

        tmp[0] = 0;
        idx = *(uint32_t *)pos;
        func_020487a0(p->c274, pos, tmp[0]);
        func_02036750(loc6c);
        func_0201f1f0(data_020b93b8, func_0201b924(data_020b93b8), loc6c);
        func_02035f58(loc0c);
        func_0201f600(data_020b93b8, idx, loc6c, loc0c);
        node = func_0205681c((uint32_t)p->p1cc);
        if (node != 0) {
            node = func_0203b02c(node, (uint8_t *)p + 0x94 + idx * 0x60, loc0c);
        }
        func_02056bc0(p->l14, node);
        func_02035fd0(loc0c);
        func_020367a8(loc6c);
    }
}
