#include "ffc/types.h"
extern void func_020427ac(uint32_t *out, uint32_t *self, uint32_t key);
extern void func_02044180(uint32_t *out, uint32_t *self);
int func_02042780(uint32_t *self, uint32_t key) {
    uint32_t *s[3];
    func_020427ac((uint32_t*)&s[2], self, key);
    if (s[2] == (self + 1)) return 0;
    func_02044180((uint32_t*)&s[1], self);
    return 1;
}
