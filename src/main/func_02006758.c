#include "ffc/types.h"

extern void func_02007924(void *p);
extern void func_02007a0c(void *p, uint32_t a, uint32_t b);
extern void func_020079f4(void *p);

void func_02006758(uint8_t *self) {
    void *obj = self + 0x31d8;
    func_02007924(obj);
    func_02007a0c(obj, *(uint32_t *)(self + 0xc), 0);
    func_020079f4(obj);
}
