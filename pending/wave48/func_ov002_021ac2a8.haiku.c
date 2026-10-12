#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Tmp;

extern uint32_t func_ov002_021aaa68(void *object);
extern uint8_t func_ov002_021aab40(const void *object);
extern uint32_t func_ov002_021aa780(const void *object);
extern uint32_t func_ov002_021abd00(void *object, uint32_t n);
extern int32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_02081210(int32_t first, int32_t second);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_ov002_021aab20(const void *object);
extern void func_02015e8c(void *dst, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

void func_ov002_021ac2a8(int32_t *out, void *obj)
{
    Tmp t;
    int32_t r6;
    int32_t k;
    uint32_t s;
    int cond;

    r6 = (int32_t)(func_ov002_021aaa68(obj) << 12);
    *out = r6;

    if (func_ov002_021aab40(obj) != 8) {
        s = func_ov002_021aa780(obj);
        if (s == 0 || (s - 3) <= 1) {
            cond = 1;
        } else {
            cond = 0;
        }
        if (cond) {
            uint32_t n = func_ov002_021abd00(obj, 2);
            if (n != 0) {
                int32_t p;
                k = 0x19 << 14;
                p = func_020817c8((int32_t)(n << 12), r6);
                *out += func_02081210(p, k);
            }
        }
        if (func_ov002_021aa11c((char *)obj + 0x190, 5) != 0) {
            uint32_t v = *(uint32_t *)((char *)obj + 0x208);
            int32_t sh = (int32_t)(v << 12);
            *out = *out - sh;
        }
    }

    if (func_ov002_021aab20(obj) != 0) {
        uint16_t h;
        void *p1;
        void *p2;
        uint32_t w;

        func_02015e8c(&t, data_020b8e44);
        p1 = *(void **)((char *)obj + 0x138);
        h = *(uint16_t *)((char *)p1 + 0x54);
        w = (uint32_t)h << 12;
        p2 = func_02052d90(t.mar, t.idx);
        {
            int32_t a = func_020817c8(*(int32_t *)((char *)p2 + 0x74), (int32_t)w);
            int32_t b = func_020817c8(a, 0x19a);
            *out = func_020817c8(*out, b);
        }
        if (t.mar != 0) {
            if (t.flag != 0) {
                func_02052d3c(t.mar, t.idx);
            }
            func_02052c04(t.mar);
        }
        func_02053290(&t);
    }

    if (*out < 0x1000) {
        *out = 0x1000;
    }
}
