#include "ffc/types.h"

typedef struct {
    uint32_t pad[5];
    uint32_t f14;
} Data;

extern Data data_ov001_021952f0;
extern void func_ov000_0216591c(void);
extern void func_ov000_02165c2c(void);
extern uint32_t func_ov000_02165c48(uint32_t a, uint32_t b);

void func_ov001_02182928(void)
{
    if (data_ov001_021952f0.f14 == 0) {
        func_ov000_0216591c();
        func_ov000_02165c2c();
        data_ov001_021952f0.f14 = func_ov000_02165c48(1, 0x7fffffff);
    }
}
