#include "ffc/types.h"

extern void func_02056c9c(void *obj, int x);
extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void func_02056bc0(void *object, void *node);
extern char data_020b277c[];
extern char data_020b0b68[];
extern char data_020b0b7c[];
extern char data_020b0b54[];
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_020b28ec;

void *func_0207754c(uint8_t *self, void *a, void *b, void *c, uint8_t d)
{
    uint8_t *node;
    uint32_t m;

    func_02056c9c(self, 0);
    *(void **)self = data_020b277c;
    *(void **)(self + 0x80) = a;
    *(void **)(self + 0x84) = b;
    *(void **)(self + 0x90) = c;
    *(uint8_t *)(self + 0x94) = d;
    *(uint8_t *)(self + 0x9c) = 0;

    node = func_0205681c(0x34);
    if (node != 0) {
        m = 0xff;
        *(uint32_t *)(node + 0xc) &= ~m;
        *(void **)node = data_020b0b68;
        func_02087620(node + 0x1c);
        {
            volatile uint8_t *p;
            p = node + 0x10;
            *p = (uint8_t)(*p & ~m);
            p = node + 0x11;
            *p = (uint8_t)(*p & ~m);
            p = node + 0x12;
            *p = (uint8_t)(*p & ~m);
        }
        *(uint32_t *)(node + 0x14) = 0;
        *(void **)(node + 0x18) = node + 0x14;
        *(void **)node = data_020b0b7c;
        {
            volatile uint8_t *p = node + 0x11;
            *p = (uint8_t)(*p & ~m);
        }
    }
    *(void **)(self + 0xa0) = node;
    func_02056bc0(self + 0x48, node);

    node = func_0205681c(0x34);
    if (node != 0) {
        m = 0xff;
        *(uint32_t *)(node + 0xc) &= ~m;
        *(void **)node = data_020b0b68;
        func_02087620(node + 0x1c);
        {
            volatile uint8_t *p;
            p = node + 0x10;
            *p = (uint8_t)(*p & ~m);
            p = node + 0x11;
            *p = (uint8_t)(*p & ~m);
            p = node + 0x12;
            *p = (uint8_t)(*p & ~m);
        }
        *(uint32_t *)(node + 0x14) = 0;
        *(void **)(node + 0x18) = node + 0x14;
        *(void **)node = data_020b0b54;
        {
            volatile uint8_t *p = node + 0x11;
            *p = (uint8_t)(*p & ~m);
        }
    }
    *(void **)(self + 0xa4) = node;
    func_02056bc0(self + 0x48, node);

    *(Pair *)(self + 0x88) = data_020b28ec;
    return self;
}
