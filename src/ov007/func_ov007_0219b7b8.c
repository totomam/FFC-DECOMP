#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_02032d7c(void *obj, uint32_t id, Pair p, void *buf, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *func_02056aec(void *object);

extern void *data_020b8e44;
extern void *data_0213df18;

void func_ov007_0219b7b8(uint8_t *self)
{
    uint32_t buf1[3];
    uint32_t buf2[3];
    Pair p1;
    Pair p2;
    void *r6;
    int r4;

    if (*(uint32_t *)(self + 0xdc) == 2) {
        return;
    }
    if (*(uint32_t *)(self + 0xdc) == 1) {
        **(uint32_t **)(self + 0xb8) = 1;

        r4 = 0;
        r6 = func_0205681c(0xb0);
        if (r6 != 0) {
            func_02005988(buf1, func_020159c8(data_020b8e44, 0xf6));
            p1.a = 0x80;
            p1.b = 0x60;
            r4 = 1;
            r6 = func_02032d7c(r6, func_0204f7ec(data_0213df18), p1, buf1, 4, 0);
        }
        func_02056bc0(self + 0x14, r6);
        if (r4 != 0) {
            func_020059cc(buf1);
        }

        r4 = 0;
        r6 = func_0205681c(0xb0);
        if (r6 != 0) {
            func_02005988(buf2, func_020159c8(data_020b8e44, 0xf7));
            p2.a = 0x80;
            p2.b = 0x60;
            r4 = 1;
            r6 = func_02032d7c(r6, func_0204f7ec(data_0213df18), p2, buf2, 4, 0);
        }
        func_02056bc0(self + 0x14, r6);
        if (r4 != 0) {
            func_020059cc(buf2);
        }
    }
    func_02056bc0(self + 0x14, func_02056aec(self));
}
