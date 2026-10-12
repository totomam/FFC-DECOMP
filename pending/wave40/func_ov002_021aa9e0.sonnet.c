#include "ffc/types.h"

extern uint32_t func_ov002_021d3318(const void *object);
extern uint32_t func_ov002_021aaffc(const void *object);
extern void func_02015e8c(void *out, uint32_t arg);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_0209a484(uint32_t a);
extern uint32_t func_0209b5bc(uint32_t a, uint32_t b);
extern int32_t func_0209ab5c(uint32_t a);
extern int32_t func_020817c8(int32_t first, int32_t second);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t a;
    void *ptr;
    uint32_t idx;
    uint8_t flag;
} Tmp;

typedef struct {
    uint32_t pad[7];
    Tmp t;
} Frame;

int32_t func_ov002_021aa9e0(void *p)
{
    Frame f;
    int32_t r4;
    void *m;

    r4 = func_ov002_021d3318((char *)p + 0x13c) << 12;
    if (func_ov002_021aaffc(p) != 0) {
        p = &f.t;
        func_02015e8c(p, data_020b8e44);
        m = func_02052d90(f.t.ptr, f.t.idx);
        { int32_t s = func_0209ab5c(func_0209b5bc(func_0209a484(*(uint32_t *)((char *)m + 0x7c)), 0x45800000)) << 12; r4 = func_020817c8(r4, s); }
        if (f.t.ptr != 0) {
            if (((Tmp *)p)->flag != 0) {
                func_02052d3c(((Tmp *)p)->ptr, ((Tmp *)p)->idx);
            }
            func_02052c04(((Tmp *)p)->ptr);
        }
        func_02053290(p);
    }
    return r4 >> 12;
}
