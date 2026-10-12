#include "ffc/types.h"

extern void func_020078b0(void *p);
extern void func_0200606c(void *p);
extern void func_02006dbc(void *p);
extern void func_02006db0(void *p);

typedef struct Sub {
    uint32_t pad0;
    uint8_t pad1[0x14];
    uint8_t b[0x20];
} Sub;

typedef struct Blk {
    uint8_t pad[0x5c];
    Sub s;
} Blk;

void *func_02006cf8(void *a)
{
    uint8_t *base = (uint8_t *)a;
    uint32_t off;
    Sub *s;

    func_020078b0(base + 0x31d8);

    off = 0x2fc8;
    s = &((Blk *)(base + off))->s;
    func_0200606c(s->b);
    func_0200606c((uint8_t *)s + 4);
    func_02006dbc(base + off);

    off = 0x2dc0;
    s = &((Blk *)(base + off))->s;
    func_0200606c(s->b);
    func_0200606c((uint8_t *)s + 4);
    func_02006dbc(base + off);

    off = 0x2bb8;
    s = &((Blk *)(base + off))->s;
    func_0200606c(s->b);
    func_0200606c((uint8_t *)s + 4);
    func_02006dbc(base + off);

    off -= 0x14;
    func_02006db0(base + off);
    off = 0x2a28;
    func_02006db0(base + off);
    off -= 0x14;
    func_02006db0(base + off);

    return a;
}
