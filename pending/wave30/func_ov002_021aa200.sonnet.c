#include "ffc/types.h"

extern uint32_t func_ov002_021aa1a0(const void *object, uint32_t index);
extern void func_ov002_021aa278(void *object, uint32_t index, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02019f90(void *p, uint32_t index, uint32_t n);
extern uint8_t *func_02017734(void *p, uint32_t v);
extern void func_ov002_021aa29c(void *object, uint32_t index);
extern void *data_020b8e44;

void func_ov002_021aa200(void *object, uint32_t index, uint32_t flag)
{
    if (flag != 0 && index == 3) {
        if (func_ov002_021aa1a0(object, index)) {
            uint8_t *p;
            uint32_t r;
            func_ov002_021aa278(object, index, 0, 2, 1);
            r = func_02019f90(data_020b8e44, index, 2);
            p = func_02017734(data_020b8e44, r);
            *(uint32_t *)((uint8_t *)object + index * 8 + 0x4c) = p[5];
            *(uint32_t *)((uint8_t *)object + index * 8 + 0x50) = p[6];
            return;
        }
    }
    func_ov002_021aa29c(object, index);
}
