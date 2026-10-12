/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
int func_0205b3e8(uint32_t v);
void func_02080a40(void *p);
void func_0202b834(void *self, int32_t a, int32_t b, uint8_t c, void *d);
void func_02024c78(int32_t a, void *b);
}

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    uint8_t pad04[0x08];
    uint32_t fc;        /* 0x0c */
    uint8_t pad10[0x04];
    int32_t f14;        /* 0x14 */
    uint8_t pad18[0x04];
    int32_t f1c;        /* 0x1c */
    uint8_t pad20[0x04];
    int32_t f24;        /* 0x24 */
    int32_t f28;        /* 0x28 */
    uint8_t pad2c[0x04];
    void *f30;          /* 0x30 */
    int32_t f34;        /* 0x34 */
    int32_t f38;        /* 0x38 */
    int32_t f3c;        /* 0x3c */
    uint8_t pad40[0x01];
    uint8_t f41;        /* 0x41 */
    uint8_t f42;        /* 0x42 */
    uint8_t f43;        /* 0x43 */
    uint8_t pad44[0x2d];
    uint8_t f71;        /* 0x71 */
    uint8_t pad72[0x02];
    int32_t f74;        /* 0x74 */
    uint8_t f78[0x40];  /* 0x78 */
    uint8_t fb8;        /* 0xb8 */
};

extern "C" void func_0202b42c(Obj *p) {
    if (p->f42) {
        if (!func_0205b3e8(*(uint32_t *)((uint8_t *)p->f30 + 0x8c))) {
            return;
        }
        p->f42 = 0;
    }
    if (p->f43 == 0) {
        return;
    }
    p->f14 += p->f74;
    if (p->f14 > 0x40000000) {
        p->f14 = 0x40000000;
    }
    if (p->f14 > p->f1c) {
        if (p->f1c > p->f24) {
            int32_t r2 = p->f1c;
            p->f14 = p->f24;
            if (p->f28 >= r2) {
                p->f28 = p->f28 - (r2 - p->f24);
            }
        } else {
            if (p->f1c != 0x40000000) {
                p->v4();
                p->fc = (p->fc & ~0xffu) | 1;
                return;
            }
            p->f14 = p->f1c;
        }
    }
    if (p->f41 && p->f38) {
        func_02080a40(p->f78);
        func_0202b834(p, p->f38, p->f3c, p->f71, p->f78);
        if (p->f34) {
            func_02024c78(p->f34, p->f78);
        }
    } else if (!p->fb8) {
        func_02080a40(p->f78);
        if (p->f34) {
            func_02024c78(p->f34, 0);
        }
    }
    p->v5();
}
