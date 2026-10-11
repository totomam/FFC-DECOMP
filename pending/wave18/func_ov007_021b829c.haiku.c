#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov001_0218dff4(void *p);
extern uint32_t data_ov007_021c6f74;
extern Pair data_ov007_021c710c;

void *func_ov007_021b829c(void *p)
{
    uint8_t *self = (uint8_t *)p;
    func_ov001_0218dff4(p);
    *(uint32_t **)self = &data_ov007_021c6f74;
    *(Pair *)(self + 0xb0) = data_ov007_021c710c;
    return p;
}
