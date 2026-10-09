#include "ffc/types.h"

extern uint32_t func_020098e0(void);
extern void *func_0205681c(uint32_t size);
extern void func_02091a24(void *arg);
extern uint32_t func_0208f42c(void);
extern uint8_t data_ov003_02179bdc[];

typedef struct {
    void *ptr;
    uint32_t pad;
    uint32_t count;
} func_0200b704_s;

void func_ov003_02151158(func_0200b704_s *s, uint32_t n)
{
    void *p;

    if (n > 0x1fffffff) {
        func_020098e0();
    }
    p = func_0205681c(n << 3);
    if (p == 0) {
        func_02091a24(data_ov003_02179bdc);
        func_0208f42c();
    }
    s->ptr = p;
    s->count = n;
}
