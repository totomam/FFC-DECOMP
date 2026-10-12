#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    void *ptr;
    uint32_t idx;
    uint8_t flag;
} Tmp;

extern uint32_t data_020b8e44;
extern void func_02015e8c(Tmp *t, uint32_t v);
extern void *func_02052d90(void *p, uint32_t idx);
extern void func_02052d3c(void *p, uint32_t idx);
extern void func_02052c04(void *p);
extern void func_02053290(Tmp *t);
extern void func_ov002_021ad55c(uint32_t *out, int32_t sign, uint32_t mode);

void func_ov002_021ad7c0(int32_t *out, int32_t sign, uint32_t mode)
{
    uint32_t r4;
    uint32_t r6;
    uint32_t res[2];

    switch (mode) {
    case 0: {
        Tmp t;
        void *obj;
        func_02015e8c(&t, data_020b8e44);
        obj = func_02052d90(t.ptr, t.idx);
        r4 = *(uint32_t *)((uint8_t *)obj + 0xd4);
        r6 = *(uint32_t *)((uint8_t *)obj + 0xd8);
        {
            Tmp *p = &t;
            if (p->ptr != 0) {
                if (p->flag != 0) {
                    func_02052d3c(p->ptr, p->idx);
                }
                func_02052c04(p->ptr);
            }
            func_02053290(p);
        }
        break;
    }
    case 1: {
        Tmp t;
        void *obj;
        func_02015e8c(&t, data_020b8e44);
        obj = func_02052d90(t.ptr, t.idx);
        r4 = *(uint32_t *)((uint8_t *)obj + 0xe4);
        r6 = *(uint32_t *)((uint8_t *)obj + 0xe8);
        {
            Tmp *p = &t;
            if (p->ptr != 0) {
                if (p->flag != 0) {
                    func_02052d3c(p->ptr, p->idx);
                }
                func_02052c04(p->ptr);
            }
            func_02053290(p);
        }
        break;
    }
    case 2: {
        Tmp t;
        void *obj;
        func_02015e8c(&t, data_020b8e44);
        obj = func_02052d90(t.ptr, t.idx);
        r4 = *(uint32_t *)((uint8_t *)obj + 0xdc);
        r6 = *(uint32_t *)((uint8_t *)obj + 0xe0);
        {
            Tmp *p = &t;
            if (p->ptr != 0) {
                if (p->flag != 0) {
                    func_02052d3c(p->ptr, p->idx);
                }
                func_02052c04(p->ptr);
            }
            func_02053290(p);
        }
        break;
    }
    default:
        break;
    }

    if (sign == 1) {
        r4 = -r4;
    }
    func_ov002_021ad55c(res, sign, mode);
    {
        uint32_t hi = r6 + res[1];
        out[0] = r4 + res[0];
        out[1] = hi;
    }
}
