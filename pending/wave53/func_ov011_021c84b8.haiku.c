#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0203b688(void);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *obj, void *node);
extern void *func_02032d24(void *a, Pair cfg, void *d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *func_ov011_021c8478(void *obj, Pair cfg);
extern void *data_020b8e44;
extern Pair data_ov011_021cbd74;

uint32_t func_ov011_021c84b8(void *self, uint32_t n)
{
    uint8_t *p = (uint8_t *)self;
    Pair cfg;
    uint32_t lk[3];
    void *s7;
    void *s6;
    void *node;
    int did;

    if (p[0x335] == 0 && n >= 3) {
        s7 = func_0203b688();
        if (*(uint32_t *)(p + 0x3ac) == 1) {
            uint32_t *q = *(uint32_t **)(p + 0x34c);
            q[3] = (q[3] & ~0xffu) | 2;
        }
        did = 0;
        s6 = func_0205681c(0xb0);
        if (s6 != 0) {
            node = func_020159c8(data_020b8e44, 0x1dc);
            func_02005988(lk, node);
            cfg.a = 0x80;
            cfg.b = 0x60;
            did = 1;
            s6 = func_02032d24(s6, cfg, lk, 4, 0);
        }
        func_02056bc0(p + 0x14, s6);
        if (did) {
            func_020059cc(lk);
        }
        if (*(uint32_t *)(p + 0x3ac) == 1) {
            node = func_ov011_021c8478(p, data_ov011_021cbd74);
            func_02056bc0(s7, node);
        }
        func_02056bc0(p + 0x14, s7);
        return 1;
    }
    return 0;
}
