#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x28];
    uint32_t f28;
    uint32_t flags;
    uint32_t size;
    uint32_t f34;
    uint32_t f38;
    uint32_t f3c;
    uint32_t f40;
    uint32_t f44;
    int32_t f48;
    uint32_t pad4c;
    int32_t count;
    uint8_t ids[1];
} Obj;

typedef struct {
    uint32_t ptr;
    uint32_t z;
} Ent;

extern int32_t func_0207a23c(Obj *p, int32_t bit);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern int32_t func_020797e8(void);
extern void func_02089d40(uint32_t id, uint32_t a1, void *ptr, uint32_t one, uint32_t z0, uint32_t sz4,
                          uint32_t c7f, uint32_t z12, uint32_t s5x, uint32_t c40);
extern void func_02089c9c(int32_t a, uint32_t b, uint32_t c, void *cb, Obj *p);
extern void func_02077aa4(void *d, Obj *p);
extern uint32_t func_02088978(void);
extern void func_0207a328(Obj *p, uint32_t z);
extern void func_0208898c(uint32_t x);
extern void func_0207a31c(void);
extern Ent data_0213eb74[];
extern uint8_t data_0213eb28[];

uint32_t func_0207a0f0(Obj *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t s5, uint32_t s6,
                       uint32_t s7, uint32_t s8)
{
    uint32_t sz, t, r, s5x, v, m;
    int32_t i;
    int32_t bit;

    bit = ((int32_t)(p->flags << 31)) >> 31;
    if (bit) {
        func_0207a23c(p, bit);
    }

    v = func_0209a978(a3, (uint32_t)p->count * (s6 << 5));
    m = v * s6;
    sz = m << 5;
    p->size = sz;
    if (a1 == 1) {
        sz >>= 1;
    }
    t = func_0209a978(s5 * sz, s6);
    p->f48 = func_020797e8();
    if (p->f48 < 0) {
        return 0;
    }

    i = 0;
    if (p->count > 0) {
        s5x = s5 << 5;
        do {
            uint8_t id = p->ids[i];
            data_0213eb74[id].ptr = p->size * i + a2;
            data_0213eb74[id].z = 0;
            func_02089d40(id, a1, (void *)data_0213eb74[id].ptr, 1, 0, p->size >> 2, 0x7f, 0, s5x, 0x40);
            i++;
        } while (i < p->count);
    }

    func_02089c9c(p->f48, t, t, (void *)func_0207a31c, p);
    func_02077aa4(data_0213eb28, p);

    p->f28 = a1;
    p->f34 = s6;
    p->f38 = s7;
    p->f3c = s8;
    p->f40 = 0;
    p->f44 = 0;
    p->flags = (p->flags & ~1u) | 1;

    r = func_02088978();
    p->f34 = 1;
    func_0207a328(p, 0);
    p->f34 = s6;
    func_0208898c(r);
    return 1;
}
