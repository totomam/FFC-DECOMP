#include "ffc/types.h"

#define FLD(p, off, T) (*(T *)((uint8_t *)(p) + (off)))

typedef struct {
    uint32_t flag : 1;
    uint32_t x;
    uint32_t ptr;
} Str;

extern void func_02056bc0(void *object, void *node);
extern void func_020559d4(void *object);
extern uint32_t func_0206cdf0(uint32_t a, uint32_t b);
extern void func_020095b8(void *dst, void *src);
extern void func_020511e8(void *dst, void *src);
extern void func_ov013_021c0f68(void *obj, uint32_t idx, void *out);
extern void *func_0200a678(void *object);
extern void *func_020059cc(void *object);
extern uint32_t func_ov013_021c10cc(void *obj, uint32_t idx);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *dst, void *src);
extern uint32_t func_02030f9c(void *first, void *second, uint32_t third);
extern void func_02005f3c(void *obj, uint32_t idx, uint32_t n, void *data);
extern void func_020394a4(void *dst, void *src);
extern void func_0200b65c(void *a, void *b);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
typedef struct { uint32_t a, b; } Pair;
extern uint32_t func_02032d24(void *a, Pair sz, void *d, uint32_t e, uint32_t f);
extern uint32_t func_ov013_021c1160(void *obj);

extern uint32_t data_ov013_021c4b88[2];
extern uint32_t data_ov013_021c4b90[2];
extern void *data_020b8e44;
extern uint32_t data_ov013_021c4b7c[1];
extern uint32_t data_ov013_021c4b80[1];
extern uint32_t data_ov013_021c4b84[1];
extern uint32_t data_ov013_021c4b98[2];
extern uint32_t data_ov013_021c4ba0[2];
extern uint32_t data_ov013_021c4ba8[2];


#define COPY_B8(src)                         \
    do {                                     \
        Pair _pr = *(Pair *)(src);           \
        *(Pair *)(p + 0xb8) = _pr;           \
    } while (0)

void func_ov013_021c18a0(uint8_t *p)
{
    Str t58, t4c, t40, t34, t28, t1c, t10;
    uint8_t t64[0x100];

    if (FLD(p, 0xcc, uint32_t) == 0) {
        uint32_t v = func_0206cdf0(FLD(p, 0xc8, uint32_t),
                                   (uint16_t)FLD(p, 0x100, uint32_t));
        func_02056bc0(p + 0x14, (void *)v);
        func_020559d4(p + 0x80);
        if (FLD(p, 0xf8, uint32_t) == 0) {
            COPY_B8(data_ov013_021c4b88);
        } else {
            COPY_B8(data_ov013_021c4b90);
        }
        return;
    }

    func_020095b8(&t40, p + 0x104);
    func_020511e8(&t34, &t40);
    func_ov013_021c0f68(FLD(p, 0xec, void *), FLD(p, 0x100, uint32_t) - 1, &t34);
    func_0200a678(&t34);
    func_020059cc(&t40);
    func_020559d4(p + 0x80);

    if (func_ov013_021c10cc(FLD(p, 0xec, void *), FLD(p, 0x100, uint32_t) - 1) == 0) {
        func_020095b8(&t58, p + 0x104);
        {
            uint32_t r4 = func_020159c8(data_020b8e44, 0x1ba);
            uint32_t a, b;
            func_02005988(&t4c, (void *)r4);
            a = func_02030f9c(&t4c, data_ov013_021c4b7c, 0);
            b = func_02030f9c(&t4c, data_ov013_021c4b80, 0);
            if (a != 0xffffffff && b != 0xffffffff && a < b) {
                func_02005f3c(&t4c, a, 2, data_ov013_021c4b84);
                func_020095b8(&t28, &t58);
                func_020394a4(&t1c, &t28);
                func_0200b65c(&t58, &t1c);
                func_020059cc(&t1c);
                func_020059cc(&t28);
            }
        }

        {
            uint32_t s2 = !t58.flag ? (uint32_t)((uint8_t *)&t58 + 1) : t58.ptr;
            uint32_t s1 = !t4c.flag ? (uint32_t)((uint8_t *)&t4c + 1) : t4c.ptr;
            func_02091b10(t64, s1, s2);
        }
        func_020059cc(&t4c);
        func_020059cc(&t58);

        {
            uint32_t r7 = 0;
            uint32_t done = 0;
            void *r6 = func_0205681c(0xb0);
            Pair arr;
            uint32_t res;
            if (r6 != 0) {
                func_02005988(&t10, t64);
                arr.a = 0x80;
                arr.b = 0x60;
                res = func_02032d24(r6, arr, &t10, 4, r7);
                r6 = (void *)res;
                done = 1;
            }
            func_02056bc0(p + 0x14, r6);
            if (done != 0) {
                func_020059cc(&t10);
            }
        }

        COPY_B8(data_ov013_021c4b98);
        return;
    }

    {
        uint32_t c = func_ov013_021c1160(FLD(p, 0xec, void *));
        if (c >= 3) {
            COPY_B8(data_ov013_021c4ba0);
        } else {
            COPY_B8(data_ov013_021c4ba8);
        }
    }
}
