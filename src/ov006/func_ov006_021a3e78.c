#include "ffc/types.h"

extern void *func_ov006_021a3b48(uint32_t idx);
extern void *func_ov006_021b3888(void *p, uint32_t a, uint32_t b);
extern void func_02084a58(void *dst, uint32_t src, uint32_t n);
extern void func_ov006_021b392c(void *p);
extern void func_ov006_021b570c(uint32_t a, void *fn, uint32_t b, uint32_t c);
extern uint32_t data_ov006_021b8e70[];
extern uint32_t data_ov006_021bc6f4;
extern void func_ov006_021a3ee0(void);

void func_ov006_021a3e78(uint32_t idx)
{
    void *p;
    p = func_ov006_021b3888(func_ov006_021a3b48(data_ov006_021b8e70[idx]), 0, 4);
    func_02084a58(p, data_ov006_021bc6f4, 0xc0);
    func_ov006_021b392c(p);
    func_ov006_021b570c(1, func_ov006_021a3ee0, 0, 0x78);
}
