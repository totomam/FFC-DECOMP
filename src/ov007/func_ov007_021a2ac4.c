#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern void func_02056c4c(void *object);
extern void *data_020b8e44;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_02032d24(void *obj, Pair size, void *st, uint32_t flag, uint32_t zero);

void func_ov007_021a2ac4(void *p0, void *p1)
{
    uint8_t *self = (uint8_t *)p0;
    uint32_t *msg = (uint32_t *)p1;
    Pair wh;
    uint32_t st[3];
    void *node;
    void *m;

    if (msg[3] != 1) {
        if (msg[3] != 2) {
            return;
        }
        if (msg[4] != *(uint32_t *)(self + 0xd4)) {
            return;
        }
        if (*(uint32_t *)(self + 0xf0) == 0x1f) {
            uint32_t z = 0;
            uint32_t have = 0;
            m = func_0205681c(0xb0);
            node = m;
            if (m != 0) {
                void *x = func_020159c8(data_020b8e44, 0x26);
                func_02005988(st, x);
                wh.a = 0x80;
                wh.b = 0x60;
                have = 1;
                node = func_02032d24(m, wh, st, 4, z);
            }
            if (have) {
                func_020059cc(st);
            }
            func_02056bc0(self + 0x14, node);
        }
        func_02056c4c(*(void **)(self + 0xec));
        *(uint32_t *)(self + 0xf0) = 0x20;
    } else {
        if (msg[4] == *(uint32_t *)(self + 0xd4)) {
            func_02056c4c(*(void **)(self + 0xec));
            *(uint32_t *)(self + 0xf0) = 0x20;
        }
    }
}
