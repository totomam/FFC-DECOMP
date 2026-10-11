#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t flag;
} S;

extern void func_ov000_02158cf4(S *p);

uint64_t func_ov000_02156004(void)
{
    S s;
    func_ov000_02158cf4(&s);
    if (s.flag != 0) {
        return *(uint64_t *)&s.a;
    }
    return *(uint64_t *)&s.c;
}
