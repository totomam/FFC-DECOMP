#include "ffc/types.h"

extern void func_ov006_0219ceec(void);

typedef struct {
    uint32_t pad0;
    uint32_t f4;
    uint32_t pad8;
    uint32_t fc;
} S;

extern S data_ov006_021ba1dc;

void func_ov006_0219da1c(void)
{
    if (data_ov006_021ba1dc.fc != 0) {
        func_ov006_0219ceec();
        data_ov006_021ba1dc.fc = 0;
    }
    if (data_ov006_021ba1dc.f4 != 0) {
        func_ov006_0219ceec();
        data_ov006_021ba1dc.f4 = 0;
    }
}
