#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_02056dd4(void *object);
extern void *func_0204f7d4(const void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_02071aec(void *a, void *b, void *c);
extern void func_02071be4(void *obj, Pair v);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213df18;
extern void *data_020b8e44;

void func_0200d240(void *p0)
{
    uint8_t *p = (uint8_t *)p0;

    if (*(void **)(p + 0x88) == 0) {
        void *r4 = func_02056dd4(p0);
        if (r4 == func_0204f7d4(data_0213df18)) {
            if (((void **)((uint8_t *)func_02056dd4(p0) + 0x18))[0] != 0) {
                void *r6;
                r4 = func_0205681c(0x88);
                if (r4 != 0) {
                    r6 = *(void **)((uint8_t *)*(void **)data_020b8e44 + 0x88);
                    r4 = func_02071aec(r4, r6, func_02056dd4(p0));
                }
                *(void **)(p + 0x88) = r4;
                func_02071be4(r4, *(Pair *)(p + 0x8c));
                func_02056bc0(p + 0x48, *(void **)(p + 0x88));
            }
        }
    }

    if (*(void **)(p + 0x88) != 0) {
        if (func_02056dd4(p0) != func_0204f7d4(data_0213df18)) {
            uint32_t *obj = (uint32_t *)*(void **)(p + 0x88);
            uint32_t r1 = obj[3];
            r1 &= ~0xffu;
            r1 |= 2;
            obj[3] = r1;
            *(void **)(p + 0x88) = 0;
        }
    }
}
