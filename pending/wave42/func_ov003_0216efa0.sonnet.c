#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;

typedef struct {
    uint32_t pad0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} FfcOut;

typedef struct {
    uint32_t pad0;
    uint32_t pad1;
    uint32_t off;
} FfcHdr;

typedef struct {
    uint32_t pad0;
    uint16_t f;
} FfcEnt;

extern void func_02017754(FfcOut *out, uint32_t v);
extern FfcHdr *func_02052d90(void *mar, uint32_t index);
extern int func_0201bf6c(uint32_t v);
extern int func_0201c9ac(uint32_t v, uint32_t a);
extern void func_02052d3c(void *mar, uint32_t idx);
extern void func_02052c04(void *mar);
extern void func_02053290(FfcOut *out);

int func_ov003_0216efa0(uint32_t a, uint32_t index)
{
    FfcOut s;
    FfcHdr *h;
    FfcEnt *e;
    FfcOut *p;

    func_02017754(&s, data_020b8e44);
    h = func_02052d90(s.mar, s.idx);
    e = (FfcEnt *)((uint8_t *)h + h->off + index * 12);

    if (e->f != 0) {
        if (func_0201bf6c(data_020b93b8) == 0) {
            goto fail;
        }
    }
    if (func_0201c9ac(data_020b93b8, a) >= 9) {
        goto fail;
    }

    p = &s;
    if (p->mar != 0) {
        if (p->flag != 0) {
            func_02052d3c(p->mar, p->idx);
        }
        func_02052c04(p->mar);
    }
    func_02053290(p);
    return 1;

fail:
    p = &s;
    if (p->mar != 0) {
        if (p->flag != 0) {
            func_02052d3c(p->mar, p->idx);
        }
        func_02052c04(p->mar);
    }
    func_02053290(p);
    return 0;
}
