#include "ffc/types.h"

extern void *data_020b93b8;
extern void *data_020b8e44;
extern int func_0201bf6c(void *obj, uint32_t id);
extern void func_0201bf5c(void *obj, uint32_t id, uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void *func_02047920(void *h, uint32_t a, uint32_t b, uint32_t c);
extern void *func_020474d0(void *h, uint32_t a, uint32_t b, void *c);
extern uint32_t func_02017fa8(void *obj);
extern int func_0201bfa4(void *obj, uint32_t id);

void *func_ov003_02171188(uint8_t *p, uint32_t mode, uint32_t *flag)
{
    void *ret = 0;
    void *a;
    uint8_t *base;
    uint8_t *cur;
    uint8_t *q;
    uint32_t off;
    uint32_t cnt;
    uint32_t i;
    uint32_t k;
    uint32_t v;

    switch (mode) {
    case 0:
        k = 0x34;
        if (func_0201bf6c(data_020b93b8, k)) {
            a = func_0205681c(0x88);
            if (a) {
                base = *(uint8_t **)(p + 8);
                off = *(uint32_t *)(base + 8);
                cur = 0;
                if (off != 0) {
                    cur = base + off;
                }
                q = cur + *(uint32_t *)(cur + 4);
                a = func_02047920(a, *(uint32_t *)(p + 4), *(uint16_t *)(q + 0x3a), 0);
            }
            ret = a;
        } else {
            func_0201bf5c(data_020b93b8, k, 1);
            a = func_0205681c(0x88);
            if (a) {
                base = *(uint8_t **)(p + 8);
                off = *(uint32_t *)(base + 8);
                cur = 0;
                if (off != 0) {
                    cur = base + off;
                }
                q = cur + *(uint32_t *)(cur + 4);
                a = func_02047920(a, *(uint32_t *)(p + 4), *(uint16_t *)(q + 0x38), 0);
            }
            ret = a;
        }
        break;
    case 1:
        a = func_0205681c(0x98);
        if (a) {
            a = func_020474d0(a, *(uint32_t *)(p + 4), 2, ret);
        }
        ret = a;
        break;
    case 2:
        cnt = 0;
        i = 1;
        if (func_02017fa8(data_020b8e44) > 1) {
            do {
                if (func_0201bfa4(data_020b93b8, i)) {
                    cnt++;
                }
                i++;
            } while (i < func_02017fa8(data_020b8e44));
        }
        off = 0;
        if (cnt != *(uint32_t *)(p + 0x10)) off = 1;
        if (off) {
            k = 0x35;
        if (func_0201bf6c(data_020b93b8, k)) {
                base = *(uint8_t **)(p + 8);
                off = *(uint32_t *)(base + 8);
                if (off == 0) { cur = 0; } else { cur = base + off; }
                q = cur + *(uint32_t *)(cur + 4);
                v = *(uint16_t *)(q + 0x3e);
            } else {
                func_0201bf5c(data_020b93b8, k, 1);
                base = *(uint8_t **)(p + 8);
                off = *(uint32_t *)(base + 8);
                if (off == 0) { cur = 0; } else { cur = base + off; }
                q = cur + *(uint32_t *)(cur + 4);
                v = *(uint16_t *)(q + 0x3c);
            }
            ret = func_0205681c(0x88);
            if (ret) {
                ret = func_02047920(ret, *(uint32_t *)(p + 4), v & 0xffff, 0);
            }
        }
        *flag = 1;
        break;
    }
    return ret;
}
