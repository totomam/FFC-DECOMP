#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void func_02035f58(void *p);
extern void *data_020b93b8;
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern void func_0201f460(const void *object, uint32_t index, void *output);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov009_021ad6ac(void *self, uint32_t x, void *out);
extern uint32_t func_ov011_021c0574(void *self, void *p, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov011_021c049c(void *self, void *p, uint32_t a, uint32_t b);
extern void *func_02056aec(void *node);
extern void *func_0203b72c(void);
extern uint32_t func_02036360(const void *object);
extern uint32_t func_02036388(const void *object);
extern uint32_t func_0203639c(const void *object);
extern void func_02036a10(void *object, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0201f1a8(void *object, uint8_t index, void *output);
extern uint32_t func_ov011_021c02a8(void *self, uint32_t a, uint32_t b);
extern void *func_02035fd0(void *object);
extern uint32_t data_ov011_021cb10c[2];

void func_ov011_021c037c(uint8_t *self, uint32_t a1, uint32_t a2)
{
    uint8_t local[0x60];
    void *obj;
    uint32_t r;
    uint32_t n;
    uint32_t *dst;
    uint64_t r64;

    obj = func_0203b6fc();
    func_02035f58(local);

    if (self[0x27a] == 2) {
        func_0201f36c(data_020b93b8, ((uint32_t *)(*(void **)(self + 0x184)))[a1], local);
    } else if (self[0x27a] == 3) {
        func_0201f460(data_020b93b8, ((uint32_t *)(*(void **)(self + 0x1cc)))[a1], local);
    } else if (self[0x27a] == 1) {
        r64 = func_0209a76c(a1, 10);
        func_ov009_021ad6ac(self, (uint32_t)(r64 >> 32), local);
    }

    self[0x27a] = 0;
    r = func_ov011_021c0574(self, self + 0x220, a2);
    func_02056bc0(obj, (void *)r);
    r = func_ov011_021c049c(self, local, a1, a2);
    func_02056bc0(obj, (void *)r);

    n = (uint32_t)func_02056aec(*(void **)(self + 0x174));
    r = (uint32_t)func_0203b72c();
    dst = (uint32_t *)(self + 0x14);
    func_02056bc0(dst, (void *)r);
    func_02056bc0(dst, obj);
    func_02056bc0(dst, (void *)n);

    {
        uint32_t p = func_02036360(local);
        uint32_t q = func_02036388(local);
        uint32_t s = func_0203639c(local);
        func_02036a10(self + 0x220, a2, p, q, s);
    }

    func_0201f1a8(data_020b93b8, self[0x2c9], self + 0x220);

    r = func_ov011_021c02a8(self, data_ov011_021cb10c[0], data_ov011_021cb10c[1]);
    func_02056bc0(self + 0x14, (void *)r);
    func_02035fd0(local);
}
