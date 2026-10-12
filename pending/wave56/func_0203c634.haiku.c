#include "ffc/types.h"

typedef struct { uint32_t w[3]; } Buf12;

extern uint32_t func_0204f7ec(const void *object);
extern void func_02056c9c(void *obj, uint32_t v);
extern void func_02005988(void *buf, const void *src);
extern void func_02018c48(void *dst, const void *src);
extern void *func_020059cc(void *object);
extern void *data_0213df18;
extern char data_020aec64[];
extern uint32_t data_020aeca8[];
extern uint32_t data_020aecb8[];

void *func_0203c634(void *self, uint32_t p1, uint32_t p2, uint32_t *p3,
                    uint32_t s0, uint8_t s1, uint32_t s2)
{
    uint8_t *o = (uint8_t *)self;
    Buf12 buf;
    uint32_t i;

    func_02056c9c(self, func_0204f7ec(data_0213df18));
    *(void **)o = data_020aec64;
    *(uint32_t *)(o + 0x88) = p1;
    *(uint32_t *)(o + 0x8c) = p2;
    *(uint32_t *)(o + 0x90) = p3[0];
    *(uint32_t *)(o + 0x94) = p3[1];
    *(uint32_t *)(o + 0x98) = p3[2];
    *(uint32_t *)(o + 0x9c) = p3[3];
    *(uint32_t *)(o + 0xa0) = p3[4];
    *(uint32_t *)(o + 0xa4) = p3[5];
    func_02005988(&buf, data_020aeca8);
    func_02018c48(o + 0xa8, &buf);
    func_020059cc(&buf);
    for (i = 0; i < 3; i++) {
        *(uint32_t *)(o + 0xb8 + i * 4) = i;
    }
    for (i = 0; i < 3; i++) {
        *(uint32_t *)(o + 0xc4 + i * 4) = 0;
    }
    *(uint32_t *)(o + 0xd8) = s0;
    *(uint8_t *)(o + 0xdc) = s1;
    *(uint32_t *)(o + 0xe0) = s2;
    *(uint32_t *)(o + 0x80) = data_020aecb8[0];
    *(uint32_t *)(o + 0x84) = data_020aecb8[1];
    return self;
}
