#include "ffc/types.h"

extern int32_t func_ov000_0215b594(void);
extern uint8_t *func_ov000_02163350(void);
extern void func_ov001_02184030(uint32_t);

void func_ov000_0215dc60(void)
{
    if (func_ov000_0215b594() == 3) {
        func_ov000_02163350()[0x17] = 0;
        *(uint32_t *)(func_ov000_02163350() + 0x790) = 0;
        func_ov001_02184030(*(uint32_t *)(func_ov000_02163350() + 0x10));
    }
}
