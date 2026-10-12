#include "ffc/types.h"

extern void func_02029a0c(void *object);
extern void func_020059cc(void *object);
extern void func_02035c18(void *object);
extern void func_02052d3c(void *object, void *arg);
extern void func_02052c04(void *object);
extern void func_02053290(void *object);
extern void func_02056844(void *object);
extern char data_020ad89c[];

void *func_02029928(void *p)
{
    uint8_t *self = (uint8_t *)p;
    uint8_t *s4;

    *(void **)self = data_020ad89c;
    func_02029a0c(self);
    func_020059cc(self + 0x98);
    func_02035c18(self + 0x94);

    if (*(void **)(self + 0x60) != 0) {
        if (self[0x68]) {
            func_02052d3c(*(void **)(self + 0x60), *(void **)(self + 0x64));
        }
        func_02052c04(*(void **)(self + 0x60));
    }

    if (*(void **)(self + 0x54) != 0) {
        if (self[0x5c]) {
            func_02052d3c(*(void **)(self + 0x54), *(void **)(self + 0x58));
        }
        func_02052c04(*(void **)(self + 0x54));
    }

    if (*(void **)(self + 0x48) != 0) {
        if (self[0x50]) {
            func_02052d3c(*(void **)(self + 0x48), *(void **)(self + 0x4c));
        }
        func_02052c04(*(void **)(self + 0x48));
    }

    if (*(void **)(self + 0x3c) != 0) {
        if (self[0x44]) {
            func_02052d3c(*(void **)(self + 0x3c), *(void **)(self + 0x40));
        }
        func_02052c04(*(void **)(self + 0x3c));
    }

    s4 = self + 0x14;
    func_020059cc(s4 + 0x18);
    if (*(void **)(s4 + 4) != 0) {
        if (s4[0xc]) {
            func_02052d3c(*(void **)(s4 + 4), *(void **)(s4 + 8));
        }
        func_02052c04(*(void **)(s4 + 4));
    }
    func_02053290(s4);

    if (*(void **)(self + 8) != 0) {
        if (self[0x10]) {
            func_02052d3c(*(void **)(self + 8), *(void **)(self + 0xc));
        }
        func_02052c04(*(void **)(self + 8));
    }

    func_02053290(self + 4);
    func_02056844(self);
    return self;
}
