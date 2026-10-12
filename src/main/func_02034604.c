#include "ffc/types.h"

extern void func_02054558(void *p);
extern void func_0208b004(void);
extern void func_0208b65c(uint32_t x);
extern void func_02087840(void);
extern void func_02034300(void *p, uint32_t x);
extern void func_020342d8(void *p);
extern void func_020544e4(void *p);
extern void func_02054a88(void *p);
extern void func_02056844(void *p);
extern char data_020ae304[];
extern char data_020ae324[];
extern char data_020ae338[];

void *func_02034604(void *self) {
    uint8_t *p = (uint8_t *)self;
    *(void **)(p + 0x00) = data_020ae304;
    *(void **)(p + 0x14) = data_020ae324;
    *(void **)(p + 0x20) = data_020ae338;
    func_02054558(p + 0x20);
    func_0208b004();
    func_0208b65c(0);
    func_02087840();
    func_02034300(self, 0);
    func_020342d8(self);
    func_020544e4(p + 0x20);
    func_02054a88(p + 0x14);
    func_02056844(self);
    return self;
}
