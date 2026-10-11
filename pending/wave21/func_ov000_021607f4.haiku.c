#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int func_ov000_02163a84(void);
extern void func_ov000_02160898(void);
extern void func_ov000_02160818(void);

void func_ov000_021607f4(void) {
    uint8_t *p = func_ov000_02163350();
    p[0x5f9] = 0;
    if (func_ov000_02163a84() != 0) {
        func_ov000_02160898();
        return;
    }
    func_ov000_02160818();
}
