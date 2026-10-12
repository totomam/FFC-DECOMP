#include "ffc/types.h"

extern uint32_t func_0204f7ec(const void *object);
extern uint32_t func_0204f7d4(const void *object);
extern void *func_0205e7a8(void *object);
extern void *func_0203bcb4(uint32_t a, void *b, int c, int d, int e);
extern void func_02056bc0(void *object, void *node);
extern void func_02056bf4(void *object, void *node);
extern void *data_0213df18;

uint32_t func_ov003_0214ac3c(uint8_t *p, void *a1, void *a2, void *a3)
{
    uint32_t big = 0x6f * 4 - 4;
    uint8_t *base = p;
    int i;
    for (i = 0; i < 2; i++) {
        int isOne = (i == 1);
        void *src = isOne ? a3 : a2;
        uint32_t x;
        uint32_t off;
        void **slot;
        void *obj;
        void *ptr;

        if (isOne) {
            x = func_0204f7ec(data_0213df18);
            off = big;
        } else {
            x = func_0204f7d4(data_0213df18);
            off = 0x6f * 4;
        }
        slot = (void **)(base + off);
        if ((uint32_t)a1 == 0 || (uint32_t)a1 == (uint32_t)(i + 1)) {
            obj = func_0205e7a8(src);
            ptr = func_0203bcb4(x, obj, 1, 0, 0);
            *slot = ptr;
            ((void (*)(void *))((void **)(*(void **)ptr))[3])(ptr);
            ((void (*)(void *, int))((void **)(*(void **)*slot))[8])(*slot, 1);
            ((void (*)(void *))((void **)(*(void **)*slot))[10])(*slot);
            func_02056bc0(p + 0x48, *slot);
            func_02056bf4(p + 0x48, src);
            if (src != 0) {
                ((void (*)(void *))((void **)(*(void **)src))[1])(src);
            }
        }
    }
    return 0;
}
