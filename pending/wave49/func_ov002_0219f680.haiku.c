#include "ffc/types.h"

typedef struct { uint32_t a, b; } S2;

extern void *func_ov002_0219db78(void *obj, int idx);
extern void *func_ov002_0219d120(void);
extern uint32_t func_ov002_0219c5a8(void *list);
extern void *func_ov002_0219c5b8(void *list, uint32_t idx);
extern void func_ov002_021b101c(void *node, int v);
extern void func_ov002_021b0ce0(void *node, int v);
extern void func_ov002_021b0cc0(void *node);
extern void *func_0203b6fc(void);
extern void func_ov002_0219d124(S2 *out, int a, int b);
extern void *func_02062a78(void *v, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *obj);

void func_ov002_0219f680(void *self)
{
    uint8_t *p = (uint8_t *)self;
    int i;

    if (p[0x84] == 0) {
        int k = 5;
        for (i = 0; i < 2; i++) {
            func_ov002_0219db78(*(void **)(p + 0x80), i);
            if (i == 1) {
                void *list = func_ov002_0219d120();
                uint32_t j;
                for (j = 0; j < func_ov002_0219c5a8(list); j++) {
                    void *node = func_ov002_0219c5b8(list, j);
                    func_ov002_021b101c(node, k);
                    func_ov002_021b0ce0(node, 1);
                    func_ov002_021b0cc0(node);
                }
            }
        }
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
    } else {
        void *t = func_0203b6fc();
        int r7;
        for (r7 = 0; r7 < 2; r7++) {
            void *v = func_ov002_0219db78(*(void **)(p + 0x80), r7);
            int r4;
            S2 out24;
            S2 s1c;
            if (r7 == 0) {
                void *list = func_ov002_0219d120();
                uint32_t j;
                for (j = 0; j < func_ov002_0219c5a8(list); j++) {
                    void *node = func_ov002_0219c5b8(list, j);
                    func_ov002_021b101c(node, 5);
                    func_ov002_021b0ce0(node, 1);
                    func_ov002_021b0cc0(node);
                }
            }
            r4 = 4;
            if (r7) {
                r4 = 5;
            }
            {
                void **vt = *(void ***)v;
                ((void (*)(S2 *, void *))vt[4])(&out24, v);
            }
            func_ov002_0219d124(&s1c, r4, r7);
            func_02056bc0(t, func_02062a78(v, out24.a, out24.b, s1c.a, s1c.b, 0x78, 0xffffffffu));
        }
        {
            void *r4b = func_02056aec(self);
            void *base = (uint8_t *)self + 0x14;
            func_02056bc0(base, t);
            func_02056bc0(base, r4b);
        }
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
    }
}
