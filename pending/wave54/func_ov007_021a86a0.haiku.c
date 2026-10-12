#include "ffc/types.h"

extern uint32_t func_0206cb98(void *a);
extern void *func_0206cd68(void *a);
extern void func_02056bc0(void *object, void *node);
extern void func_ov007_021a7b9c(void *a);
extern void *func_0205681c(uint32_t size);
extern void *func_0206df9c(void *a, uint32_t b);
extern void func_0206e27c(void *a, uint32_t b);
extern void func_02055ae8(void *a, void *b);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_0201f0f8(void *a, uint32_t b, void *c);
extern uint32_t func_02036cd8(const void *a);
extern void func_0201d1a4(void *a, uint32_t b, void *c);
extern uint32_t func_02036f1c(const void *a);
extern void func_02036e54(void *a, uint32_t b);
extern void func_0206e288(void *a, void *b);
extern uint32_t func_0206cb74(void *a);
extern void func_0206e2a4(void *a, void *b);

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t w[6]; } Blob6;
typedef struct { void *vt; uint32_t f4; uint32_t f8; uint32_t fc; uint32_t arr[6]; } Obj28;
typedef struct { void *vt; uint32_t f4; uint32_t f8; uint32_t fc; uint32_t f10; } Obj14;

extern Pair data_ov007_021c470c;
extern Pair data_ov007_021c4714;
extern Pair data_ov007_021c471c;
extern Pair data_ov007_021c4724;
extern void *data_020b93b8;
extern char data_020ac7d8[];
extern char data_020ac7f8[];

void func_ov007_021a86a0(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t loc[13];
    void *obj;
    void *q;
    Obj28 *o28;
    Obj14 *o14;

    if (func_0206cb98(*(void **)(p + 0xc8)) != 0) {
        func_02056bc0(p + 0x14, func_0206cd68(*(void **)(p + 0xc8)));
        func_ov007_021a7b9c(self);
        *(Pair *)(p + 0xc0) = data_ov007_021c470c;
        *(Pair *)(p + 0xb8) = data_ov007_021c4714;
        return;
    }

    obj = func_0205681c(0x29c);
    if (obj != 0) {
        obj = func_0206df9c(obj, 0);
    }
    *(void **)(p + 0xcc) = obj;
    func_0206e27c(obj, 1);
    q = self;
    if (self != 0) {
        q = p + 0x80;
    }
    func_02055ae8(*(void **)(p + 0xcc) + 0x20, q);
    func_02056bc0(p + 0x48, *(void **)(p + 0xcc));

    p[0x168] = 0;
    func_02084b2c(p + 0x150, 0, 0x18);

    func_0201f0f8(data_020b93b8, 0, &loc[7]);
    func_0201d1a4(data_020b93b8, func_02036cd8(&loc[7]), loc);
    func_02036e54(&loc[7], func_02036f1c(loc));

    o28 = (Obj28 *)func_0205681c(0x28);
    if (o28 != 0) {
        *(Blob6 *)&loc[1] = *(Blob6 *)&loc[7];
        o28->f8 = 0;
        o28->fc = 0x100a8;
        o28->vt = data_020ac7d8;
        o28->arr[0] = loc[1];
        o28->arr[1] = loc[2];
        o28->arr[2] = loc[3];
        o28->arr[3] = loc[4];
        o28->arr[4] = loc[5];
        o28->arr[5] = loc[6];
    }
    func_0206e288(*(void **)(p + 0xcc), o28);

    o14 = (Obj14 *)func_0205681c(0x14);
    if (o14 != 0) {
        uint32_t v = func_0206cb74(*(void **)(p + 0xc8));
        o14->f8 = 0;
        o14->fc = 0x100aa;
        o14->vt = data_020ac7f8;
        o14->f10 = v;
    }
    func_0206e2a4(*(void **)(p + 0xcc), o14);

    p[0x13d] = 0;
    p[0x13c] = p[0x13d];

    *(Pair *)(p + 0xb8) = data_ov007_021c471c;
    *(Pair *)(p + 0xc0) = data_ov007_021c4724;
}
