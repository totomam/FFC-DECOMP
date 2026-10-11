#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
} S;

extern S *data_ov000_02170004;
extern int func_ov000_02159014(int a, int b);
extern void *func_02084b2c(void *p, int c, uint32_t n);

int func_ov000_021581b8(void *(*alloc)(uint32_t, uint32_t), uint32_t val)
{
    if (data_ov000_02170004 != 0) {
        func_ov000_02159014(9, (int)0xffffa1dc);
        return 0;
    }
    data_ov000_02170004 = (S *)alloc(0, 0x1c5c);
    if (data_ov000_02170004 == 0) {
        func_ov000_02159014(9, (int)0xffffa1dc);
        return 0;
    }
    func_02084b2c(data_ov000_02170004, 0, 0x1c5c);
    data_ov000_02170004->f0 = (uint32_t)alloc;
    data_ov000_02170004->f4 = val;
    return 1;
}
