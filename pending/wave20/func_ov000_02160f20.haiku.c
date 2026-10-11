#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov001_021807e8(void *p);

void func_ov000_02160f20(void) {
    uint8_t *a = func_ov000_02163350();
    a[0x629] = 1;
    uint8_t *b = func_ov000_02163350();
    void **s = *(void ***)(b + 4);
    func_ov001_021807e8(*s);
    a = func_ov000_02163350();
    a[0x629] = 0;
}
