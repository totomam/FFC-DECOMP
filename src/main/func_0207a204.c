#include "ffc/types.h"

extern void func_02089c40(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_0208bbe4(void *p);
extern void func_0208bbfc(void *p);

typedef struct {
    uint8_t pad0[0x2c];
    uint32_t flags;
    uint8_t pad1[0x48 - 0x30];
    uint32_t shift;
    void *ptr;
} S;

void func_0207a204(S *s) {
    func_02089c40(s->ptr, 0, 1u << s->shift, 0);
    if (((int32_t)(s->flags << 30) >> 31) == 0) {
        func_0208bbe4((uint8_t *)s + 8);
        func_0208bbfc((uint8_t *)s + 0x18);
        s->flags = 2 | s->flags;
    }
}
