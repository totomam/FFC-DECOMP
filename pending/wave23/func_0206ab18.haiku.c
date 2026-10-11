#include "ffc/types.h"

extern void *data_0213e164[];
extern void func_0206a8c4(void *a, void *b);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);

void func_0206ab18(uint8_t *p) {
    uint8_t *q;
    uint32_t idx = *(uint32_t *)(p + 0x30);
    func_0206a8c4(data_0213e164[idx], p);
    q = p + 0x18;
    func_0208763c(q);
    p[0x35] = 1;
    func_02087678(q);
}
