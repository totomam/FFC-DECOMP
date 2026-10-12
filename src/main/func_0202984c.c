#include "ffc/types.h"

extern void func_02029a0c(void *obj);
extern void func_020059cc(void *obj);
extern void func_02035c18(void *obj);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *obj);
extern void *func_02053290(void *obj);
extern char data_020ad89c[];

void *func_0202984c(void *param) {
    uint8_t *p = (uint8_t *)param;

    *(void **)(p + 0x00) = data_020ad89c;
    func_02029a0c(p);
    func_020059cc(p + 0x98);
    func_02035c18(p + 0x94);

    if (*(void **)(p + 0x60) != 0) {
        if (p[0x68] != 0) {
            func_02052d3c(*(void **)(p + 0x60), *(void **)(p + 0x64));
        }
        func_02052c04(*(void **)(p + 0x60));
    }
    if (*(void **)(p + 0x54) != 0) {
        if (p[0x5c] != 0) {
            func_02052d3c(*(void **)(p + 0x54), *(void **)(p + 0x58));
        }
        func_02052c04(*(void **)(p + 0x54));
    }
    if (*(void **)(p + 0x48) != 0) {
        if (p[0x50] != 0) {
            func_02052d3c(*(void **)(p + 0x48), *(void **)(p + 0x4c));
        }
        func_02052c04(*(void **)(p + 0x48));
    }
    if (*(void **)(p + 0x3c) != 0) {
        if (p[0x44] != 0) {
            func_02052d3c(*(void **)(p + 0x3c), *(void **)(p + 0x40));
        }
        func_02052c04(*(void **)(p + 0x3c));
    }

    {
        uint8_t *q = p + 0x14;
        func_020059cc(q + 0x18);
        if (*(void **)(q + 0x4) != 0) {
            if (q[0xc] != 0) {
                func_02052d3c(*(void **)(q + 0x4), *(void **)(q + 0x8));
            }
            func_02052c04(*(void **)(q + 0x4));
        }
        func_02053290(q);
    }

    if (*(void **)(p + 0x8) != 0) {
        if (p[0x10] != 0) {
            func_02052d3c(*(void **)(p + 0x8), *(void **)(p + 0xc));
        }
        func_02052c04(*(void **)(p + 0x8));
    }
    func_02053290(p + 0x4);
    return p;
}
