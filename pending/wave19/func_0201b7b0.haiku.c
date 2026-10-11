#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint8_t data_020b93bc[];

typedef union {
    uint64_t v;
    struct {
        uint32_t lo;
        uint32_t hi;
    } s;
} U;

uint64_t func_0201b7b0(uint8_t *p) {
    U u;
    func_0208763c(data_020b93bc);
    u.s.lo = *(uint32_t *)(p + 0x98);
    u.s.hi = *(uint32_t *)(p + 0x9c);
    func_02087678(data_020b93bc);
    return u.v;
}
