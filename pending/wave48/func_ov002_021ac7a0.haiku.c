#include "ffc/types.h"

extern void func_02015e8c(void *dst, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_ov002_021aa2c4(uint32_t *out, uint32_t a);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t w0;
    void *p;
    uint32_t idx;
    uint8_t flag;
} Tmp;

void func_ov002_021ac7a0(uint32_t *out, uint32_t a, uint32_t mode)
{
    Tmp h1;
    Tmp h2;
    Tmp k1;
    Tmp k2;
    uint32_t t3[3];
    uint32_t t4[3];
    uint32_t r4;
    uint32_t r6;

    switch (mode) {
    case 0:
        *out = 0;
        return;
    case 1:
        func_02015e8c(&h1, data_020b8e44);
        r4 = *(uint32_t *)((uint8_t *)func_02052d90(h1.p, h1.idx) + 0x38);
        if (h1.p != 0) {
            if (h1.flag != 0) {
                func_02052d3c(h1.p, h1.idx);
            }
            func_02052c04(h1.p);
        }
        func_02053290(&h1);

        func_02015e8c(&h2, data_020b8e44);
        r6 = *(uint32_t *)((uint8_t *)func_02052d90(h2.p, h2.idx) + 0x3c);
        if (h2.p != 0) {
            if (h2.flag != 0) {
                func_02052d3c(h2.p, h2.idx);
            }
            func_02052c04(h2.p);
        }
        func_02053290(&h2);

        func_ov002_021aa2c4(t3, a);
        *out = r4 + func_020817c8(r6 - r4, t3[0]);
        return;
    case 2:
        func_02015e8c(&k1, data_020b8e44);
        r4 = *(uint32_t *)((uint8_t *)func_02052d90(k1.p, k1.idx) + 0x30);
        if (k1.p != 0) {
            if (k1.flag != 0) {
                func_02052d3c(k1.p, k1.idx);
            }
            func_02052c04(k1.p);
        }
        func_02053290(&k1);

        func_02015e8c(&k2, data_020b8e44);
        r6 = *(uint32_t *)((uint8_t *)func_02052d90(k2.p, k2.idx) + 0x34);
        if (k2.p != 0) {
            if (k2.flag != 0) {
                func_02052d3c(k2.p, k2.idx);
            }
            func_02052c04(k2.p);
        }
        func_02053290(&k2);

        func_ov002_021aa2c4(t4, a);
        *out = r4 + func_020817c8(r6 - r4, t4[0]);
        return;
    }
}
