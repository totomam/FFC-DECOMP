#include "ffc/types.h"

extern void func_02056c4c(void *obj);
extern void func_0200a630(void *dst, void *src);
extern void func_02051248(void *dst, void *src);
extern void *func_0200a678(void *object);
extern void func_020095b8(void *dst, void *src);
extern void *data_020b8e44;
extern uint32_t func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *dst, uint32_t src);
extern uint32_t func_02030f9c(void *first, void *second, uint32_t third);
extern void func_02005f3c(void *dst, uint32_t idx, uint32_t n, void *tbl);
extern void func_020394a4(void *dst, void *src);
extern void func_0200b65c(void *dst, void *src);
extern void *func_020059cc(void *object);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void *func_02033338(void *obj, void *a, void *b, uint32_t c);
extern void func_02033438(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c4158[];
extern uint32_t data_ov007_021c415c[];
extern uint32_t data_ov007_021c4160[];
extern uint32_t data_ov007_021c41e8[];

typedef struct {
    uint32_t a : 1;
    uint32_t a2 : 31;
    uint32_t b;
    uint32_t c;
} Blk;

void func_ov007_021a4554(uint8_t *self)
{
    uint8_t s54[256];
    Blk s48, s3c, s30, s24, s18, s0c, s0;
    uint32_t a, b;
    uint32_t z = 0;
    void *obj;

    func_02056c4c(*(void **)(self + 0xc8));
    *(uint32_t *)(self + 0xe8) = 1;
    func_0200a630(&s24, self + 0xd4);
    func_02051248(&s48, &s24);
    func_0200a678(&s24);
    func_020095b8(&s3c, &s48);
    func_02005988(&s30, func_020159c8(data_020b8e44, 0x29));
    a = func_02030f9c(&s30, data_ov007_021c4158, z);
    b = func_02030f9c(&s30, data_ov007_021c415c, z);
    if (a != z - 1 && b != z - 1 && a < b) {
        func_02005f3c(&s30, a, 2, data_ov007_021c4160);
        func_020095b8(&s18, &s3c);
        func_020394a4(&s0c, &s18);
        func_0200b65c(&s3c, &s0c);
        func_020059cc(&s0c);
        func_020059cc(&s18);
    }

    {
        uint32_t r2, r1;
        if (s3c.a == 0) {
            r2 = (uint32_t)&s3c + 1;
        } else {
            r2 = s3c.c;
        }
        if (s30.a == 0) {
            r1 = (uint32_t)&s30 + 1;
        } else {
            r1 = s30.c;
        }
        func_02091b10(s54, r1, r2);
    }
    func_020059cc(&s30);
    func_020059cc(&s3c);

    uint32_t w = 0;
    uint32_t built = 0;
    obj = func_0205681c(0xb8);
    if (obj != 0) {
        func_02005988(&s0, (uint32_t)s54);
        built = 1;
        obj = func_02033338(obj, &s0, self + 0xe8, w);
    }
    if (built) func_020059cc(&s0);
    func_02033438(obj, 1);
    func_02056bc0(*(void **)(self + 0xc8), obj);

    {
        typedef struct { uint32_t p, q; } P;
        *(P *)(self + 0xb8) = *(P *)data_ov007_021c41e8;
    }
    func_020059cc(&s48);
}
