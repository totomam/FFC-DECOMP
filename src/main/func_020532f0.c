#include "ffc/types.h"

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t w1;
} Hdr;

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Pair;

extern void *func_0205327c(void *destination, const void *source);
extern void func_02052064(void *dst, Pair src);
extern void func_02052258(void *dst, void *src);
extern void func_0200b65c(void *dst, void *src);
extern void *func_020059cc(void *object);
extern void *func_0205208c(void *object);
extern void func_02053370(void *dst, void *src, int8_t *flag);
extern void *func_0205323c(void *object, void *arg);

void func_020532f0(void *a, void **pp, int8_t *flag) {
    uint32_t v;
    Hdr *h;
    uint8_t loc12[0xc];
    uint8_t loc0[0xc];
    uint8_t tmp[0x58];

    if (*flag == 0) {
        func_0205327c(a, pp);
        return;
    }
    h = (Hdr *)((uint8_t *)*pp + 0x38);
    if (h->flag == 0) {
        v = ((uint32_t)*(uint8_t *)h << 24) >> 25;
    } else {
        v = h->w1;
    }
    if (v == 0) {
        func_02052064(tmp, *(Pair *)*pp);
        func_02052258(loc12, tmp);
        func_0200b65c((uint8_t *)*pp + 0x38, loc12);
        func_020059cc(loc12);
        func_0205208c(tmp);
    }
    func_02053370(loc0, (uint8_t *)*pp + 0x38, flag);
    func_0205323c(a, loc0);
    func_020059cc(loc0);
}
