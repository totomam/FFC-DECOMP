#include "ffc/types.h"

extern uint32_t data_ov005_021993f4[];
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov005_02198678(void *self);
extern uint32_t func_ov005_02196728(void *obj, uint32_t a, uint32_t x, uint32_t y, uint32_t p, uint32_t q, uint32_t r);
extern void func_ov005_02196bec(uint32_t obj, uint32_t v);
extern void func_02069404(uint32_t obj, uint32_t v);
extern void func_ov005_02197868(uint32_t *out);
extern void func_ov005_02196c3c(uint32_t obj);
extern void func_0200d5d4(void *obj, uint32_t *p, uint32_t v);
extern void func_020695ec(void *self, uint32_t v);
extern void func_ov005_021989e8(void *self);

#define W(off) (*(uint32_t *)(self + (off)))

void func_ov005_02198828(void *a0)
{
    uint8_t *self = (uint8_t *)a0;
    uint16_t i;
    uint32_t idx, x, y, vx, vy, res, t, t3, n, p, val, r4;
    void **vt;
    void *obj;

    for (i = 0; i < 8; i++) {
        idx = (uint16_t)(i + W(0xfc) * 8);
        x = i & 3;
        y = i >> 2;
        vx = data_ov005_021993f4[12] + x * data_ov005_021993f4[8] + y * data_ov005_021993f4[26];
        vy = data_ov005_021993f4[13] + x * data_ov005_021993f4[9] + y * data_ov005_021993f4[27];
        if (W(0x140) > idx) {
            vt = *(void ***)self;
            ((void (*)(void *, uint32_t, uint32_t *))vt[12])(self, idx, &t);
            obj = func_0205681c(0xc4);
            res = (uint32_t)obj;
            if (obj != 0) {
                p = *(uint32_t *)(W(0x13c) + idx * 4);
                val = func_ov005_02198678(self);
                res = func_ov005_02196728(obj, W(0x10c), vx, vy, p, val, 2);
            }
            func_ov005_02196bec(res, ((uint32_t (*)(void *, uint32_t *))vt[14])(self, &t));
            if (W(0x150) == 2) {
                func_02069404(res, 4);
            }
        } else {
            obj = func_0205681c(0xc4);
            r4 = (uint32_t)obj;
            if (obj != 0) {
                func_ov005_02197868(&t3);
                r4 = func_ov005_02196728(obj, W(0x10c), vx, vy, t3, 0, 2);
            }
            res = r4;
            func_ov005_02196c3c(res);
        }
        if (W(0x118) < W(0x11c)) {
            n = W(0x118) + 1;
            W(0x118) = n;
            ((uint32_t *)W(0x114))[n - 1] = res;
        } else {
            func_0200d5d4(self + 0x114, &res, 0);
        }
        func_020695ec(self, res);
    }
    func_ov005_021989e8(self);
}
