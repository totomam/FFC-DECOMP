#include "ffc/types.h"

extern uint32_t func_ov002_021aaa58(const void *object);
extern uint8_t func_ov002_021aab40(const void *object);
extern uint32_t func_ov002_021aa780(const void *object);
extern uint32_t func_ov002_021abd00(const void *object, uint32_t bit);
extern uint32_t func_020817c8(uint32_t first, uint32_t second);
extern void *func_02081210(uint32_t object, uint32_t second);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_ov002_021aab20(const void *object);
extern void func_02015e8c(void *dst, void *src);
extern uint32_t func_ov002_021aac08(const void *object);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern void *data_020b8e44;

typedef struct {
    uint8_t raw[0x7c];
    uint32_t pad0;
    void *mar;
    uint32_t index;
    uint8_t flag;
} FfcLocal;

void func_ov002_021ac198(uint32_t *out, void *obj)
{
    FfcLocal loc;
    uint32_t v;
    uint32_t t;
    uint32_t r6;
    int flag;
    uint32_t k;

    r6 = func_ov002_021aaa58(obj) << 12;
    *out = r6;

    if (func_ov002_021aab40(obj) != 8) {
        v = func_ov002_021aa780(obj);
        if (v == 0) {
            flag = 1;
        } else if ((v - 3) > 1) {
            flag = 0;
        } else {
            flag = 1;
        }
        if (flag) {
            t = func_ov002_021abd00(obj, 1);
            if (t != 0) {
                k = 0x19 << 14;
                t = func_020817c8(t << 12, r6);
                t = (uint32_t)func_02081210(t, k);
                *out += t;
            }
        }
        if (func_ov002_021aa11c((char *)obj + 0x190, 10)) {
            *out += *(uint32_t *)((char *)obj + 0x22c) << 12;
        }
        if (func_ov002_021aa11c((char *)obj + 0x190, 9)) {
            *out -= *(uint32_t *)((char *)obj + 0x228) << 12;
        }
    }

    if (func_ov002_021aab20(obj) != 0) {
        uint32_t w;
        uint32_t a;
        uint32_t b;
        void *p;
        func_02015e8c(&loc.pad0, data_020b8e44);
        k = 0x19a;
        w = *(uint16_t *)((char *)func_ov002_021aac08(obj) + 0x54);
        a = w << 12;
        p = func_02052d90(loc.mar, loc.index);
        a = func_020817c8(*(uint32_t *)((char *)p + 0x70), a);
        b = func_020817c8(a, k);
        *out = func_020817c8(*out, b);
        if (loc.mar != 0) {
            if (loc.flag) {
                func_02052d3c(loc.mar, loc.index);
            }
            func_02052c04(loc.mar);
        }
        func_02053290(&loc.pad0);
    }

    if (*out < (1 << 12)) {
        *out = 1 << 12;
    }
}
