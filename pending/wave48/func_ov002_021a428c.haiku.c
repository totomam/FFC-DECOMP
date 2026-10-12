#include "ffc/types.h"

extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a18bc(const void *object);
extern void *func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021aa780(const void *object);
extern void *func_ov002_021aac08(const void *object);
extern void *func_ov002_021aac10(void *object);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint8_t func_ov002_021aab40(const void *object);
extern uint32_t func_ov002_021994c0(void *p, uint32_t x);
extern void func_ov002_021994e0(void *p, uint32_t x);
extern void func_ov002_021a1af8(void *ctx, void *entry, uint32_t v);

void func_ov002_021a428c(void *ctx, void *obj, uint32_t a2, int32_t *arr)
{
    int32_t n = 0;
    int32_t i;
    int32_t flag;
    int32_t v;
    void *e;
    uint32_t kind;

    for (i = 0; i < (int32_t)func_ov002_021a18bc(func_ov002_021aa850(obj)); i++) {
        e = func_ov002_021a18c4(func_ov002_021aa850(obj), i);
        kind = func_ov002_021aa780(e);
        int32_t ok;
        if (kind == 1 || kind == 2 || kind == 5) {
            ok = 1;
        } else {
            ok = 0;
        }
        if (ok != 0) {
            v = ((uint8_t *)func_ov002_021aac08(e))[0x14];
            if (func_ov002_021aa11c(func_ov002_021aac10(e), 3) == 0) {
                if (func_ov002_021aab40(obj) == 9) {
                    v += *(uint16_t *)((uint8_t *)func_ov002_021aac08(obj) + 0x54);
                }
                flag = 0;
                if (v > arr[n]) {
                    flag = 1;
                }
                if (func_ov002_021994c0(*(void **)((uint8_t *)ctx + 0xfc), 8)) {
                    func_ov002_021994e0(*(void **)((uint8_t *)ctx + 0xfc), 8);
                    flag = 1;
                }
                if (flag) {
                    func_ov002_021a1af8(ctx, e, a2);
                }
                n++;
            }
        }
    }
}
