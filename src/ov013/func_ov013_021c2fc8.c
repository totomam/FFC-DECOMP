#include "ffc/types.h"
typedef struct { uint32_t flag:1; uint32_t pad:31; } W;
typedef struct { uint8_t flag:1; uint8_t small:7; } Y;
extern void func_ov013_021c2a2c(void *a);
extern void func_02021338(int a);
extern void *func_0205681c(int a);
extern void *func_ov013_021c2224(void *a, void *b, void *c, void *d);
extern void func_02056bc0(void *object, void *node);
void func_ov013_021c2fc8(uint8_t *p, uint8_t *q) {
    uint32_t n;
    void *r;
    if (q == *(uint8_t **)(p + 0x128)) {
        **(uint32_t **)(p + 0xf8) = 1;
        func_ov013_021c2a2c(p);
        return;
    }
    if (((W *)(q + 0xac))->flag == 0)
        n = ((Y *)(q + 0xac))->small;
    else
        n = *(uint32_t *)(q + 0xb0);
    if (n != 0) {
        func_02021338(0xcf);
        r = func_0205681c(0xf4);
        if (r != 0)
            r = func_ov013_021c2224(r, p, *(void **)(p + 0xf4), q);
        func_02056bc0(p + 0x14, r);
    } else {
        func_02021338(0xc7);
    }
}
