#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void func_0201ed30(void *a, uint32_t b, uint32_t c, void *d);
extern uint32_t func_02036cd8(const void *object);
extern void *func_020197b4(void *p, uint32_t x);
extern uint32_t func_0201e9bc(void *p);
extern void func_0201c220(void *p, uint32_t x);
extern uint32_t func_0201e9d0(void *p);
extern void func_0201e92c(void *a, uint32_t b, void *c);
extern void *func_02084b2c(void *d, int c, uint32_t n);
extern void func_0201ecfc(void *a, uint32_t b, uint32_t c, void *d);
extern void func_0201edd4(void *a, uint32_t b);
extern void func_ov008_0219b03c(uint8_t *s);
extern void func_ov008_0219b804(uint8_t *s);
extern void func_ov008_0219b860(uint8_t *s);
extern void func_ov005_02196f14(void *p);
extern void func_ov008_0219b6f4(uint8_t *s);
extern void func_0201b81c(void *p);
extern void func_02056c4c(void *p);
extern void func_ov008_0219b5f4(uint8_t *s);
extern void *data_020b93b8;
extern void *data_020b8e44;

void func_ov008_0219b248(uint8_t *r5)
{
    uint8_t buf[0x18];
    uint8_t i;
    uint32_t r7;
    uint32_t oa;
    uint32_t oc;

    if (*(uint32_t *)(r5 + 0x114) != 1) {
        return;
    }
    func_02021338(0x116);
    oa = 0x108;
    oc = 0x118;

    for (i = 0; i < 8; i++) {
        if (r5[0xfc + i] != 0) {
            r5[0xfc + i] = 0;
            func_0201ed30(data_020b93b8, *(uint32_t *)(r5 + oc), i, buf);
            r7 = *(uint32_t *)((uint8_t *)func_020197b4(data_020b8e44,
                    func_02036cd8(buf)) + 0x1c);
            if (func_0201e9bc(data_020b93b8) == 0) {
                if (r7 <= *(uint32_t *)(r5 + oa)) {
                    *(uint32_t *)(r5 + oa) -= r7;
                    func_0201c220(data_020b93b8, 3);
                    func_0201e92c(data_020b93b8, func_0201e9d0(data_020b93b8), buf);
                    func_02084b2c(buf, 0, 0x18);
                    func_0201ecfc(data_020b93b8, *(uint32_t *)(r5 + oc), i, buf);
                }
            }
        }
    }

    r5[0x110] = 0;
    func_0201edd4(data_020b93b8, *(uint32_t *)(r5 + 0x118));
    func_ov008_0219b03c(r5);
    func_ov008_0219b804(r5);
    func_ov008_0219b860(r5);
    *(uint32_t *)(r5 + 0x10c) = 0;
    func_ov005_02196f14(*(void **)(r5 + 0xf8));
    func_ov008_0219b6f4(r5);
    func_0201b81c(data_020b93b8);
    {
        uint8_t *o = *(uint8_t **)(r5 + 0xc4);
        uint8_t *obj;
        uint8_t *vt;
        func_02056c4c(o + 0x14);
        obj = *(uint8_t **)(o + 0x98);
        vt = *(uint8_t **)obj;
        ((void (*)(void *, int, int))*(void **)(vt + 0x38))(obj, 1, 0);
    }
    func_ov008_0219b5f4(r5);
}
