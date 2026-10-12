#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void *func_02084b2c(void *dst, int c, uint32_t n);
extern uint32_t func_ov008_0219a444(void *self, uint32_t idx);
extern uint32_t func_0201c9ac(uint32_t data, uint32_t n);
extern void func_0201c220(uint32_t data, uint32_t n, uint32_t v);
extern void func_0201e92c(uint32_t data, uint32_t idx, void *buf);
extern void func_0201e9e4(uint32_t data);
extern uint32_t func_0201e97c(uint32_t data);
extern void func_020692a4(void *object);
extern void func_ov005_02196144(void *obj, uint8_t v);
extern void func_ov008_02199b24(void *self);
extern void func_ov008_0219a238(void *self);
extern void func_ov008_0219a290(void *self);
extern void func_ov005_02196f14(void *obj);
extern void func_ov008_02199e8c(void *self);
extern void func_02056c4c(void *obj);
extern void func_ov008_02199da4(void *self);
extern uint32_t data_020b93b8;

void func_ov008_02199fe4(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint8_t buf[0x18];
    int i;
    uint32_t k;

    if (*(uint32_t *)(s + 0x148) == 1) {
        func_02021338(0x116);
        func_02084b2c(buf, 0, 0x18);
        for (i = 0; i < 0x40; i++) {
            if (s[i + 0x100]) {
                uint32_t r6;
                uint32_t r2;
                s[i + 0x100] = 0;
                r6 = func_ov008_0219a444(s, i);
                r2 = func_0201c9ac(data_020b93b8, 3);
                func_0201c220(data_020b93b8, 3, r6 + r2);
                func_0201e92c(data_020b93b8, i, buf);
            }
        }
        k = 0x142;
        s[k] = 0;
        func_0201e9e4(data_020b93b8);
        if (s[k - 1]) {
            if (func_0201e97c(data_020b93b8) <= 8) {
                func_020692a4(*(void **)(s + 0xd8));
                {
                    void *b = *(void **)((uint8_t *)*(void **)(s + 0xd8) + 0x98);
                    void **vt = *(void ***)b;
                    ((void (*)(void *))vt[11])(b);
                }
                func_020692a4(*(void **)(s + 0xdc));
                {
                    void *b = *(void **)((uint8_t *)*(void **)(s + 0xdc) + 0x98);
                    void **vt = *(void ***)b;
                    ((void (*)(void *))vt[11])(b);
                }
                s[k - 2] = 0;
                func_ov005_02196144(*(void **)(s + 0xe0), (uint8_t)(s[k - 2] + 1));
            } else {
                int m = (int)((func_0201e97c(data_020b93b8) - 1) >> 3);
                if ((int)s[k - 2] > m) {
                    s[k - 2] = (uint8_t)m;
                    func_ov005_02196144(*(void **)(s + 0xe0), (uint8_t)(s[k - 2] + 1));
                }
            }
        }
        func_ov008_02199b24(s);
        func_ov008_0219a238(s);
        func_ov008_0219a290(s);
        func_ov005_02196f14(*(void **)(s + 0xfc));
        func_ov008_02199e8c(s);
        {
            uint8_t *r4 = *(uint8_t **)(s + 0xc4);
            void *obj;
            void **vt;
            func_02056c4c(r4 + 0x14);
            obj = *(void **)(r4 + 0x98);
            vt = *(void ***)obj;
            ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 1, 0);
        }
        func_ov008_02199da4(s);
    }
}
