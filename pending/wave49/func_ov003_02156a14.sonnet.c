#include "ffc/types.h"

typedef struct FfcBuf {
    uint32_t f0:1;
    void *ptr;
    uint32_t n;
    uint8_t b;
} FfcBuf;

extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern uint8_t data_ov003_0217a10c[];
extern uint32_t data_ov003_02179f84[];
extern uint8_t data_ov003_0217a120[];
extern uint8_t data_ov003_0217a0f4[];

extern void func_0201d014(uint32_t a, uint32_t b, void *c);
extern uint32_t func_02036bec(void *p);
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void func_02018ec8(void *out, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_02005efc(void *object, uint32_t first, ...);
extern uint32_t func_0201a3a0(void *object, const void *third);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t func_02092b00(void *a, const void *b);
extern void func_02005988(void *a, uint32_t b);
extern uint32_t func_02052000(void *a);
extern void *func_020059cc(void *object);

uint32_t func_ov003_02156a14(uint8_t *self, FfcBuf *obj, uint32_t a2, uint8_t a3, uint8_t a4)
{
    uint32_t s30[4];
    FfcBuf s20;
    FfcBuf s10;
    uint32_t s4[3];
    uint32_t r4;
    FfcBuf *pp;
    uint32_t sel;
    uint32_t off;
    uint32_t idx;
    uint32_t ret;
    uint8_t *m;
    uint8_t *e;
    uint8_t *q;
    uint32_t *base;

    func_0201d014(data_020b93b8, *(uint16_t *)(self + 0xac), s30);
    r4 = *(uint32_t *)(*(uint8_t **)(self + 0xa8) + 0x5c);
    if (func_02036bec(s30) >= r4) {
        return 0;
    }
    if (a3 != 0) {
        if (*(uint16_t *)(self + 0xac) == 1 && func_0201c9ac(data_020b93b8, 5) != 0) {
            func_02018ec8(&s20, data_020b8e44);
            r4 = func_0201c9ac(data_020b93b8, 5);
            m = func_02052d90(s20.ptr, s20.n);
            base = (uint32_t *)(m + *(uint32_t *)(m + 8));
            e = m + base[r4];
            func_02005efc(obj, (uint32_t)data_ov003_0217a10c, e + *(uint32_t *)(e + 0xc));
            sel = 1;
            if (a4 != 0) {
                sel = 0;
            }
            func_0201a3a0(obj, data_ov003_02179f84[sel]);
            r4 = !obj->f0 ? (uint32_t)obj + 1 : obj->n;
            pp = &s20;
            if (pp->ptr != 0) {
                if (pp->b) {
                    func_02052d3c(pp->ptr, pp->n);
                }
                func_02052c04(pp->ptr);
            }
            func_02053290(pp);
            goto tail;
        }
        idx = func_02036bec(s30);
        q = *(uint8_t **)(self + 0xa8);
        base = (uint32_t *)(q + *(uint32_t *)(q + 0x60));
        off = base[idx];
        if (func_02092b00(q + off, data_ov003_0217a120) == 0) {
            func_02005efc(obj, (uint32_t)data_ov003_0217a0f4, q + off, a2);
        } else {
            func_02005efc(obj, (uint32_t)data_ov003_0217a10c, q + off);
        }
        sel = 1;
            if (a4 != 0) {
                sel = 0;
            }
        func_0201a3a0(obj, data_ov003_02179f84[sel]);
        r4 = !obj->f0 ? (uint32_t)obj + 1 : obj->n;
        if (a2 != 0) {
            return 0;
        }
        goto tail;
    }
    if (*(uint16_t *)(self + 0xac) == 1 && func_0201c9ac(data_020b93b8, 5) != 0) {
        func_02018ec8(&s10, data_020b8e44);
        r4 = func_0201c9ac(data_020b93b8, 5);
        m = func_02052d90(s10.ptr, s10.n);
        base = (uint32_t *)(m + *(uint32_t *)(m + 8));
        e = m + base[r4];
        func_02005efc(obj, (uint32_t)data_ov003_0217a10c, e + *(uint32_t *)(e + 0xc));
        r4 = !obj->f0 ? (uint32_t)obj + 1 : obj->n;
        pp = &s10;
        if (pp->ptr != 0) {
            if (pp->b) {
                func_02052d3c(pp->ptr, pp->n);
            }
            func_02052c04(pp->ptr);
        }
        func_02053290(pp);
        goto tail;
    }
    idx = func_02036bec(s30);
    q = *(uint8_t **)(self + 0xa8);
    base = (uint32_t *)(q + *(uint32_t *)(q + 0x60));
    off = base[idx];
    func_02005efc(obj, (uint32_t)data_ov003_0217a0f4, q + off, a2);
    r4 = !obj->f0 ? (uint32_t)obj + 1 : obj->n;

tail:
    func_02005988(s4, r4);
    ret = func_02052000(s4) == 0;
    func_020059cc(s4);
    if (ret != 0) {
        r4 = 0;
    }
    return r4;
}
