#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_02056db0(void *a);
extern void func_02056844(void *a);

void *func_0203d65c(void *p) {
    uint8_t *b = (uint8_t *)p;
    void *sub;
    func_020059cc(b + 0xc4);
    func_020059cc(b + 0xb8);
    sub = b + 0xa8;
    if (*(void **)((uint8_t *)sub + 4) != 0) {
        if (((uint8_t *)sub)[0xc] != 0) {
            func_02052d3c(*(void **)((uint8_t *)sub + 4), *(uint32_t *)((uint8_t *)sub + 8));
        }
        func_02052c04(*(void **)((uint8_t *)sub + 4));
    }
    func_02053290(sub);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
