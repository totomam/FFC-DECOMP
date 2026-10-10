#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S_ov003_0217a1e8;

extern S_ov003_0217a1e8 data_ov003_0217a1e8;
extern void func_ov003_0215b354(void *p, S_ov003_0217a1e8 s);

void func_ov003_0215b344(void *p)
{
    func_ov003_0215b354(p, data_ov003_0217a1e8);
}
