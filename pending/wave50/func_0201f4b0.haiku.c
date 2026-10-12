#include "ffc/types.h"

extern void *func_020363b4(void *p);
extern void func_02035f58(void *p);
extern void *func_02035fd0(void *object);
extern void func_02036438(void *object, uint32_t value);
extern void func_0201c1c0(void *obj, void *arg);

void func_0201f4b0(uint8_t *self, uint32_t idx, uint32_t flag)
{
    uint32_t w[24];
    uint8_t *base;
    uint8_t *table;
    uint16_t *src;
    uint16_t *dst;
    uint32_t i;
    uint32_t off;
    void *ret;

    off = idx * 0x60;
    ret = func_020363b4(*(uint8_t **)(self + 0x58) + off);
    func_02035f58(w);

    table = *(uint8_t **)(self + 0x58);
    base = table + off;
    *(uint32_t *)(base + 0x00) = w[0];
    *(uint32_t *)(base + 0x08) = w[2];
    *(uint32_t *)(base + 0x10) = w[4];
    *(uint32_t *)(base + 0x18) = w[6];
    *(uint32_t *)(base + 0x20) = w[8];
    *(uint32_t *)(base + 0x28) = w[10];
    *(uint32_t *)(base + 0x2c) = w[11];

    src = (uint16_t *)&w[12];
    dst = (uint16_t *)(base + 0x30);
    for (i = 0x11; i != 0; i--) {
        *dst++ = *src++;
    }

    *(uint32_t *)(base + 0x54) = w[21];
    *(uint32_t *)(base + 0x58) = w[22];
    *(uint32_t *)(base + 0x5c) = w[23];

    func_02035fd0(w);
    func_02036438(*(uint8_t **)(self + 0x58) + off, idx);

    if (flag != 0) {
        func_0201c1c0(self, ret);
    }
}
