#include "ffc/types.h"

typedef struct {
    uint32_t pad[5];
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
} S;

extern S data_021407c0;

void func_0207cc74(void) {
    data_021407c0.f14 = 0xFFFFFFFDu;
    data_021407c0.f18 = 0;
    data_021407c0.f24 = 0;
    data_021407c0.f20 = 0;
    data_021407c0.f1c = 0;
}
