#include "ffc/types.h"

extern void func_ov002_021a1868(void *obj, uint32_t v);
extern uint32_t func_ov002_021a16d4(const void *object);
extern uint32_t func_ov002_02195fa4(void);
extern uint32_t func_ov002_02198700(uint32_t a, uint32_t b);
extern void *func_02015c98(void *unused, uint32_t index);
extern uint32_t func_ov002_021a1918(void *obj, uint32_t k);
extern uint32_t func_ov002_021c85d8(void *obj, uint32_t k);
extern uint32_t func_ov002_021c92c0(uint32_t a, uint32_t b);
extern uint32_t func_02055a2c(void *obj, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov002_021c91b4(uint32_t a);
extern uint32_t func_ov002_0219acac(void *obj, uint32_t b);
extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a38c4(uint32_t a, uint32_t b);
extern void func_ov002_021a3bd4(uint32_t a, void *b, uint32_t c, uint32_t d,
                                uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void *data_020b8e44;

void func_ov002_021a984c(void *a, void *b)
{
    uint8_t *s = (uint8_t *)a;
    uint8_t *in = (uint8_t *)b;
    uint32_t r6;
    uint32_t t;

    func_ov002_021a1868(a, *(uint32_t *)(in + 4));
    func_ov002_021a16d4(a);
    r6 = func_ov002_02198700(func_ov002_02195fa4(), *(uint32_t *)(in + 8));
    func_02015c98(data_020b8e44, *(uint32_t *)(in + 0xc));

    if (in[0x14] != 0 || *(uint32_t *)(in + 0x20) != 0) {
        return;
    }

    if (in[0x51] == 0) {
        if (func_ov002_021a1918(*(void **)(s + 0xf8), 0xe) == 0) {
            return;
        }
        t = func_ov002_021c85d8(s + 0x144, 0) ? 0x1178 : 0x1179;
        t = func_ov002_021c92c0(0, t);
        t = func_02055a2c(*(void **)(s + 0xf0), t);
        func_02056bc0(s + 0x14, (void *)t);
        t = func_ov002_021c91b4(0);
        t = func_ov002_0219acac(*(void **)(s + 0xf0), t);
        func_02056bc0(s + 0x14, (void *)t);
    } else {
        t = func_ov002_021c85d8(s + 0x144, 0) ? 0x1124 : 0x1125;
        t = func_ov002_021c92c0(0, t);
        t = func_02055a2c(*(void **)(s + 0xf0), t);
        func_02056bc0(s + 0x14, (void *)t);
        t = func_ov002_021c91b4(0);
        t = func_ov002_0219acac(*(void **)(s + 0xf0), t);
        func_02056bc0(s + 0x14, (void *)t);

        r6 = func_ov002_021aa850(r6);
        {
            uint32_t x = func_ov002_021a38c4(r6, *(uint32_t *)(in + 0x54));
            func_ov002_021a3bd4(r6, s + 0x14, 0, 0, x, 0, *(uint32_t *)(in + 0x58), 1);
        }
        *(uint32_t *)(in + 0x20) = 0;
    }
}
