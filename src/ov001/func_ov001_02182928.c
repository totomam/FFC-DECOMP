#include "ffc/types.h"

typedef struct {
    int32_t pad[5];
    int32_t v;
} S;

extern void func_ov000_0216591c(void);
extern void func_ov000_02165c2c(void);
extern int32_t func_ov000_02165c48(int32_t a, int32_t b);
extern S data_ov001_021952f0;

void func_ov001_02182928(void)
{
    if (data_ov001_021952f0.v == 0) {
        func_ov000_0216591c();
        func_ov000_02165c2c();
        data_ov001_021952f0.v = func_ov000_02165c48(1, 0x7fffffff);
    }
}
