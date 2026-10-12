#include "ffc/types.h"

typedef void (*VFn)(void *);
typedef struct Obj { VFn *vt; uint32_t a4; uint32_t a8; uint32_t st; } Obj;
typedef struct Tbl { uint32_t w0; uint32_t w4; uint32_t w8; } Tbl;
typedef struct Pair { uint32_t a; uint32_t b; } Pair;
typedef struct Loc {
    void *p0;
    void *p4;
    uint32_t i8;
    uint8_t b12;
    uint8_t pad[0x2c - 0x0d];
    uint32_t w2c;
    uint8_t rest[0xa8 - 0x30];
} Loc;

extern void func_0201cf34(void *a, void *b);
extern void func_020162a0(void *a, void *b);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern Pair data_ov002_021d47f8;
extern Pair data_ov002_021d4800;
extern void *data_020b93b8;
extern void *data_020b8e44;

void func_ov002_021965f0(uint8_t *self) {
    Loc loc;
    Loc *L;
    Obj *obj = *(Obj **)(self + 0x88);
    if ((int8_t)obj->st == 0) {
        obj->vt[2](obj);
    }
    obj = *(Obj **)(self + 0x88);
    if ((int8_t)obj->st == 2) {
        *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2u;
        return;
    }
    Tbl *t = *(Tbl **)(self + 0x8c);
    uint32_t a = t->w4;
    uint32_t m = a & (a ^ t->w8);
    if (m & 0x100b) {
        self[0x94] = 1;
        *(Pair *)(self + 0x80) = data_ov002_021d47f8;
        return;
    }
    func_0201cf34(data_020b93b8, &loc.rest[0] - 0x20);
    func_020162a0(&loc, data_020b8e44);
    void *q = func_02052d90(loc.p4, loc.i8);
    uint32_t idx = (loc.w2c >> 8) & 0xffff;
    int r4 = 1;
    if (idx < (uint32_t)*(uint16_t *)((uint8_t *)q + 8) + 1)
        r4 = 0;
    L = &loc;
    if (L->p4 != 0) {
        if (L->b12 != 0) {
            func_02052d3c(L->p4, L->i8);
        }
        func_02052c04(L->p4);
    }
    func_02053290(L);
    if (r4) {
        *(Pair *)(self + 0x80) = data_ov002_021d4800;
    }
}
