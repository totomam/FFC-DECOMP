#include "ffc/types.h"

extern int func_0207faac(void *p, uint32_t *out);
extern int func_0207e0f4(void *p, int a, int b);

typedef struct {
    uint8_t pad[0x10];
    uint32_t *ptr;
} Ctx;

uint32_t func_0207ea64(void *p)
{
    uint32_t result = 0;

    if (func_0207faac(p, &result) == 0) {
        uint32_t v;
        ((Ctx *)p)->ptr = &v;
        v = 0;
        if (func_0207e0f4(p, 16, 1) != 0) {
            result = v;
        }
    }
    return result;
}
