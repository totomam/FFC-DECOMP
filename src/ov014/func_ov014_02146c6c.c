/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);
extern uint32_t func_0207eae0(void *object, uint32_t first, uint32_t second);

typedef struct {
    uint32_t f0;
    uint32_t f1;
    uint32_t size;
    void *ptr;
    uint8_t flag;
} Obj;

uint32_t func_ov014_02146c6c(Obj *p, uint32_t a1, uint32_t a2)
{
    uint32_t aligned = p->size & 0xFFFFFE00;
    uint32_t rem = p->size - aligned;
    uint32_t n = a2 + rem;
    if (n & 0x1FF) {
        n = (n & 0xFFFFFE00) + 0x200;
    }
    func_0207ea98(p->ptr, aligned, 0);
    if (func_0207eae0(p->ptr, a1, n) == (uint32_t)-1) {
        return 0;
    }
    p->size = p->size + a2;
    p->flag = 1;
    return rem;
}
