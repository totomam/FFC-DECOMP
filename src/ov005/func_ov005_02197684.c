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

typedef struct { uint32_t a:10; uint32_t b:7; uint32_t c:1; uint32_t d:4; uint32_t e:8; uint32_t f:1; uint32_t g:1; } F;
typedef union { uint32_t w; F f; } U;

void func_ov005_02197684(uint32_t *out, void *obj, uint32_t flag) {
    U r;
    uint32_t sb[1];
    uint32_t sc[0x60 / 4];
    uint8_t *r7;

    r.f.d = 0;
    r.f.e = 0;
    r.f.f = func_02036da0(obj) & 1;
    r7 = (uint8_t *)func_020197b4(data_020b8e44, func_02036cd8(obj));

    if (func_02036cd8(obj) >= 700u && func_02036cd8(obj) <= 729u && func_02036cfc(obj) != 0) {
        r.f.a = *(uint16_t *)(r7 + 0xe);
        r.f.b = 0;
        r.f.c = 1;
        r.f.d = 5;
        r.f.e = func_02036d10(obj);
    } else if (func_02036cd8(obj) >= 800u && func_02036cd8(obj) <= 833u && func_02036cfc(obj) != 0) {
        r.f.a = data_0209deac;
        r.f.c = 1;
        r.f.b = 0;
    } else {
        r.f.a = *(uint16_t *)(r7 + 0x12);
        r.f.b = func_02036d18(obj);
        r.f.c = 0;
        func_0201d1a4(data_020b93b8, func_02036cd8(obj), sb);
        if (func_02036f1c(sb) != 0) {
            func_02035f58(sc);
            func_0201f36c(data_020b93b8,
                          func_02019df0(data_020b8e44, func_02036cd8(obj)), sc);
            r.f.d = func_02035ff4(sc) != 0 ? 1 : 2;
            r.f.e = func_02036f30(sb);
            func_02035fd0(sc);
        } else {
            r.f.d = flag != 0 ? 3 : 4;
        }
        if (func_02036d18(obj) == 1 || func_02036ce0(obj) != 0) {
            r.f.d = 4;
        }
    }
    *out = r.w;
}
