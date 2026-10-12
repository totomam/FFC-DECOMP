#include "ffc/types.h"

typedef int64_t DivRes;
typedef struct { uint32_t unused; void *ptr; int32_t idx; uint8_t flag; } Tmp;
typedef struct { int32_t x; int32_t y; } Out;

extern DivRes func_0209a76c(int32_t a, int32_t b);
extern void func_02015e8c(Tmp *out, void *mar);
extern void *func_02052d90(void *mar, int32_t index);
extern void func_02052d3c(void *a, int32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(Tmp *t);
extern int32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_02081210(int32_t a, int32_t b);
extern void *data_020b8e44;
extern int16_t data_020a1bd0[];

void func_ov002_021ae4e4(Out *out, int32_t a, int32_t flag)
{
    Tmp t1;
    Tmp t2;
    int32_t r4;
    int32_t r6;
    uint16_t h;
    int32_t i;

    r4 = (int32_t)(func_0209a76c(a + 0x168, 0x168) >> 32);

    func_02015e8c(&t1, data_020b8e44);
    h = *(uint16_t *)((uint8_t *)func_02052d90(t1.ptr, t1.idx) + 0x1e);
    if (t1.ptr != 0) {
        if (t1.flag != 0) {
            func_02052d3c(t1.ptr, t1.idx);
        }
        func_02052c04(t1.ptr);
    }
    func_02053290(&t1);

    i = ((uint16_t)(int32_t)func_0209a76c(r4 * 0xffff, 0x168)) >> 4;
    i = i * 2;

    out->x = func_020817c8((uint32_t)h << 12, data_020a1bd0[i + 1]);
    out->y = -func_020817c8((uint32_t)h << 12, data_020a1bd0[i]);
    out->x = func_02081210(out->x, 1 << 24);
    out->y = func_02081210(out->y, 1 << 24);

    func_02015e8c(&t2, data_020b8e44);
    r4 = *(int32_t *)((uint8_t *)func_02052d90(t2.ptr, t2.idx) + 0x134);
    r6 = *(int32_t *)((uint8_t *)func_02052d90(t2.ptr, t2.idx) + 0x138);
    if (t2.ptr != 0) {
        if (t2.flag != 0) {
            func_02052d3c(t2.ptr, t2.idx);
        }
        func_02052c04(t2.ptr);
    }
    func_02053290(&t2);

    if (flag == 1) {
        r4 = -r4;
    }
    out->x = out->x + r4;
    out->y = out->y + r6;
}
