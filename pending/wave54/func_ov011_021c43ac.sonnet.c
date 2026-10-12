#include "ffc/types.h"

extern uint8_t func_02036360(const void *object);
extern uint32_t func_020363a4(const void *object);
extern uint32_t func_020363bc(const void *object);
extern uint32_t func_020159c8(void *object, uint32_t x);
extern uint32_t func_02017ec8(void *object, uint32_t x);
extern uint32_t func_02005efc(void *object, uint32_t first, ...);
extern void *func_020059cc(void *object);
extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *dst, void *src);
typedef struct { uint32_t a, b; } S;
extern uint32_t func_02032d24(void *object, S h, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;

void func_ov011_021c43ac(uint8_t *p)
{
    uint32_t arr[3];
    uint32_t t14[3];
    S hdr;
    uint32_t off;
    uint8_t a;
    uint32_t c;
    uint8_t b;
    uint32_t d;
    uint32_t i;
    uint32_t *pp;
    uint8_t *o;
    uint32_t r6;
    uint32_t r7;
    uint8_t zero;
    uint32_t z;
    void *node;

    off = 0x42 << 2;
    a = func_02036360(p + off);
    c = func_020363a4(p + off);
    b = func_02036360(p + (off + 0x60));
    off += 0x60;
    d = func_020363a4(p + off);
    pp = arr;
    for (i = 0; i < 3; i++) {
        pp[i] = 0;
    }
    if (a != b) {
        uint32_t q = 0x42 << 2;
        o = (uint8_t *)func_020363bc(p + q);
        q += 0x60;
        r6 = *(uint16_t *)(o + 0x30);
        o = (uint8_t *)func_020363bc(p + q);
        r7 = func_020159c8(data_020b8e44, 0xf8);
        r6 = func_02017ec8(data_020b8e44, r6);
        func_02005efc(arr, r7, r6, func_02017ec8(data_020b8e44, *(uint16_t *)(o + 0x30)));
    } else if (c != d) {
        o = (uint8_t *)func_020363bc(p + 0x108);
        r6 = func_020159c8(data_020b8e44, 0xf9);
        func_02005efc(arr, r6, func_02017ec8(data_020b8e44, *(uint16_t *)(o + 0x30)));
    } else {
        func_020059cc(arr);
        return;
    }

    z = 0;
    zero = 0;
    node = func_0205681c(0xb0);
    if (node != 0) {
        func_020095b8(t14, arr);
        hdr.a = 0x80;
        hdr.b = 0x60;
        zero = 1;
        node = (void *)func_02032d24(node, hdr, t14, 4, z);
    }
    func_02056bc0(p + 0x14, node);
    if (zero) {
        func_020059cc(t14);
    }
    func_020059cc(arr);
}
