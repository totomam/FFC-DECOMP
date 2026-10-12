#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021bc148(void *a, void *b, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void *func_02032d24(void *a, Pair s, void *d, uint32_t e, uint32_t f);
extern void *func_ov001_0218dde0(void *a, uint32_t b);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern Pair data_ov007_021c6350;

struct Obj {
    uint8_t pad0[0x14];
    uint32_t f14;
    uint8_t pad1[0xb0 - 0x18];
    Pair vb0;
    uint8_t pad2[0xcc - 0xb8];
    uint8_t fcc;
    uint8_t pad3[0xd0 - 0xcd];
    uint32_t fd0;
    uint8_t pad4[0xf8 - 0xd4];
    void *ff8;
};

void func_ov007_021b37b4(struct Obj *self)
{
    if (self->fcc == 0) {
        if (self->ff8 != 0) {
            void *n = func_0205681c(0xbc);
            void *r = n;
            if (n != 0) {
                r = func_ov007_021bc148(n, self, &self->fd0, 0, 0);
            }
            func_02056bc0(&self->f14, r);
        } else {
            uint32_t r4 = 0;
            void *o = func_0205681c(0xb0);
            uint32_t sp10[3];
            if (o != 0) {
                void *s = func_020159c8(data_020b8e44, 0xb0 + 0x9f);
                func_02005988(sp10, s);
                Pair sz;
                sz.a = 0x80;
                sz.b = 0x60;
                r4 = 1;
                o = func_02032d24(o, sz, sp10, 4, 0);
            }
            func_02056bc0(func_ov001_0218dde0(self, 2), o);
            if (r4) {
                func_020059cc(sp10);
            }
        }
    }
    self->vb0 = data_ov007_021c6350;
}
