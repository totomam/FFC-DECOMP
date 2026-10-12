#include "ffc/types.h"

extern uint32_t func_02036da0(void *obj);
extern uint32_t func_02036cd8(void *obj);
extern void *func_020197b4(void *a, uint32_t b);
extern int func_02036cfc(void *obj);
extern uint32_t func_02036d10(void *obj);
extern uint32_t func_02036d18(void *obj);
extern void func_0201d1a4(void *a, uint32_t b, void *c);
extern int func_02036f1c(void *o);
extern void func_02035f58(void *o);
extern uint32_t func_02019df0(void *a, uint32_t b);
extern void func_0201f36c(void *a, uint32_t idx, void *out);
extern uint32_t func_02035ff4(void *o);
extern uint32_t func_02036f30(void *o);
extern void *func_02035fd0(void *o);
extern int func_02036ce0(void *o);
extern void *data_020b8e44;
extern uint16_t data_0209deac;
extern void *data_020b93b8;

void func_ov005_02197684(uint32_t *out, void *obj, uint32_t flag) {
    uint32_t sb[2];
    uint32_t sc[0x60 / 4];
    uint32_t r4;
    uint32_t t;
    uint32_t r2;
    uint8_t *r7;

    r4 = sb[1] & 0xffc3ffffu;
    r4 = r4 & 0xc03fffffu;
    r4 = (r4 & 0xbfffffffu) | ((func_02036da0(obj) & 1u) << 30);

    r7 = (uint8_t *)func_020197b4(data_020b8e44, func_02036cd8(obj));

    if (func_02036cd8(obj) >= 700u && func_02036cd8(obj) <= 729u && func_02036cfc(obj) != 0) {
        r2 = r4 & (0xbfffffffu << 10);
        r2 = r2 | (*(uint16_t *)(r7 + 0xe) & 0x3ffu);
        r2 = r2 & 0xfffe03ffu;
        r2 = r2 | (2u << 16);
        r2 = r2 & 0xffc3ffffu;
        r4 = r2 | (5u << 18);
        t = func_02036d10(obj);
        r4 = (r4 & 0xc03fffffu) | ((t << 24) >> 2);
    } else if (func_02036cd8(obj) >= 800u && func_02036cd8(obj) <= 833u && func_02036cfc(obj) != 0) {
        r2 = r4 & 0xfffffc00u;
        r2 = r2 | (data_0209deac & 0x3ffu);
        r2 = r2 | (2u << 16);
        r4 = r2 & 0xfffe03ffu;
    } else {
        r2 = r4 & 0xfffffc00u;
        r4 = r2 | (*(uint16_t *)(r7 + 0x12) & 0x3ffu);
        t = func_02036d18(obj);
        r2 = (r4 & 0xfffe03ffu) | ((t << 25) >> 15);
        r4 = r2 & 0xfffdffffu;

        func_0201d1a4(data_020b93b8, func_02036cd8(obj), sb);
        if (func_02036f1c(sb) != 0) {
            func_02035f58(sc);
            func_0201f36c(data_020b93b8,
                          func_02019df0(data_020b8e44, func_02036cd8(obj)), sc);
            r2 = func_02035ff4(sc) != 0 ? 1u : 2u;
            r4 = (r4 & 0xffc3ffffu) | ((r2 << 28) >> 10);
            r4 = (r4 & 0xc03fffffu) | ((func_02036f30(sb) << 24) >> 2);
            func_02035fd0(sc);
        } else {
            r2 = flag != 0 ? 3u : 4u;
            r4 = (r4 & 0xffc3ffffu) | ((r2 << 28) >> 10);
        }

        t = func_02036d18(obj);
        if (t == 1 || func_02036ce0(obj) != 0) {
            r4 = (r4 & 0xffc3ffffu) | (1u << 20);
        }
    }

    *out = r4;
}
