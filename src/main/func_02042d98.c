#include "ffc/types.h"
typedef struct { uint32_t a, b, c; } R;
extern void func_020427ac(void *out, void *base, void *args);
extern void func_02042dbc(void *self, void *out);
void func_02042d98(uint8_t *self, R r)
{
    uint32_t loc[1];
    func_020427ac(loc, self + 0x90, &r);
    func_02042dbc(self, loc);
}
