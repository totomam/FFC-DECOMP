#include "ffc/types.h"

extern void *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c63b8[];
extern uint32_t data_ov007_021c63c0[];
extern uint32_t data_ov007_021c63c8[];

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *buf, void *src);
extern void *func_02033094(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_020059cc(void *obj);
extern void func_02056bc0(void *obj, void *node);
extern uint32_t func_02056aec(void *node);
extern void *func_02008ce8(void *a, void *b, uint32_t c, void *d);
extern void *func_ov007_0219b460(void *a, uint32_t b, uint32_t c, uint32_t d);

void func_ov007_021b3cfc(void *param_0)
{
    uint8_t *s = (uint8_t *)param_0;
    uint32_t *g;
    void *r6 = 0;
    void *r4;
    void *r7;
    void *r1;
    uint32_t node;
    uint32_t buf[4];
    uint32_t sp10[2];

    if (s[0xcc] == 0) {
        g = (uint32_t *)data_020b93b8;
        g[0x74 / 4] = 0;
        g[0x78 / 4] = 0;
        r4 = func_0205681c(0xa4);
        if (r4 != 0) {
            sp10[0] = 0x80;
            sp10[1] = 0x60;
            r1 = func_020159c8(data_020b8e44, 0x36);
            func_02005988(buf, r1);
            r4 = func_02033094(r4, buf, 0, sp10[0], sp10[1], 4, 0);
            r6 = (void *)1;
        }
        if (r6 != 0) {
            func_020059cc(buf);
        }
        func_02056bc0(s + 0x48, r4);
        node = func_02056aec(r4);
        r6 = func_0205681c(0x94);
        if (r6 != 0) {
            r6 = func_02008ce8(r6, r4, 0, *(void **)(s + 0x98));
        }
        r7 = func_ov007_0219b460(data_020b93b8, data_ov007_021c63b8[0], data_ov007_021c63b8[1], 1);
        r1 = func_0205681c(0x94);
        if (r1 != 0) {
            r1 = func_02008ce8(r1, r4, 0, *(void **)(s + 0x98));
        }
        func_02056bc0(s + 0x14, r1);
        func_02056bc0(s + 0x14, r7);
        func_02056bc0(s + 0x14, r6);
        func_02056bc0(s + 0x14, (void *)node);
        *(uint32_t *)(s + 0xb0) = data_ov007_021c63c0[0];
        *(uint32_t *)(s + 0xb4) = data_ov007_021c63c0[1];
    } else {
        *(uint32_t *)(s + 0xb0) = data_ov007_021c63c8[0];
        *(uint32_t *)(s + 0xb4) = data_ov007_021c63c8[1];
    }
}
