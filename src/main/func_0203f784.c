#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *obj, void *src);
extern void *func_02056dd4(void *obj);
extern uint32_t func_0203be48(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern void func_02056858(void *p);

uint32_t func_0203f784(uint8_t *a, uint32_t b) {
    uint8_t *base;
    uint8_t *e;
    uint8_t *text;
    uint8_t *buf;
    uint8_t local[12];
    uint32_t r;
    uint32_t off;
    uint32_t sz;

    base = (uint8_t *)func_02052d90(*(void **)(a + 0x190), *(uint32_t *)(a + 0x194));
    off = *(uint32_t *)(base + 8);
    e = base + *(uint32_t *)(base + off + (b << 2));
    sz = *(uint32_t *)(e + 4);
    text = e + sz;
    buf = (uint8_t *)func_02056830(func_02092864(text) + 1);
    func_02086ad4(buf, (uint32_t)text);
    func_02005988(local, buf);
    r = func_0203be48(func_02056dd4(a), local, 0, 0);
    func_020059cc(local);
    func_02056858(buf);
    return r;
}
