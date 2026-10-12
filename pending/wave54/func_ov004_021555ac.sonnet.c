#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Blk;

extern void func_02021b68(void *a, int b, int c);
extern void func_ov004_02155390(void *a);
extern void func_ov004_0214f774(void *a);
extern void func_ov004_0214e508(void *a);
extern void func_02056c4c(void *a);
extern void func_0206047c(void *a);
extern void func_02060bf4(void *a);
extern uint32_t func_0203b750(void);
extern void func_02056bc0(void *object, void *node);
extern int32_t func_ov004_021489d8(void *a);
extern void func_ov004_02148fb0(int32_t *out, int32_t v);
extern void func_ov004_02148fb8(int32_t *out, int32_t v);
extern void func_02021338(int32_t code);
extern Blk data_ov004_02159d08;
extern Blk data_ov004_02159d10;
extern Blk data_ov004_02159d18;
extern uint32_t data_0209e084;
extern Blk data_ov004_02159d20;
extern Blk data_ov004_02159d28;

void func_ov004_021555ac(void *self)
{
    uint8_t *p = (uint8_t *)self;
    int32_t ofs = 0x250;
    int32_t zero = 0;
    int32_t o[12];
    int32_t lim;
    uint32_t *w;

    func_02021b68(*(void **)(p + 0xf4), 1, zero);
    func_02021b68(*(void **)(p + 0xf4), 2, 1);
    func_ov004_02155390(p);
    func_ov004_0214f774(*(void **)(p + 0xe4));
    func_ov004_0214e508(*(void **)(p + 0xe4));
    func_02056c4c(*(void **)(p + ofs));
    w = *(uint32_t **)(p + ofs - 0x50);
    w[3] = (w[3] & ~0xffu) + 2;
    *(int32_t *)(p + 0x200) = zero;
    func_0206047c(*(void **)(*(uint8_t **)(p + 0xdc) + 0x20));
    func_02060bf4(*(void **)(*(uint8_t **)(p + 0xdc) + 0x1c));
    func_02056bc0(p + 0x14, (void *)func_0203b750());

    if (p[0xc9] != 0) {
        *(Blk *)(p + 0x94) = data_ov004_02159d08;
        return;
    }

    lim = *(int32_t *)(p + ofs - 0x28) << 12;
        func_ov004_02148fb0(&o[11], func_ov004_021489d8(*(void **)(p + 0xf8)));
    if (o[11] < lim) {
        func_02021338(0x9c);
        *(Blk *)(p + 0x94) = data_ov004_02159d10;
        return;
    }

    lim = (100 - *(int32_t *)(p + ofs - 0x28)) << 12;
        func_ov004_02148fb8(&o[9], func_ov004_021489d8(*(void **)(p + 0xf8)));
    if (o[9] > lim) {
        func_02021338(0x9c);
        *(Blk *)(p + 0x94) = data_ov004_02159d18;
        return;
    }

    lim = (int32_t)data_0209e084 << 12;
        func_ov004_02148fb0(&o[7], func_ov004_021489d8(*(void **)(p + 0xf8)));
    if (o[7] < lim) {
        func_02021338(0x9e);
        *(Blk *)(p + 0x94) = data_ov004_02159d20;
        return;
    }

    func_02021338(0x9f);
    *(Blk *)(p + 0x94) = data_ov004_02159d28;
}
