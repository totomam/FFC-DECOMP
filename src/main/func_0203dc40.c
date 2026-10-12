#include "ffc/types.h"

extern void func_0201ba14(void *out, uint32_t a, void *obj, uint32_t one);
extern uint32_t func_02036ce0(void *obj);
extern uint32_t func_02036cd8(void *obj);
extern void func_0201d1a4(uint32_t a, uint32_t b, void *out);
extern uint32_t func_02036f1c(void *obj);
extern void *func_0203d938(void *obj, uint32_t mode, void *out);
extern void *func_020059cc(void *obj);
extern uint32_t func_02036d18(void *obj);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(void *out, uint32_t v);
extern void *func_0203da40(void *obj, uint32_t one, void *a, void *b);
extern void *func_0203b720(void);
extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern uint32_t data_020aedd4[];

void *func_0203dc40(void *p) {
    uint32_t s[3];
    uint32_t t[4];
    void *ret;
    uint32_t v;
    uint32_t idx;
    uint32_t *q;

    func_0201ba14(s, data_020b93b8, (uint8_t *)p + 0xa0, 1);
    switch (func_02036ce0((uint8_t *)p + 0xa0)) {
    case 0:
        v = func_02036cd8((uint8_t *)p + 0xa0);
        func_0201d1a4(data_020b93b8, v, t);
        if (func_02036f1c(t)) {
            ret = func_0203d938(p, 0, s);
            func_020059cc(s);
            return ret;
        }
        if (func_02036d18((uint8_t *)p + 0xa0) == 0 || func_02036d18((uint8_t *)p + 0xa0) == 1) {
            ret = func_0203d938(p, 2, s);
            func_020059cc(s);
            return ret;
        }
        idx = func_02036d18((uint8_t *)p + 0xa0);
        v = func_020159c8(data_020b8e44, data_020aedd4[idx]);
        q = &t[1];
        func_02005988(q, v);
        ret = func_0203da40(p, 1, q, s);
        func_020059cc(q);
        func_020059cc(s);
        return ret;
    case 1:
    case 2:
    case 3:
    case 4:
        ret = func_0203d938(p, 0, s);
        func_020059cc(s);
        return ret;
    default:
        ret = func_0203b720();
        func_020059cc(s);
        return ret;
    }
}
