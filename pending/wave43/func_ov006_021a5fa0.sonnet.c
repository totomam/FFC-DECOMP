#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void func_020849ac(int value, void *dst, uint32_t n);
extern void func_02084ca4(void *src, void *dst);
extern void func_02088b3c(void *p);
extern int func_ov006_0219f210(void *a, void *b);
extern void func_02088f30(void);
extern void func_ov006_021a60b8(void);
extern void func_ov006_021a60c4(void);
extern uint8_t data_ov006_021b84b8[];

struct Data {
    uint8_t flag;
    uint8_t pad[3];
    uint8_t *ptr;
};
extern struct Data data_ov006_021bc704;

struct Hdr {
    uint8_t a;
    uint8_t b;
    uint16_t c;
};

void func_ov006_021a5fa0(void)
{
    uint8_t buf[0x104];
    uint16_t *src;
    uint16_t *dst;
    uint8_t *p;
    uint32_t n;

    data_ov006_021bc704.ptr = func_ov006_021b49e4(0x26c, 4);
    data_ov006_021bc704.flag = 0;
    func_020849ac(0, buf, 0x104);
    ((struct Hdr *)buf)->a = 0x50;
    ((struct Hdr *)buf)->c = 0xc;
    func_02084ca4(data_ov006_021b84b8, buf + 4);

    *(uint16_t *)data_ov006_021bc704.ptr = 3;
    p = data_ov006_021bc704.ptr;
    src = (uint16_t *)buf;
    dst = (uint16_t *)(p + 2);
    for (n = 0x82; n != 0; n--) {
        *dst++ = *src++;
    }

    *(uint16_t *)(p + 0x106) = 1;
    *(uint16_t *)(data_ov006_021bc704.ptr + 0x108) = -1;
    *(uint16_t *)(data_ov006_021bc704.ptr + 0x10a) = 1;
    *(uint16_t *)(data_ov006_021bc704.ptr + 0x10c) = -1;
    *(uint16_t *)(data_ov006_021bc704.ptr + 0x10e) = -1;
    func_02088b3c(data_ov006_021bc704.ptr + 0x110);

    if (func_ov006_0219f210(func_ov006_021a60b8, func_ov006_021a60c4)) {
        func_02088f30();
    }
}
