#include "ffc/types.h"

extern void func_0200a5dc(void *dst, void *src);
extern void func_02068e18(void *a, void *b);
extern void *func_0200a678(void *object);
extern int func_020692e8(void *object);
extern uint32_t func_0206d3b4(void *object);
extern void *func_0206cd68(void *object);
extern void func_02056bc0(void *object, void *node);

typedef struct { uint32_t b0 : 1; uint32_t rest : 31; } FlagW;
typedef void (*vfn_t)(void *, uint32_t, uint32_t);

void func_ov013_021c2e7c(uint8_t *p)
{
    uint32_t i;
    uint32_t tmp[3];
    uint32_t v;
    uint32_t r;
    uint32_t f;

    for (i = 0; i < 9; i++) {
        uint8_t *o = *(uint8_t **)(p + 0x104 + i * 4);
        int n = 0x12;
        uint8_t *q = o + 0xb8;
        do {
            *q = 0;
            q++;
        } while (--n > 0);

        f = ((FlagW *)(o + 0xac))->b0;
        if (f == 0) {
            *(uint16_t *)(o + 0xae) = 0;
            o[0xac] = o[0xac] & ~0xfe;
        } else {
            **(uint16_t **)(o + 0xb4) = 0;
            *(uint32_t *)(o + 0xb0) = 0;
        }

        func_0200a5dc(tmp, o + 0xac);
        func_02068e18(*(void **)(o + 0xa8), tmp);
        func_0200a678(tmp);

        f = ((FlagW *)(o + 0xac))->b0;
        if (f) {
            v = *(uint32_t *)(o + 0xb0);
        } else {
            v = (o[0xac] >> 1) & 0x7f;
        }

        if (v == 0) {
            if (func_020692e8(o)) {
                void *obj = *(void **)(o + 0xa4);
                ((vfn_t)(((void **)*(void **)obj)[14]))(obj, 1, 0);
            } else {
                void *obj = *(void **)(o + 0xa4);
                ((vfn_t)(((void **)*(void **)obj)[14]))(obj, 2, 0);
            }
        } else {
            if (func_020692e8(o)) {
                void *obj = *(void **)(o + 0xa4);
                ((vfn_t)(((void **)*(void **)obj)[14]))(obj, 3, 0);
            } else {
                void *obj = *(void **)(o + 0xa4);
                ((vfn_t)(((void **)*(void **)obj)[14]))(obj, 4, 0);
            }
        }
    }

    r = func_0206d3b4(*(void **)(p + 0xf4));
    {
        void *x = func_0206cd68(*(void **)(p + 0xf4));
        uint8_t *base = p + 0x14;
        func_02056bc0(base, x);
        func_02056bc0(base, (void *)r);
    }
}
