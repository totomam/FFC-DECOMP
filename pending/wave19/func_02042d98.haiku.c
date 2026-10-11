#include "ffc/types.h"

extern void func_020427ac(void *out, void *base, void *args);
extern void func_02042dbc(void *self, void *out);

typedef struct {
    uint8_t *self;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Args;

void func_02042d98(Args s)
{
    uint32_t loc[4];

    func_020427ac(loc, s.self + 0x90, &s.b);
    func_02042dbc(s.self, loc);
}
