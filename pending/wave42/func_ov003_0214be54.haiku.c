#include "ffc/types.h"

extern void *func_0205681c(uint32_t v);
extern uint32_t func_0202d4cc(void *r, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_0202d6ec(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void func_0202d68c(void *obj, uint32_t a, int32_t b, uint32_t c);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_0202d85c(void *obj, void *buf, uint32_t c);
extern void func_0202d794(void *obj);
extern void func_0202d75c(void *obj);
extern uint8_t data_ov003_02179924[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} P;

void func_ov003_0214be54(uint8_t *obj, P p, uint16_t s, uint32_t t)
{
    uint32_t tmp[17];
    int32_t x;

    if (*(void **)(obj + 0x408) == 0) {
        void *r = func_0205681c(0x210);
        if (r != 0) {
            r = (void *)func_0202d4cc(r, *(uint32_t *)(obj + 0x210 - 0x98), 0x7fff, 0, 0);
        }
        *(void **)(obj + 0x408) = r;
        func_02056bc0(*(void **)(obj + 0x338), r);
    }
    func_0202d6ec(*(void **)(obj + 0x408), p.a, p.c, p.b);
    x = (int32_t)(uint16_t)(0x4000 - s) * 0x168;
    func_0202d68c(*(void **)(obj + 0x408), 0, x / 16, 0);
    func_02086ad4(tmp, (uint32_t)data_ov003_02179924, t);
    func_0202d85c(*(void **)(obj + 0x408), tmp, 0);
    func_0202d794(*(void **)(obj + 0x408));
    func_0202d75c(*(void **)(obj + 0x408));
}
