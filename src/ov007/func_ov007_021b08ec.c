#include "ffc/types.h"
typedef struct { uint8_t pad[0x88]; void *obj; } In;
extern In **data_020b8e44;
extern uint8_t data_ov003_0218e711, data_ov003_0218e725;
extern void func_02075b24(void *a, uint32_t b, uint32_t c);
extern void func_02075b0c(void *a, uint32_t b, uint32_t c);
void func_ov007_021b08ec(uint32_t *p) {
    if ((*data_020b8e44)->obj != 0) {
        func_02075b24((*data_020b8e44)->obj, (uint32_t)&data_ov003_0218e711, 0);
        func_02075b0c((*data_020b8e44)->obj, (uint32_t)&data_ov003_0218e725, 0);
    }
    p[3] = (p[3] & ~0xff) | 2;
}
