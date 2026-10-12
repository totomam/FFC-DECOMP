#include "ffc/types.h"

typedef struct {
    uint32_t w;
    uint32_t h;
} Size;

extern void func_020559d4(void *p);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void *func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *obj, Size s, void *c, uint32_t d, uint32_t e);
extern void *func_020059cc(void *p);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c4140[2];
extern uint32_t data_ov007_021c4148[2];

void func_ov007_021a29b8(uint8_t *a)
{
    uint8_t flag;
    uint8_t *e;
    uint8_t *r6;
    int nz;
    int called;
    void *res;
    void *n;
    Size sz;
    uint8_t rec[12];

    func_020559d4(*(uint8_t **)(a + 0xc8) + 0xb8);
    func_020559d4(a + 0x80);
    e = *(uint8_t **)(a + 0xec);
    r6 = e + 0x1c;
    flag = e[0x12];
    if (flag) {
        func_0208763c(r6);
    }
    nz = (*(uint32_t *)(e + 0x14) == 0);
    if (flag) {
        func_02087678(r6);
    }
    if (nz) {
        if (*(uint32_t *)(a + 0xf0) == 0x20) {
            n = func_02056aec(a);
            func_02056bc0(a + 0x14, n);
            return;
        }
        if (*(uint32_t *)(*(uint8_t **)(a + 0xd0) + 0xb8) != 1) {
            called = 0;
            res = func_0205681c(0xb0);
            if (res != 0) {
                sz.w = 0x80;
                sz.h = 0x60;
                func_02005988(rec, func_020159c8(data_020b8e44, 0x26));
                res = func_02032d24(res, sz, rec, 4, 0);
                called = 1;
            }
            if (called) {
                func_020059cc(rec);
            }
            n = func_02056aec(a);
            func_02056bc0(a + 0x14, res);
            func_02056bc0(a + 0x14, n);
            return;
        }
        *(uint32_t *)(a + 0xb8) = data_ov007_021c4140[0];
        *(uint32_t *)(a + 0xbc) = data_ov007_021c4140[1];
        *(uint32_t *)(a + 0xc0) = data_ov007_021c4148[0];
        *(uint32_t *)(a + 0xc4) = data_ov007_021c4148[1];
    }
}
