#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_020696e8(const void *object);
extern void func_02069300(uint32_t x);

typedef struct {
    uint8_t pad[0x12];
    uint8_t flag;
} Inner;

void func_ov011_021c596c(uint8_t *param_1)
{
    Inner *r4 = (Inner *)(param_1 + 0x14);
    uint8_t r7 = r4->flag;
    uint8_t *r6 = (uint8_t *)r4 + 0x1c;
    int r4v;

    if (r7 != 0) {
        func_0208763c(r6);
    }
    r4v = (*(uint32_t *)((uint8_t *)r4 + 0x14) == 0);
    if (r7 != 0) {
        func_02087678(r6);
    }
    if (r4v) {
        uint32_t *o = (uint32_t *)func_020696e8(param_1);
        if ((o[1] & (o[1] ^ o[2])) & 2) {
            func_02069300(*(uint32_t *)(param_1 + 0xd4));
        }
    }
}
