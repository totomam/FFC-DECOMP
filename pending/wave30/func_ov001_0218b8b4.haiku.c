#include "ffc/types.h"

extern void func_02015e8c(void *out, uint32_t handle);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t fc;
} Local;

void func_ov001_0218b8b4(uint8_t *self, uint8_t *out)
{
    Local m;
    Local *p = &m;

    *(uint32_t *)(out + 0x328) = *(uint32_t *)(self + 0x734);
    func_02015e8c(p, data_020b8e44);
    *(uint16_t *)(out + 0x318) = ((uint8_t *)func_02052d90(p->f4, p->f8))[0x13];
    if (p->f4 != 0) {
        if (p->fc != 0) {
            func_02052d3c(p->f4, p->f8);
        }
        func_02052c04(p->f4);
    }
    func_02053290(p);
}
