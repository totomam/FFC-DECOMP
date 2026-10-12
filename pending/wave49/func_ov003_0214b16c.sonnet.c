#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef uint32_t (*VFn)(void *);

extern uint32_t func_0203b6fc(void);
extern uint32_t func_0204f7ec(void *object);
extern uint32_t func_0204f7d4(void *object);
extern uint32_t func_0203b688(void);
extern void func_ov003_0214a05c(void *self, uint32_t p5, uint32_t o, uint32_t flag);
extern uint32_t func_ov003_02149da4(uint32_t a, Pair s, uint32_t d);
extern uint32_t func_0203b720(void);
extern uint32_t func_02060610(void *object);
extern uint32_t func_02056aec(void *object);
extern uint32_t func_0205e1a4(void *object);
extern uint32_t func_0205cd80(uint32_t a, Pair k, Pair vv, uint32_t d, uint32_t e);
extern uint32_t func_020607b0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void func_ov003_0214a180(void *self, uint32_t p5, uint32_t o, uint32_t flag);
extern uint32_t func_ov003_0214a6c4(void *self, Pair s, void *slot);
extern void *data_0213df18;
extern Pair data_ov003_021798c4;
extern Pair data_ov003_021798cc;


#define k (*(Pair *)(v + 9))
#define vv (*(Pair *)(v + 5))
void func_ov003_0214b16c(uint8_t *self, Pair pr, uint32_t n, uint32_t p4, uint32_t p5)
{
    uint32_t v[13];
    uint32_t ret0;
    int i;
    uint32_t *vb;
    uint32_t flag;

    ret0 = func_0203b6fc();
    vb = v + 11;
    v[11] = pr.a;
    v[12] = pr.b;

    for (i = 0; i < 2; i++) {
        flag = (i == 1);
        if (p5 != 0 && p5 != i + 1) {
            continue;
        }
        {
            void *o;
            uint32_t *slot;
            uint32_t c, x20, x24, x28, x2c, vi, r0v, f34, x, r6, t38, t;

            if (flag) {
                o = (void *)func_0204f7ec(data_0213df18);
            } else {
                o = (void *)func_0204f7d4(data_0213df18);
            }
            if (flag) { slot = (uint32_t *)(self + 0x1b8); } else { slot = (uint32_t *)(self + 0x1bc); }
            if (*slot == 0) {
                continue;
            }
            c = func_0203b688();
            func_ov003_0214a05c(self, p5, c, flag);
            x20 = func_ov003_02149da4(*(uint32_t *)((uint8_t *)o + 0x14), data_ov003_021798c4, 0);
            x24 = func_0203b720();
            x28 = func_02060610(*(void **)((uint8_t *)o + 0x20));
            x2c = func_02056aec((void *)*slot);
            vi = vb[i];
            vv.a = vi;
            vv.b = vi;
            k.a = 0x1000;
            k.b = 0x1000;
            r0v = func_0205e1a4((void *)*slot);
            f34 = func_0205cd80(r0v, k, vv, n * 2, p4);
            r6 = *(uint32_t *)((uint8_t *)o + 0x20);
            x = ((VFn)((void **)(*(void **)*slot))[13])((void *)*slot);
            r6 = func_020607b0(r6, x, n * 2, p4, 0);
            t38 = func_0203b6fc();
            func_02056bc0((void *)t38, (void *)r6);
            func_02056bc0((void *)t38, (void *)f34);
            func_02056bc0((void *)c, (void *)t38);
            func_02056bc0((void *)c, (void *)x2c);
            func_02056bc0((void *)c, (void *)x28);
            func_02056bc0((void *)c, (void *)x24);
            func_02056bc0((void *)c, (void *)x20);
            func_ov003_0214a180(self, p5, c, flag);
            t = func_ov003_0214a6c4(self, data_ov003_021798cc, slot);
            func_02056bc0((void *)c, (void *)t);
            func_02056bc0((void *)ret0, (void *)c);
        }
    }
    func_02056bc0(*(void **)(self + 0x1b4), (void *)ret0);
}
