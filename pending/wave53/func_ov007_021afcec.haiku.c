#include "ffc/types.h"

extern void func_02054254(void);
extern void func_020543b8(void);
extern void *func_02060634(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *object, uint32_t id);
extern void func_02005988(void *out, void *src);
extern void *func_02032d24(void *obj, uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void **data_0213df20;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c5a9c[2];

void func_ov007_021afcec(uint8_t *self) {
    void *first;
    uint32_t args[2];
    uint32_t obj[4];
    void *r7;
    void *second;
    uint32_t n;
    int flag;

    if (*(uint32_t *)(self + 0x90) == 0) {
        func_02054254();
        func_020543b8();
    }
    n = *(uint32_t *)(self + 0x90) + 1;
    *(uint32_t *)(self + 0x90) = n;
    if (n < 0x12c) {
        return;
    }
    flag = 0;
    first = func_02060634(*(void **)((uint8_t *)*data_0213df20 + 0x20), 8, 0, 0xa, 0, 0);
    r7 = func_0205681c(0xb0);
    if (r7 != 0) {
        args[0] = 0x80;
        args[1] = 0x60;
        func_02005988(obj, func_020159c8(data_020b8e44, 0xb0 + 0xaa));
        flag = 1;
        r7 = func_02032d24(r7, args[0], args[1], obj, 4, 0);
    }
    second = func_02060634(*(void **)((uint8_t *)*data_0213df20 + 0x20), 8, 0, 0xa, 0, 0);
    func_02056bc0(self + 0x14, second);
    func_02056bc0(self + 0x14, r7);
    func_02056bc0(self + 0x14, first);
    if (flag) {
        func_020059cc(obj);
    }
    *(uint32_t *)(self + 0x80) = data_ov007_021c5a9c[0];
    *(uint32_t *)(self + 0x84) = data_ov007_021c5a9c[1];
}
