#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Blk12;

extern uint8_t *data_ov000_02170060;
extern int func_ov000_02155234(void *p);
extern void func_ov000_0215509c(void *a, uint32_t b, void *c);
extern uint64_t func_ov000_02154de4(void *p);
extern int func_ov000_02155220(void *p);
extern int func_ov000_021551d0(void *p);
extern void func_ov000_02155154(void *p);
extern uint64_t func_020882cc(void);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void func_ov000_02154e2c(void *p, uint32_t hi, uint32_t lo);
extern void func_ov000_02155ebc(void *a, void *b, uint64_t c, void *d, void *e);
extern void func_ov000_0215917c(void);
extern void func_ov000_021591a8(void);

#define GP(off) (*(uint8_t **)(data_ov000_02170060 + (off)))

void func_ov000_0215a864(void)
{
    uint64_t v = 0;

    if (func_ov000_02155234(GP(0x1c)) != 0) {
        func_ov000_0215509c(GP(0x1c) + 0x10, *(uint32_t *)(GP(0x1c) + 0x24), data_ov000_02170060 + 0x248);
        v = func_ov000_02154de4(GP(0x1c) + 0x10);
    } else {
        if (func_ov000_02155220(data_ov000_02170060 + 0x3c) == 0) {
            if (func_ov000_021551d0(GP(0x1c) + 4) != 0) {
                *(Blk12 *)(data_ov000_02170060 + 0x3c) = *(Blk12 *)(GP(0x1c) + 4);
            } else {
                func_ov000_02155154(data_ov000_02170060 + 0x3c);
            }
        } else {
            uint64_t t = func_0209a71c(func_020882cc(), 0x5d588b656c078965ULL) + 0x269ec3;
            func_ov000_02154e2c(data_ov000_02170060 + 0x3c, (uint32_t)(t >> 32), (uint32_t)t);
        }
        func_ov000_0215509c(data_ov000_02170060 + 0x3c, *(uint32_t *)(data_ov000_02170060 + 0xc), data_ov000_02170060 + 0x248);
        v = 0;
    }
    func_ov000_02155ebc(*(void **)(data_ov000_02170060 + 0x10), data_ov000_02170060 + 0x251, v,
                        (void *)func_ov000_0215917c, (void *)func_ov000_021591a8);
}
