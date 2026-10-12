#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    void *ptr;
    uint32_t idx;
    uint8_t flag;
} Loc;

extern void *func_ov002_021aac10(void *object);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_ov002_021aaa78(void *object);
extern uint8_t func_ov002_021aab40(const void *object);
extern uint32_t func_ov002_021aa780(const void *object);
extern uint32_t func_ov002_021abd00(void *object, uint32_t bit);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint32_t func_02081210(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021aab20(const void *object);
extern void func_02015e8c(Loc *loc, uint32_t v);
extern void *func_ov002_021aac08(const void *object);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern uint32_t data_020b8e44;

void func_ov002_021ac39c(int32_t *out, void *obj)
{
    int32_t r4;
    uint32_t c;
    Loc loc;

    if (func_ov002_021aa11c(func_ov002_021aac10(obj), 3) != 0) {
        *out = 0;
        return;
    }
    r4 = (int32_t)(func_ov002_021aaa78(obj) << 12);
    if (func_ov002_021aab40(obj) != 8) {
        uint32_t t = func_ov002_021aa780(obj);
        int cond = 1;
        if (t != 0 && t - 3 > 1) {
            cond = 0;
        }
        if (cond) {
            uint32_t q = func_ov002_021abd00(obj, 3);
            if (q != 0) {
                c = 0x19 << 14;
                r4 = r4 + func_02081210(func_020817c8(q << 12, r4), c);
            }
        }
    }
    if (func_ov002_021aab20(obj) != 0) {
        uint16_t h;
        void *ret;
        uint32_t x;
        func_02015e8c(&loc, data_020b8e44);
        h = *(uint16_t *)((uint8_t *)func_ov002_021aac08(obj) + 0x54);
        ret = func_02052d90(loc.ptr, loc.idx);
        x = func_020817c8(*(int32_t *)((uint8_t *)ret + 0x78), h << 12);
        x = func_020817c8(x, 0x19a);
        r4 = func_020817c8(r4, x);
        if (loc.ptr != 0) {
            if (loc.flag) {
                func_02052d3c(loc.ptr, loc.idx);
            }
            func_02052c04(loc.ptr);
        }
        func_02053290(&loc);
    }
    if (r4 < 0x1000) {
        r4 = 0x1000;
    }
    *out = r4;
}
