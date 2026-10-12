/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_ov004_02148668(void *arr, void *val, uint32_t flag);
}

struct Num {
    uint32_t v;
    Num(uint32_t x) : v(x) {}
    ~Num() {}
};

inline uint32_t diff(uint32_t a, uint32_t b) { return a - b; }

typedef struct Elem {
    uint8_t pad0[8];
    uint32_t v0;
    uint32_t v1;
    uint8_t pad1[8];
    void *obj;
    uint32_t count;
    uint8_t pad2[0x11];
    uint8_t f35;
    uint8_t f36;
} Elem;

extern "C" void func_ov004_021501c0(uint8_t *self, uint32_t idx)
{
    uint32_t i;
    uint8_t z;
    Elem *e;
    void **vt;
    void *obj;

    *(uint8_t *)(self + 0x130) = 1;

    e = (Elem *)(*(uint8_t **)(self + 0x10c) + idx * 0x38);

    {
        uint32_t a = *(uint32_t *)(self + 0x11c);
        uint32_t b = *(uint32_t *)(self + 0x11c);
        *(uint32_t *)(self + 0x11c) = diff(b, a);
    }
    {
        uint32_t a = *(uint32_t *)(self + 0x128);
        uint32_t b = *(uint32_t *)(self + 0x128);
        *(uint32_t *)(self + 0x1fc) = diff(a, b);
    }

    if (e->count > 0) {
        for (i = 0; i < e->count; i++) {
            if (*(uint32_t *)(self + 0x11c) < *(uint32_t *)(self + 0x120)) {
                uint8_t *p = (uint8_t *)*(void **)(self + 0x118) + *(uint32_t *)(self + 0x11c) * 8;
                if (p != 0) {
                    *(uint32_t *)p = e->v0;
                    *(uint32_t *)(p + 4) = e->v1;
                }
                *(uint32_t *)(self + 0x11c) = *(uint32_t *)(self + 0x11c) + 1;
            } else {
                z = 0;
                func_ov004_02148668(self + 0x118, (uint8_t *)e + 8, z);
            }

            if (*(uint32_t *)(self + 0x128) < *(uint32_t *)(self + 0x12c)) {
                uint8_t *p = (uint8_t *)*(void **)(self + 0x124) + *(uint32_t *)(self + 0x128) * 8;
                if (p != 0) {
                    *(uint32_t *)p = e->v0;
                    *(uint32_t *)(p + 4) = e->v1;
                }
                *(uint32_t *)(self + 0x128) = *(uint32_t *)(self + 0x128) + 1;
            } else {
                z = 0;
                func_ov004_02148668(self + 0x124, (uint8_t *)e + 8, z);
            }
        }
    }

    e->f35 = 0;
    e->f36 = 1;

    obj = e->obj;
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);

    obj = e->obj;
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 1, 1);
}
