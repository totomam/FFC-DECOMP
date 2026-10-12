#include "ffc/types.h"

typedef struct {
    uint32_t unk0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} FfcCtx;

extern void func_0201c220(void *a, int b, uint32_t c);
extern void func_02018254(FfcCtx *c, void *a, uint32_t b);
extern void func_02018330(FfcCtx *c, void *a);
extern void *func_02052d90(void *mar, uint32_t idx);
extern void func_02052d3c(void *mar, uint32_t idx);
extern void func_02052c04(void *mar);
extern void func_02053290(void *obj);
extern uint32_t func_0201c9ac(void *a, int b);
extern void *data_020b93b8;
extern void *data_020b8e44;

void func_ov003_0215f110(void *unused, uint32_t a, void *flag, int c)
{
    FfcCtx s1;
    FfcCtx s2;
    FfcCtx *p;
    uint32_t r6;
    uint32_t r7;
    uint32_t i;
    uint8_t *e;
    uint16_t key;
    int m;
    void *f = flag;

    m = 0x39;
    if (f == 0) {
        m = 0x3a;
    }
    func_0201c220(data_020b93b8, m, a);
    r6 = 0;
    if (a != 0) {
        p = &s1;
        func_02018254(p, data_020b8e44, a);
        r6 = *(uint16_t *)((uint8_t *)func_02052d90(p->mar, p->idx) + 0xa);
        if (p->mar != 0) {
            if (p->flag) {
                func_02052d3c(p->mar, p->idx);
            }
            func_02052c04(p->mar);
        }
        func_02053290(p);
    }

    m = 0x3b;
    if (f == 0) {
        m = 0x3c;
    }
    func_0201c220(data_020b93b8, m, r6);
    r7 = 0;
    if (r6 != 0) {
        if (c == 0) {
            func_02018330(&s2, data_020b8e44);
            i = 0;
            if (*(uint32_t *)((uint8_t *)func_02052d90(s2.mar, s2.idx) + 4) > 0) {
                do {
                    e = (uint8_t *)func_02052d90(s2.mar, s2.idx);
                    key = *(uint16_t *)(e + *(uint32_t *)(e + 8) + i * 4);
                    if (r6 == key) {
                        e = (uint8_t *)func_02052d90(s2.mar, s2.idx);
                        r7 = *(uint16_t *)(e + *(uint32_t *)(e + 8) + i * 4 + 2);
                    }
                    i++;
                } while (i < *(uint32_t *)((uint8_t *)func_02052d90(s2.mar, s2.idx) + 4));
            }
            if (s2.mar != 0) {
                if (s2.flag) {
                    func_02052d3c(s2.mar, s2.idx);
                }
                func_02052c04(s2.mar);
            }
            func_02053290(&s2);
        } else {
            r7 = func_0201c9ac(data_020b93b8, 0x3e);
        }
    }

    m = 0x3d;
    if (f == 0) {
        m = 0x3e;
    }
    func_0201c220(data_020b93b8, m, r7);
}
