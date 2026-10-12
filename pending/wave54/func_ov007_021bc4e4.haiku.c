#include "ffc/types.h"

typedef struct { uint32_t w; uint32_t h; } Size;
typedef struct { uint32_t a; uint32_t b; uint32_t c; } Pos;
typedef struct { uint32_t a; uint32_t b; } Pair;

extern int func_ov001_0218ddec(void *obj);
extern void func_ov001_0218dde0(int a, uint32_t b);
extern void func_02056c4c(void);
extern uint32_t func_0203c250(void);
extern uint32_t func_02060ef8(void);
extern void func_02056bc0(void *object, void *node);
extern int func_020744bc(void *obj);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(Pos *dst, void *v);
extern void *func_02032d24(void *obj, Size sz, Pos *pos, uint32_t a, uint32_t b);
extern void func_020059cc(Pos *object);
extern void func_02075ae4(void *obj);
extern void *data_020b8e44;
extern Pair data_ov007_021c81c4;
extern uint32_t func_02091b10(void *object, uint32_t first, ...);

void func_ov007_021bc4e4(uint8_t *self)
{
    Size sz;
    Pos pos;
    Size sz2;
    Pos pos2;
    void *r6;
    void *r7;
    int r4;

    if (func_ov001_0218ddec(self)) {
        func_ov001_0218dde0(func_ov001_0218ddec(self), 3);
        func_02056c4c();
    }
    func_0203c250();
    func_02056bc0(self + 0x14, (void *)func_02060ef8());

    if (func_020744bc(*(void **)(self + 0xb0))) {
        uint8_t *q = *(uint8_t **)(self + 0xc4);
        if (q) {
            *q = 1;
        }
        r4 = 0;
        r7 = func_0205681c(0xb0);
        if (r7) {
            void *v = func_020159c8(data_020b8e44, 0xb0 + 0x96);
            func_02005988(&pos, v);
            sz.w = 0x80;
            sz.h = 0x60;
            r4 = 1;
            r7 = func_02032d24(r7, sz, &pos, 4, 0);
        }
        func_02056bc0(self + 0x14, r7);
        if (r4) {
            func_020059cc(&pos);
        }
    } else {
        if (((int (*)(void *))(*(void ***)self)[10])(self)) {
            void *v = func_020159c8(data_020b8e44, 0x145);
            func_02091b10(self + 0xd0, v, -*(uint32_t *)(self + 0xb8));
            uint32_t z = 0;
            r4 = 0;
            r6 = func_0205681c(0xb0);
            if (r6) {
                func_02005988(&pos2, self + 0xd0);
                sz2.w = 0x80;
                sz2.h = 0x60;
                r4 = 1;
                r6 = func_02032d24(r6, sz2, &pos2, 4, z);
            }
            func_02056bc0(self + 0x14, r6);
            if (r4) {
                func_020059cc(&pos2);
            }
        }
    }

    {
        uint8_t *a = *(uint8_t **)data_020b8e44;
        func_02075ae4(*(void **)(a + 0x88));
    }
    *(uint32_t *)(self + 0xb8) = 0;
    *(uint32_t *)(self + 0xbc) = 0;
    *(Pair *)(self + 0xc8) = data_ov007_021c81c4;
}
