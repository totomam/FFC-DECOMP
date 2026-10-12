#include "ffc/types.h"

extern void func_02005988(void *obj, void *data);
extern void func_02017d2c(void *dst, void *src);
extern void func_020059cc(void *object);
extern void *func_02052d90(const void *mar, uint32_t index);
extern uint32_t func_02005f1c(void *object, uint32_t third);
extern void func_02052d3c(const void *mar, uint32_t index);
extern void func_02052c04(const void *mar);
extern void func_02053290(void *object);
extern uint8_t data_020ad1b8[];

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Local;

typedef struct {
    uint32_t w0;
    uint32_t count;
    uint32_t tbl;
} Mar;

void func_02017c48(void *a0, void *a1, uint32_t *out, uint32_t b, uint32_t c)
{
    Local L;
    uint8_t obj[12];
    uint32_t i;
    Mar *m;
    uint32_t *t;
    uint8_t *rec;
    uint8_t *ptr;
    Local *p;

    func_02005988(obj, data_020ad1b8);
    func_02017d2c(&L, obj);
    func_020059cc(obj);

    i = 0;
    m = func_02052d90(L.mar, L.idx);
    if (m->count > 0) {
        for (;;) {
            m = func_02052d90(L.mar, L.idx);
            t = (uint32_t *)((uint8_t *)m + m->tbl);
            if (b + 1 == *(uint16_t *)((uint8_t *)m + t[i])) {
                m = func_02052d90(L.mar, L.idx);
                rec = (uint8_t *)m + ((uint32_t *)((uint8_t *)m + m->tbl))[b];
                ptr = rec + ((uint32_t *)(rec + *(uint32_t *)(rec + 8)))[c];
                func_02005f1c(a1, (uint32_t)ptr);
                m = func_02052d90(L.mar, L.idx);
                rec = (uint8_t *)m + ((uint32_t *)((uint8_t *)m + m->tbl))[b];
                *out = *(uint16_t *)(rec + 2);
                p = &L;
                if (L.mar != 0) {
                    if (p->flag != 0) {
                        func_02052d3c(p->mar, p->idx);
                    }
                    func_02052c04(p->mar);
                }
                func_02053290(p);
                return;
            }
            i++;
            m = func_02052d90(L.mar, L.idx);
            if (i >= m->count) {
                break;
            }
        }
    }

    p = &L;
    if (L.mar != 0) {
        if (p->flag != 0) {
            func_02052d3c(p->mar, p->idx);
        }
        func_02052c04(p->mar);
    }
    func_02053290(p);
}
