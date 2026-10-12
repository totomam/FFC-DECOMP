#include "ffc/types.h"

struct G {
    uint32_t pad;
    uint8_t *ptr;
};
extern struct G data_ov000_0216e294;
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_ov000_0215662c(void);
extern uint32_t func_02086fe4(void *p);
extern void func_02086fbc(void *p);

void func_ov000_02155670(void) {
    if (data_ov000_0216e294.ptr == 0) {
        return;
    }
    func_0208763c(data_ov000_0216e294.ptr + 0x13d8);
    *(uint32_t *)(data_ov000_0216e294.ptr + 0x13f0) = 1;
    func_02087678(data_ov000_0216e294.ptr + 0x13d8);
    if (*(uint32_t *)(data_ov000_0216e294.ptr + 0x1314) != 0) {
        func_ov000_0215662c();
    }
    if (*(uint32_t *)(data_ov000_0216e294.ptr + 0x1384) == 0) {
        return;
    }
    if (func_02086fe4(data_ov000_0216e294.ptr + 0x1318) != 0) {
        return;
    }
    func_02086fbc(data_ov000_0216e294.ptr + 0x1318);
}
