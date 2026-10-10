#include "ffc/types.h"

extern void func_ov000_02160818(void);
extern uint8_t *func_ov000_02163350(void);

void func_ov000_02160898(void)
{
    func_ov000_02160818();
    uint8_t *p = func_ov000_02163350();
    p[0x62f] = 0;
}
