#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void *func_020655dc(void *obj, uint32_t a, uint32_t b);
extern void *func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void *func_02056aec(void *obj);
extern void *func_0203b708(uint32_t x);
extern const uint32_t data_ov007_021c6a04[];

void func_ov007_021b6074(uint8_t *p)
{
    uint64_t sum;
    int32_t i;
    uint32_t off;
    void *r6;
    uint8_t *r4;
    void *node;
    uint64_t *dst;

    func_02021338(0xbc);
    r6 = func_020655dc(*(void **)(*(uint8_t **)(p + 0xc0) + 0x98), 4, 1);
    node = func_020655b8(*(void **)(*(uint8_t **)(p + 0xc0) + 0x98));
    r4 = p + 0x14;
    func_02056bc0(r4, node);
    func_02056bc0(r4, r6);

    sum = 0;
    off = 0x12d;
    for (i = 0; i < 10; i++) {
        int32_t b;
        sum = func_0209a71c(sum, 10);
        b = *(uint8_t *)(p + data_ov007_021c6a04[i] + off);
        sum += b;
    }
    dst = *(uint64_t **)(p + 0x138);
    *dst = sum;

    r6 = func_02056aec(p);
    node = func_0203b708(0x1e);
    r4 = p + 0x14;
    func_02056bc0(r4, node);
    func_02056bc0(r4, r6);
}
