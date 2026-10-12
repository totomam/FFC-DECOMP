#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_02036750(void *p);
extern void func_0201f1f0(void *a, uint8_t b, void *c);
extern int32_t func_ov007_021af04c(void *p);
extern uint32_t func_0201a014(void *p);
extern void func_02017484(void *out, void *p);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_02015938(void *p);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void func_02036de4(void *p, uint32_t v);
extern void func_02036e0c(void *p, uint32_t v);
extern void *func_020197b4(void *p, uint32_t v);
extern void func_02036df8(void *p, uint32_t v);
extern void func_02036e40(void *p, uint32_t v);
extern void func_02036e54(void *p, uint32_t v);
extern void func_02052d3c(void *mar, uint32_t idx);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *o);
extern void func_020367a8(void *p);
extern void *data_020b8e44;
extern void *data_020b93b8;

typedef struct {
    uint32_t a0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} S8;

void func_ov001_0218d7cc(uint8_t *self) {
    uint32_t off;
    S8 s8;
    uint8_t s18[0x58];
    uint32_t i, t, mode;
    int32_t c, pos;

    func_02084b2c(self + 0xe78, 0, 0x18);
    func_02036750(s18);
    func_0201f1f0(data_020b93b8, ((uint8_t *)data_020b8e44)[0xc], s18);
    c = func_ov007_021af04c(s18);
    off = 0x760;
    pos = *(int32_t *)(self + off);
    t = func_0201a014(data_020b8e44);

    if (t - 1u <= 1u) {
        off -= 0xf4;
        if (*(int32_t *)(self + off) == 0) {
            if (t == 2) {
                mode = 9;
            } else {
                mode = 10;
            }
        } else {
            mode = 11;
        }
    } else {
        off -= 0xf4;
        if (*(int32_t *)(self + off) == 0) {
            if (pos >= c + 0xc8) {
                mode = 1;
            }
            if (pos >= c + 0x79 && pos < c + 0xc8) {
                mode = 2;
            }
            if (pos >= c + 0x47 && pos < c + 0x79) {
                mode = 3;
            }
            if (pos >= c - 0x46 && pos < c + 0x47) {
                mode = 4;
            }
            if (pos >= c - 0x78 && pos < c - 0x46) {
                mode = 5;
            }
            if (pos >= c - 0xc7 && pos < c - 0x78) {
                mode = 6;
            }
            if (pos < c - 0xc7) {
                mode = 7;
            }
        } else {
            mode = 8;
        }
    }

    func_02017484(&s8, data_020b8e44);

    i = 0;
    if (((uint32_t *)func_02052d90(s8.mar, s8.idx))[1] != 0) {
        do {
            uint8_t *m = (uint8_t *)func_02052d90(s8.mar, s8.idx);
            uint32_t *tab = (uint32_t *)(m + ((uint32_t *)m)[2]);
            uint8_t *e = m + tab[i];
            if (mode == *(uint32_t *)e) {
                uint8_t *r4;
                uint8_t *r5;
                uint32_t k;
                uint32_t v2;
                k = func_02015938(data_020b8e44);
                k = func_0206c184(k, ((uint32_t *)e)[1]);
                r4 = e + ((uint32_t *)e)[2];
                r5 = r4 + (k << 2);
                v2 = *(uint16_t *)(r5 + 2);
                func_02036de4(self + 0xe78, v2);
                func_02036e0c(self + 0xe78, r5[1]);
                func_02036df8(self + 0xe78, ((uint8_t *)func_020197b4(data_020b8e44, v2))[9]);
                func_02036e40(self + 0xe78, r4[k << 2]);
                func_02036e54(self + 0xe78, 1);
                break;
            }
            i++;
        } while (i < ((uint32_t *)func_02052d90(s8.mar, s8.idx))[1]);
    }

    if (s8.mar != 0) {
        if (s8.flag != 0) {
            func_02052d3c(s8.mar, s8.idx);
        }
        func_02052c04(s8.mar);
    }
    func_02053290(&s8);
    func_020367a8(s18);
}
