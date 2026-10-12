#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov007_021bec50(void *p);
extern void func_ov005_02196144(uint32_t x, uint8_t y);
extern void func_ov007_021beccc(void *p);
extern void func_02069724(Pair *out, void *p);
extern void func_02069828(void *p, Pair s);

void func_ov007_021bebec(void *r0)
{
    uint8_t *p = (uint8_t *)r0;
    Pair s;
    uint32_t *q;
    uint32_t x;
    uint32_t y;
    uint32_t a = *(uint32_t *)(p + 0x110);
    uint32_t b = *(uint32_t *)(p + 0x114);
    void *obj;
    void **vt;

    if (a == b) {
        obj = *(void **)(p + 0xc4);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[10])(obj);
    } else {
        obj = *(void **)(p + 0xc4);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[11])(obj);
    }

    func_ov007_021bec50(p);
    func_ov005_02196144(*(uint32_t *)(p + 0xdc), (uint8_t)(*(uint32_t *)(p + 0x110) + 1));
    func_ov007_021beccc(p);
    func_02069724(&s, p);
    func_02069828(p, s);
}
