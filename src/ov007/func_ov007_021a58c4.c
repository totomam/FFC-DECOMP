#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201cf34(void *a, void *b);
extern void func_020849c4(void *a, void *b, uint32_t c);
extern void *func_0206c270(void *a);
extern void *func_0206d7f4(void *a, uint16_t b, void *c);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a, b; } P;
extern P data_ov007_021c42e8;

void func_ov007_021a58c4(uint8_t *self) {
    uint32_t x;
    uint32_t t[5];
    uint8_t buf[0x98];
    void *q;
    void *r;
    uint8_t *obj;

    func_0201cf34(data_020b93b8, buf);
    x = 2;
    func_020849c4(buf, t, 0x12);
    q = func_0206c270(*(void **)(self + 0xc0));
    r = func_0206d7f4(*(void **)(self + 0xc0), *(uint16_t *)(self + 0xc4), &x);
    obj = self + 0x14;
    func_02056bc0(obj, r);
    func_02056bc0(obj, q);
    *(P *)(self + 0xb8) = data_ov007_021c42e8;
}
