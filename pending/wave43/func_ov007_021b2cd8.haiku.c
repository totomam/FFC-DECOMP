#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_ov001_0218dde0(void *obj, uint32_t n);
extern void func_02056c4c(void);
extern void func_ov007_021b2884(void *obj, uint32_t a, uint32_t b);
extern void func_ov007_021b28ac(void *obj, uint32_t a);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *out, void *obj);
extern void *func_02032d24(void *obj, Pair v, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern uint32_t data_ov007_021c60e4[];
extern uint32_t data_ov007_021c60dc[];

void func_ov007_021b2cd8(void *param)
{
    uint8_t *p = (uint8_t *)param;
    Pair s;
    uint32_t buf[3];
    uint32_t zero;
    uint32_t flag;
    void *node;
    void *obj;

    func_ov001_0218dde0(p, 3);
    func_02056c4c();
    p[0xb4] = 1;
    func_ov007_021b2884(p, *(uint32_t *)(p + 0x108), 1);
    func_ov007_021b28ac(p, *(uint32_t *)(p + 0x108));
    if (*(uint32_t *)(p + 0x2d10) > 0x400) {
        uint8_t *q = *(uint8_t **)(p + 0x2d0c);
        q[0x3ff] = 0;
    }
    func_02091b10(p + 0x2d14, (uint32_t)data_ov007_021c60e4, *(uint32_t *)(p + 0x2d0c));
    zero = 0;
    flag = 0;
    node = func_0205681c(0xb0);
    if (node != 0) {
        func_02005988(buf, p + 0x2d14);
        s.a = 0x80;
        s.b = 0x60;
        node = func_02032d24(node, s, buf, 4, zero);
        flag = 1;
    }
    obj = func_ov001_0218dde0(p, 2);
    func_02056bc0(obj, node);
    if (flag) {
        func_020059cc(buf);
    }
    *(uint32_t *)(p + 0x100) += 1;
    *(uint32_t *)(p + 0x3114) = data_ov007_021c60dc[0];
    *(uint32_t *)(p + 0x3118) = data_ov007_021c60dc[1];
}
