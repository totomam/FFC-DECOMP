#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Loc;

extern uint32_t func_ov002_021aa9e0(void *obj);
extern uint8_t func_ov002_021aab40(const void *object);
extern uint32_t func_ov002_021aa780(const void *object);
extern uint32_t func_ov002_021abd00(void *obj, uint32_t bit);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint32_t func_02081210(int32_t first, int32_t second);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_ov002_021aab20(const void *object);
extern void func_02015e8c(Loc *loc, uint32_t v);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_02052d3c(const void *mar, uint32_t index);
extern void func_02052c04(const void *mar);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

void func_ov002_021ac088(int32_t *out, void *obj)
{
    uint8_t *o = (uint8_t *)obj;
    uint32_t r6;
    uint32_t r7;
    uint32_t x;
    Loc loc;
    uint32_t s;
    int flag;

    r6 = func_ov002_021aa9e0(obj) << 12;
    *out = r6;

    if (func_ov002_021aab40(obj) != 8) {
        s = func_ov002_021aa780(obj);
        flag = (s == 0) ? 1 : (((s - 3) <= 1) ? 1 : 0);
        if (flag != 0) {
            x = func_ov002_021abd00(obj, 0);
            if (x != 0) {
                r7 = 0x19 << 14;
                *out += func_02081210(func_020817c8(x << 12, r6), r7);
            }
        }
        if (func_ov002_021aa11c(o + 0x190, 5)) {
            *out += *(uint32_t *)(o + 0x204) << 12;
        }
        if (func_ov002_021aa11c(o + 0x190, 9)) {
            *out += *(uint32_t *)(o + 0x224) << 12;
        }
    }

    if (func_ov002_021aab20(obj)) {
        uint32_t h;
        void *m;
        uint32_t t1;
        uint32_t t2;

        func_02015e8c(&loc, data_020b8e44);
        h = *(uint16_t *)(*(uint8_t **)(o + 0x138) + 0x54);
        m = func_02052d90(loc.mar, loc.idx);
        t1 = func_020817c8(*(int32_t *)((uint8_t *)m + 0x6c), h << 12);
        t2 = func_020817c8(t1, 0x19a);
        *out = func_020817c8(*out, t2);

        if (loc.mar != 0) {
            if (loc.flag != 0) {
                func_02052d3c(loc.mar, loc.idx);
            }
            func_02052c04(loc.mar);
        }
        func_02053290(&loc);
    }

    if (*out < 0x1000) {
        *out = 0x1000;
    }
}
