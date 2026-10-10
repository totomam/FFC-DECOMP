#include "ffc/types.h"

extern int func_0207fa84(void *p, uint32_t *out);
extern int func_0207e0f4(void *p, int a, int b, uint32_t c, uint32_t d);

typedef struct {
    uint8_t pad[0x10];
    uint32_t *ptr;
} Ctx;

uint32_t func_0207ea30(void *p)
{
    uint32_t result = 0;

    if (func_0207fa84(p, &result) == 0) {
        uint32_t v = 0;
        ((Ctx *)p)->ptr = &v;
        if (func_0207e0f4(p, 15, 1, 0, v) != 0) {
            result = v;
        }
    }
    return result;
}
