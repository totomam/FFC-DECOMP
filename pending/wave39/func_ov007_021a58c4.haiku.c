#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201cf34(void *a, void *b);
extern void func_020849c4(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void *func_0206c270(void *a);
extern void *func_0206d7f4(void *a, uint16_t b, void *c);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c42e8[2];

void func_ov007_021a58c4(uint8_t *self) {
    uint32_t t[2];
    uint8_t buf[0x98];
    void *q;
    void *r;
    uint8_t *obj;

    func_0201cf34(data_020b93b8, buf);
    func_020849c4(buf, &t[1], 0x12, 0, 2);
    q = func_0206c270(*(void **)(self + 0xc0));
    r = func_0206d7f4(*(void **)(self + 0xc0), *(uint16_t *)(self + 0xc4), &t[0]);
    obj = self + 0x14;
    func_02056bc0(obj, r);
    func_02056bc0(obj, q);
    *(uint32_t *)(self + 0xb8) = data_ov007_021c42e8[0];
    *(uint32_t *)(self + 0xbc) = data_ov007_021c42e8[1];
}
