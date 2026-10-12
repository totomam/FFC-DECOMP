#include "ffc/types.h"

typedef struct Ent {
    uint32_t a;
    uint32_t b;
    uint8_t pad[4];
    uint16_t c;
} Ent;

typedef struct Ctx {
    uint8_t pad0[0x1c];
    uint32_t flags;
    uint8_t pad1[0x30 - 0x20];
    uint8_t ready;
    uint8_t pad2[0x678 - 0x31];
    uint32_t val678;
} Ctx;

extern Ent *func_ov000_02163634(int idx);
extern Ctx *func_ov000_02163350(void);
extern void func_ov000_0215e0d8(int v);
extern int func_ov000_021632f0(void);
extern int func_ov000_0215b4b0(void);
extern int func_ov000_0215c1d0(void);
extern Ent *func_ov000_02163690(int idx);
extern void func_ov000_0215eb30(int cmd, uint32_t a, uint32_t b, uint16_t c, uint32_t *arr, uint32_t n);
extern int func_ov000_0215fed0(void);
extern int func_ov000_02163408(void);

int func_ov000_02162e1c(int bit, int flag, int mode)
{
    int n;
    uint32_t arr[4];
    Ent *base;
    Ent *p;
    Ent *e;
    Ctx *c;
    uint32_t flags;
    int ret;
    int cond;

    n = 0;
    base = func_ov000_02163634(0);
    flags = func_ov000_02163350()->flags;
    if (flag) {
        c = func_ov000_02163350();
        c->flags |= (1u << bit);
    } else {
        c = func_ov000_02163350();
        c->flags &= ~(1u << bit);
    }
    if (func_ov000_02163350()->flags != flags) {
        func_ov000_0215e0d8(-1);
    }
    flags = func_ov000_02163350()->flags;
    if (func_ov000_021632f0() == 0) {
        flags &= ~(1u << func_ov000_0215b4b0());
    }
    ret = func_ov000_0215c1d0();
    cond = 1;
    if (flag) {
        if (ret) {
            goto keep;
        }
        cond = 0;
    } else {
        if (!ret) {
            goto keep;
        }
        cond = 0;
    }
keep:
    ;


    if (mode == 1) {
        e = func_ov000_02163690(bit);
        n += 2;
        arr[0] = func_ov000_02163350()->val678;
        arr[1] = 1;
        if (cond && func_ov000_02163350()->ready) {
            arr[2] = flag;
            arr[3] = flags;
            n += 2;
        }
        func_ov000_0215eb30(0x82, e->a, e->b, e->c, arr, n);
        if (func_ov000_0215fed0()) {
            return 0;
        }
    }

    if (cond) {
        if (func_ov000_02163350()->ready != 1) {
            func_ov000_02163350()->ready = 1;
            arr[0] = func_ov000_02163350()->val678;
            arr[1] = 1;
            arr[2] = flag;
            arr[3] = flags;
            n = 0;
            while (n < func_ov000_02163408()) {
                p = func_ov000_02163634(n);
                if (p != base) {
                    func_ov000_0215eb30(0x82, p->a, p->b, p->c, arr, 4);
                    if (func_ov000_0215fed0()) {
                        return 0;
                    }
                }
                n++;
            }
        }
    }
    return 1;
}
