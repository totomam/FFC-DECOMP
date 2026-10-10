#include "ffc/types.h"

extern uint8_t *func_ov006_021afd28(void);
extern void func_ov006_021a3e78(int32_t v);

void func_ov006_021a3eb8(void)
{
    uint8_t *p = func_ov006_021afd28();
    func_ov006_021a3e78(p[0xf4] + 5);
}
