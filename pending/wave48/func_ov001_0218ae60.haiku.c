#include "ffc/types.h"

extern void func_02037544(void *self);
extern void func_0200a630(void *dst, void *src);
extern void func_02051248(void *a, void *b);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);
extern void *func_0200a678(void *object);
extern void *func_0202157c(uint32_t a, uint32_t b);
extern uint32_t func_0203b708(uint32_t a);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021ada88(void *a, void *b, uint8_t *c, uint8_t d);
extern void *func_ov001_0218dde0(void *self, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov001_02194670[];

void *func_ov001_0218ae60(void *self0)
{
    uint8_t *self = (uint8_t *)self0;
    uint8_t frame[0x38];
    uint32_t i;
    uint32_t idx;
    uint32_t sp0;
    void *r4;
    void *r6;
    void *r7;

    func_02037544(self);
    *(uint32_t *)(self + 0x6c4) = 1;
    ((void (*)(void *))(*(void ***)self)[0x48 / 4])(self);

    for (i = 0; i < 2; i++) {
        uint8_t *q = self + i * 0x2d8;
        q[0x107] = 0;
        q[0x108] = 0;
    }

    idx = (((uint32_t (*)(void *))(*(void ***)self)[0x38 / 4])(self) + 1) & 1;

    for (i = 0; i < 3; i++) {
        *(uint32_t *)(frame + 0x28 + i * 4) = 0;
    }

    *(uint8_t *)(frame + 0x1c) = (*(uint32_t *)(self + 0x6b4) == 0) ? 1 : 0;
    *(uint32_t *)(frame + 0x20) = *(uint32_t *)(self + 0x6bc);
    *(uint32_t *)(frame + 0x24) = *(uint32_t *)(self + 0x6c0);

    func_0200a630(frame + 0x10, self + 0x10c + idx * 0x2d8);
    func_02051248(frame + 4, frame + 0x10);
    func_0200b65c(frame + 0x28, frame + 4);
    func_020059cc(frame + 4);
    func_0200a678(frame + 0x10);

    *(uint32_t *)(frame + 0x34) = *(uint32_t *)(self + 0xe8);

    r7 = func_0202157c(self[0xec] ? 0x73 : 0x72, 0);
    sp0 = func_0203b708(0x1e);

    r6 = func_0205681c(0xbc);
    if (r6 != 0) {
        r6 = func_ov007_021ada88(r6, self + 0x6c4, frame + 0x1c, self[0xec]);
    }

    r4 = func_ov001_0218dde0(self, 1);
    func_02056bc0(r4, r6);
    func_02056bc0(r4, (void *)(uintptr_t)sp0);
    func_02056bc0(r4, r7);

    *(uint32_t *)(self + 0x6f4) = data_ov001_02194670[0];
    *(uint32_t *)(self + 0x6f8) = data_ov001_02194670[1];
    func_020059cc(frame + 0x28);
    return 0;
}
