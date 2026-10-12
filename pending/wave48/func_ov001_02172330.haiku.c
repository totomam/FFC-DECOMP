#include "ffc/types.h"

struct G {
    uint32_t a;
    uint32_t counter;
    uint32_t serial;
    void **arr;
};

extern struct G data_ov001_02194be8;
extern void func_ov001_02171ee0(void);
extern int32_t func_ov001_021722a0(void);
extern void func_ov001_02171ee4(void);
extern void *func_020903cc(void *object, int c, uint32_t n);
extern int32_t func_ov001_02171a10(void *p, void *q, uint32_t a, uint32_t b);
extern void func_ov001_02172610(void *p);

#define F32(o, off) (*(uint32_t *)((uint8_t *)(o) + (off)))

void *func_ov001_02172330(void)
{
    uint8_t *o;
    uint32_t id;
    uint32_t sz = 0x1d4;
    int32_t r;
    uint32_t s;

    func_ov001_02171ee0();
    id = func_ov001_021722a0();
    if (id == -1) {
        func_ov001_02171ee4();
        return 0;
    }
    o = (uint8_t *)((void **)data_ov001_02194be8.arr)[id];
    func_020903cc(o, 0, sz);
    F32(o, 0) = 1;
    F32(o, 4) = id;
    s = data_ov001_02194be8.serial;
    data_ov001_02194be8.serial = s + 1;
    F32(o, 8) = s;
    F32(o, 0xc) = 0;
    F32(o, 0x10) = 0;
    F32(o, 0x14) = 0;
    F32(o, 0x18) = 0;
    F32(o, 0x1c) = 0;
    *(uint16_t *)(o + 0x20) = 0;
    F32(o, 0x24) = 0;
    F32(o, 0x2c) = 0;
    F32(o, 0x30) = 0;
    F32(o, 0x38) = 0;
    F32(o, 0x3c) = 0;
    F32(o, 0x40) = 0;
    F32(o, 0x44) = 0;
    F32(o, 0x48) = 0;
    F32(o, 0x4c) = 0;
    F32(o, 0x50) = -1;
    F32(o, 0x54) = 0;
    F32(o, sz - 0xc8) = 0;
    F32(o, sz - 0xc4) = 0;
    F32(o, sz - 0xc0) = 0;
    F32(o, sz - 0xbc) = 0;
    F32(o, sz - 0xb8) = 0;
    F32(o, sz - 0xb4) = 0;
    F32(o, sz - 0xb0) = 0;
    F32(o, sz - 0xac) = 0;
    F32(o, sz - 0xa8) = -1;
    F32(o, sz - 0xa4) = 0;
    F32(o, sz - 0xa0) = 0;
    F32(o, sz - 0x9c) = 0;
    F32(o, sz - 0x80) = 0;
    F32(o, sz - 0x78) = 0;
    F32(o, sz - 0x74) = 0;
    F32(o, sz - 0x70) = 0;
    F32(o, sz - 0x4c) = sz + 0x20;
    *(uint16_t *)(o + sz - 0x44) = 0x50;
    F32(o, sz - 0x48) = 0;
    F32(o, sz - 0x40) = 0;
    F32(o, sz - 0x38) = 0;
    F32(o, sz - 4) = 0;
    F32(o, sz - 8) = 0;

    r = func_ov001_02171a10(o, o + 0x58, 0x800, 0x1000);
    if (r) r = func_ov001_02171a10(o, o + 0x7c, 0x800, 0x400);
    if (r) r = func_ov001_02171a10(o, o + 0xa0, 0x800, 0x800);
    if (r) r = func_ov001_02171a10(o, o + 0xc4, 0x800, 0x400);
    if (!r) {
        func_ov001_02172610(o);
        func_ov001_02171ee4();
        return 0;
    }
    data_ov001_02194be8.counter++;
    func_ov001_02171ee4();
    return o;
}
