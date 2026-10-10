#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov001_0217ca70(uint32_t, void *, Pair *);
extern void func_ov001_0217caa0(void);

uint32_t func_ov001_0217cacc(uint32_t p0, uint32_t p1)
{
    Pair s;
    s.a = p1;
    s.b = 0;
    func_ov001_0217ca70(p0, (void *)func_ov001_0217caa0, &s);
    return s.b;
}
