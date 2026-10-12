#include "ffc/types.h"

typedef struct E { int32_t a, b, c; } E;
typedef struct Inner { uint8_t pad0[0x14]; int32_t n; E *list; } Inner;
typedef struct G { uint8_t pad[0xc]; uint8_t *p; } G;
typedef struct Req { int32_t kind; int32_t count; uint8_t *items; } Req;

extern int32_t func_ov000_0215981c(void *p);
extern void func_ov000_021591a8(int32_t a, int32_t b, int32_t c);
extern void func_ov000_02159d14(void);
extern int32_t func_ov000_02154ed0(void *e);
extern int32_t func_ov000_0215a638(void);
extern int32_t func_ov000_021553c4(int32_t v, void *e);
extern int32_t func_ov000_02154ea0(void *e);
extern void func_ov000_02154f24(void *e, int32_t v);
extern int32_t func_ov000_02154e58(void *e);
extern void func_ov000_02154f48(void *e, int32_t v);
extern G data_ov000_0217004c;

#define VG (*(G *volatile)&data_ov000_0217004c)
#define M ((Inner *)VG.p)

void func_ov000_0215a3f4(void *p, Req *r)
{
    int32_t j;
    volatile int32_t i;
    int32_t off;
    int32_t t;

    if (func_ov000_0215981c(p) == 0) {
        return;
    }
    if (*(int32_t *)(VG.p + 0x5c) != 0) {
        func_ov000_021591a8(4, *(int32_t *)(VG.p + 0x5c), 0);
        *(int32_t *)(VG.p + 0x5c) = 0;
    }
    if (r->kind != 0) {
        func_ov000_02159d14();
        return;
    }
    for (i = 0; i < M->n; i++) {
        off = i * 12;
        if (func_ov000_02154ed0((uint8_t *)M->list + off) == 3) {
            for (j = 0; j < r->count; j++) {
                G *g = &data_ov000_0217004c;
                func_ov000_0215a638();
                if (*(int32_t *)(r->items + j * 0x1c) == func_ov000_021553c4(0, (uint8_t *)((Inner *)g->p)->list + off)) {
                    if (func_ov000_02154ea0((uint8_t *)((Inner *)g->p)->list + off) == 0) {
                        g->p[0x1d] = 1;
                        t = i * 12;
                        func_ov000_02154f24((uint8_t *)((Inner *)g->p)->list + t, 1);
                        if (func_ov000_02154e58((uint8_t *)((Inner *)g->p)->list + t)) {
                            func_ov000_02154f48((uint8_t *)((Inner *)g->p)->list + off, 1);
                        }
                    }
                    break;
                }
            }
            if (j == r->count) {
                if (func_ov000_02154ea0((uint8_t *)M->list + off) == 1) {
                    VG.p[0x1d] = 1;
                    func_ov000_02154f24((uint8_t *)M->list + off, 0);
                }
            }
            if (func_ov000_02154e58((uint8_t *)M->list + off)) {
                func_ov000_02154f48((uint8_t *)M->list + off, 1);
            }
        }
    }
    func_ov000_02159d14();
}
