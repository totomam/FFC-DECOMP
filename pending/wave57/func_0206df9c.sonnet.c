#include "ffc/types.h"

extern void *func_020548b4(void *object, uint32_t first, uint32_t second);
extern void func_02087620(void *object);
extern uint32_t func_0206cbc8(void *obj);
extern uint32_t func_02056830(uint32_t v);
extern void func_02084b2c(uint32_t a, uint32_t b, uint32_t c);
extern void *func_0205681c(uint32_t size);
extern void func_0206f398(void *obj, void *entry, uint32_t v);
extern void func_02054714(void *obj);
extern uint8_t data_020b0688[];
extern uint8_t data_020b1f20[];
extern uint8_t data_020b1f34[];
extern uint8_t data_020b1f4c[];
extern uint8_t *data_0213e178;

void *func_0206df9c(uint8_t *p, uint32_t a)
{
    struct {
        uint8_t b;
        void *ptr;
        uint16_t h;
        uint32_t w;
    } s;
    uint32_t i;
    uint32_t *q;
    uint8_t *v;
    uint8_t *vec;

    func_020548b4(p, a, 0);
    q = (uint32_t *)(p + 0x20);
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;
    v = data_020b0688;
    *(uint8_t **)(p + 0x20) = v;
    func_02087620((uint8_t *)q + 0x10);
    q = (uint32_t *)p;
    q[0x4c / 4] = 0;
    q[0] = (uint32_t)data_020b1f20;
    q[0x58 / 4] = 0;
    q[0x14 / 4] = (uint32_t)data_020b1f34;
    q[0x5c / 4] = 0;
    q[0x20 / 4] = (uint32_t)data_020b1f4c;
    q = (uint32_t *)(p + 0x4c);
    q[1] = 0;
    q[2] = 0;
    q = (uint32_t *)(p + 0x5c);
    q[1] = 0;
    q[2] = 0;
    p[0x280] = 0;
    p[0x280 + 1] = 0;
    func_02087620(p + 0x280 + 4);
    *(uint32_t *)(p + 0x280 - 0x14) = *(uint32_t *)(data_0213e178 + 0x30a8);
    *(uint16_t *)(p + 0x280 - 0x10) = *(uint16_t *)(data_0213e178 + 0xf90);
    *(uint32_t *)(p + 0x280 - 0xc) = 0;
    *(uint32_t *)(p + 0x280 - 8) = *(uint32_t *)(data_0213e178 + 0x30ac);
    *(uint32_t *)(p + 0x280 - 4) = *(uint32_t *)(data_0213e178 + 0x44);
    *(uint32_t *)(p + 0x280 - 0x18) = func_02056830(func_0206cbc8(data_0213e178));
    func_02084b2c(*(uint32_t *)(p + 0x280 - 0x18), 0, func_0206cbc8(data_0213e178));

    vec = p + 0x5c;
    for (i = 0; i < *(uint32_t *)(p + 0x280 - 8); i++) {
        s.ptr = func_0205681c(12);
        if (s.ptr != 0) {
            ((uint32_t *)s.ptr)[0] = 0;
            ((uint32_t *)s.ptr)[1] = 0;
            ((uint32_t *)s.ptr)[2] = 0;
        }
        s.h = 0;
        s.w = 0;
        if (*(uint32_t *)(p + 0x60) < *(uint32_t *)(p + 0x64)) {
            uint32_t idx = *(uint32_t *)(p + 0x60);
            uint8_t *slot;
            *(uint32_t *)(p + 0x60) = idx + 1;
            slot = *(uint8_t **)vec + idx * 12;
            *(void **)slot = s.ptr;
            *(uint16_t *)(slot + 4) = s.h;
            *(uint32_t *)(slot + 8) = s.w;
        } else {
            s.b = 0;
            func_0206f398(vec, &s.ptr, s.b);
        }
    }
    func_02054714(p + 0x14);
    return p;
}
