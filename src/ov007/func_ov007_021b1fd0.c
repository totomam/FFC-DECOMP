#include "ffc/types.h"

extern void func_ov007_021ae63c(uint32_t arg);
typedef struct { uint32_t a, b; } S;
extern S data_ov007_021c5f8c;

void func_ov007_021b1fd0(uint8_t *p)
{
    func_ov007_021ae63c(0x0);
    *(S *)(p + 0xb0) = data_ov007_021c5f8c;
}
