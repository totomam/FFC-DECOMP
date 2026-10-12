#include "ffc/types.h"

extern void func_02021338(uint32_t a);
extern void func_02069288(void *object);
extern void func_020692f0(void *object);
extern uint32_t func_020692e0(void *object);
extern void func_020692a4(void *object);
extern uint32_t func_020655dc(void *object, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_020655b8(void *object);
extern uint32_t func_ov007_021aa408(void *object, uint32_t a, uint32_t b);
extern uint32_t func_020692e8(void *object);
extern void func_ov007_021aa054(void *object);
extern void func_ov007_021a9d64(void *object, uint32_t a);
extern uint32_t data_ov007_021c4cb4[];
extern uint32_t data_ov007_021c49f0[];
extern uint32_t data_ov007_021c4d30[];

#define VTF(o, off) (((void **)(*(void ***)(o)))[(off) / 4])

void func_ov007_021aa28c(void *self)
{
    uint32_t off;
    uint8_t i;
    uint32_t flag;
    uint32_t buf[2];
    uint8_t *s = (uint8_t *)self;

    off = 0xbd;
    func_02021338(off);
    off += 0x77;
    if (s[off] >= 0xc) {
        i = 0;
        do {
            func_02069288(*(void **)(s + 0xc8 + i * 4));
            i++;
        } while (i < 0xa);
        func_020692f0(*(void **)(s + 0xc8 + s[0x135] * 4));
        if (func_020692e0(*(void **)(s + 0xc0))) {
            func_020692a4(*(void **)(s + 0xc0));
            ((void (*)(void *, uint32_t, uint32_t))VTF(*(void **)(*(uint8_t **)(s + 0xc0) + 0x98), 0x38))(*(void **)(*(uint8_t **)(s + 0xc0) + 0x98), 1, 1);
        }
    }
    off = 0x4d << 2;
    s[off]--;
    buf[0] = data_ov007_021c4cb4[s[off] * 2] + data_ov007_021c49f0[9];
    buf[1] = data_ov007_021c4cb4[s[off] * 2 + 1] + data_ov007_021c49f0[10];
    ((void (*)(void *, uint32_t, uint32_t))VTF(*(void **)(s + 0x120), 0xc))(*(void **)(s + 0x120), buf[0], buf[1]);
    ((void (*)(void *))VTF(*(void **)(s + 0x120), 0x28))(*(void **)(s + 0x120));
    ((void (*)(void *))VTF(*(void **)(s + 0xf0 + s[off] * 4), 0x2c))(*(void **)(s + 0xf0 + s[off] * 4));

    flag = 1;
    func_02056bc0(s + 0x14, (void *)func_020655dc(*(void **)(*(uint8_t **)(s + 0xc4) + 0x98), 4, flag));
    func_02056bc0(s + 0x14, (void *)func_020655b8(*(void **)(*(uint8_t **)(s + 0xc4) + 0x98)));

    if (s[off] == 0) {
        func_02056bc0(s + 0x14, (void *)func_ov007_021aa408(*(void **)(s + 0xc4), data_ov007_021c4d30[0], data_ov007_021c4d30[1]));
    } else {
        if (func_020692e8(*(void **)(s + 0xc4))) {
            func_02056bc0(s + 0x14, (void *)func_020655dc(*(void **)(*(uint8_t **)(s + 0xc4) + 0x98), 3, flag));
        } else {
            func_02056bc0(s + 0x14, (void *)func_020655dc(*(void **)(*(uint8_t **)(s + 0xc4) + 0x98), 2, flag));
        } while (i < 0xa);
    }
    func_ov007_021aa054(s);
    func_ov007_021a9d64(s, 1);
}
