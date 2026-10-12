#include "ffc/types.h"

typedef struct S {
    uint32_t a0, v0, a1, v1, a2, v2, a3, v3, a4, v4, a5, v5;
    uint16_t h[0x11 + 1];
    uint32_t t0, t1, t2, t3, t4, t5;
} S;

extern void func_02035f58(void *p);
extern void func_ov009_021ad6ac(void *a, void *b, void *c);
extern void func_ov009_021a4d5c(void *a, void *b);
extern void func_ov009_0219c000(void *h);
extern void func_ov009_0219bc64(void *h, void *buf, int n);
extern void *func_02035fd0(void *object);
extern void *func_02056b10(void *owner);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020ae644[];
extern uint32_t data_020ae654[];

void func_ov011_021c20d8(void *r0, void *r1)
{
    uint32_t obj[24];
    uint32_t buf[24];
    uint16_t *d, *s;
    uint32_t i;

    func_02035f58(obj);
    func_ov009_021ad6ac(r0, r1, obj);
    func_ov009_021a4d5c(r0, r1);
    func_ov009_0219c000(*(void **)((uint8_t *)r0 + 0x2b8));

    buf[1] = (uint32_t)data_020ae644;
    buf[0] = obj[0];
    buf[3] = (uint32_t)data_020ae644;
    buf[2] = obj[2];
    buf[5] = (uint32_t)data_020ae644;
    buf[4] = obj[4];
    buf[7] = (uint32_t)data_020ae644;
    buf[6] = obj[6];
    buf[8] = obj[8];
    {
        uint32_t *p = &buf[9];
        p[1] = obj[10];
        p[0] = (uint32_t)data_020ae654;
        p[2] = obj[11];
    }
    d = (uint16_t *)&buf[12];
    s = (uint16_t *)&obj[12];
    i = 0x11;
    do {
        *d++ = *s++;
    } while (--i);

    buf[0x15] = obj[0x15];
    buf[0x16] = obj[0x16];
    buf[0x17] = obj[0x17];

    func_ov009_0219bc64(*(void **)((uint8_t *)r0 + 0x2b8), buf, 1);
    func_02035fd0(buf);
    func_02056bc0((uint8_t *)r0 + 0x14,
                  func_02056b10((uint8_t *)*(void **)((uint8_t *)r0 + 0x2b8) + 0x14));
    func_02035fd0(obj);
}
