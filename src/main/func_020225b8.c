#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_02056858(uint32_t x);
extern void func_0202249c(void *p);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020ad6f4[];

void *func_020225b8(uint8_t *p)
{
    uint8_t *q;
    uint8_t *r5;

    func_0200d5ec(p + 0xcc);

    q = p + 0xbc;
    *(void **)q = (void *)data_020ad6f4;
    func_02056858(((uint32_t *)q)[3]);

    q = p + 0xac;
    *(void **)q = (void *)data_020ad6f4;
    func_02056858(((uint32_t *)q)[3]);

    func_0202249c(p + 0xa0);

    r5 = p + 0x90;
    if (((uint32_t *)r5)[1] != 0) {
        if (r5[0xc] != 0) {
            func_02052d3c(((uint32_t *)r5)[1], ((uint32_t *)r5)[2]);
        }
        func_02052c04(((uint32_t *)r5)[1]);
    }
    func_02053290(r5);

    r5 = p + 0x80;
    if (((uint32_t *)r5)[1] != 0) {
        if (r5[0xc] != 0) {
            func_02052d3c(((uint32_t *)r5)[1], ((uint32_t *)r5)[2]);
        }
        func_02052c04(((uint32_t *)r5)[1]);
    }
    func_02053290(r5);

    func_02056db0(p);
    func_02056844(p);
    return p;
}
