#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void *func_02056db0(void *object);

void *func_0203d61c(void *p) {
    uint8_t *s = (uint8_t *)p;
    uint8_t *r4;

    func_020059cc(s + 0xc4);
    func_020059cc(s + 0xb8);
    r4 = s + 0xa8;
    if (*(void **)(r4 + 4) != 0) {
        if (r4[0xc] != 0) {
            func_02052d3c(*(void **)(r4 + 4), *(uint32_t *)(r4 + 8));
        }
        func_02052c04(*(void **)(r4 + 4));
    }
    func_02053290(r4);
    func_02056db0(p);
    return p;
}
