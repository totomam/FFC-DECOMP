#include "ffc/types.h"

typedef struct {
    uint32_t lo;
    uint32_t hi;
} Pair;

typedef struct {
    uint32_t pad;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Ref;

extern uint32_t data_020b8e44;
extern Ref func_02015e8c(uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);

void func_ov002_021ad55c(Pair *out, uint32_t neg, uint32_t sel) {
    Ref r0;
    Ref r1;
    Ref r2;
    Ref r3;
    Ref r4;
    Ref r5;
    uint8_t *p;
    Ref *rp;
    uint32_t hi;
    uint32_t lo;

    switch (sel) {
    case 0:
        r0 = func_02015e8c(data_020b8e44);
        p = (uint8_t *)func_02052d90(r0.mar, r0.idx);
        hi = *(uint32_t *)(p + 0x90);
        lo = *(uint32_t *)(p + 0x8c);
        out->lo = lo;
        out->hi = hi;
        rp = &r0;
        if (rp->mar != 0) {
            if (rp->flag != 0) {
                func_02052d3c(rp->mar, rp->idx);
            }
            func_02052c04(rp->mar);
        }
        func_02053290(rp);
        break;
    case 1:
        r1 = func_02015e8c(data_020b8e44);
        p = (uint8_t *)func_02052d90(r1.mar, r1.idx);
        hi = *(uint32_t *)(p + 0xa0);
        lo = *(uint32_t *)(p + 0x9c);
        out->lo = lo;
        out->hi = hi;
        rp = &r1;
        if (rp->mar != 0) {
            if (rp->flag != 0) {
                func_02052d3c(rp->mar, rp->idx);
            }
            func_02052c04(rp->mar);
        }
        func_02053290(rp);
        break;
    case 2:
        r2 = func_02015e8c(data_020b8e44);
        p = (uint8_t *)func_02052d90(r2.mar, r2.idx);
        hi = *(uint32_t *)(p + 0x98);
        lo = *(uint32_t *)(p + 0x94);
        out->lo = lo;
        out->hi = hi;
        rp = &r2;
        if (rp->mar != 0) {
            if (rp->flag != 0) {
                func_02052d3c(rp->mar, rp->idx);
            }
            func_02052c04(rp->mar);
        }
        func_02053290(rp);
        break;
    case 3:
        r3 = func_02015e8c(data_020b8e44);
        p = (uint8_t *)func_02052d90(r3.mar, r3.idx);
        hi = *(uint32_t *)(p + 0x120);
        lo = *(uint32_t *)(p + 0x11c);
        out->lo = lo;
        out->hi = hi;
        rp = &r3;
        if (rp->mar != 0) {
            if (rp->flag != 0) {
                func_02052d3c(rp->mar, rp->idx);
            }
            func_02052c04(rp->mar);
        }
        func_02053290(rp);
        break;
    case 4:
        r4 = func_02015e8c(data_020b8e44);
        p = (uint8_t *)func_02052d90(r4.mar, r4.idx);
        hi = *(uint32_t *)(p + 0x128);
        lo = *(uint32_t *)(p + 0x124);
        out->lo = lo;
        out->hi = hi;
        rp = &r4;
        if (rp->mar != 0) {
            if (rp->flag != 0) {
                func_02052d3c(rp->mar, rp->idx);
            }
            func_02052c04(rp->mar);
        }
        func_02053290(rp);
        break;
    case 5:
        r5 = func_02015e8c(data_020b8e44);
        p = (uint8_t *)func_02052d90(r5.mar, r5.idx);
        hi = *(uint32_t *)(p + 0x130);
        lo = *(uint32_t *)(p + 0x12c);
        out->lo = lo;
        out->hi = hi;
        rp = &r5;
        if (rp->mar != 0) {
            if (rp->flag != 0) {
                func_02052d3c(rp->mar, rp->idx);
            }
            func_02052c04(rp->mar);
        }
        func_02053290(rp);
        break;
    default:
        goto done;
    }
done:
    if (neg == 1) {
        out->lo = -out->lo;
    }
}
