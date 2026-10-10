#include "ffc/types.h"

typedef void (*fn_t)(void);

typedef struct {
    fn_t fn;
} Vtbl;

typedef struct {
    uint32_t a;
    uint32_t b;
    Vtbl *obj;
} Holder;

extern Holder data_020b2cf8;

void func_020902d8(void)
{
    data_020b2cf8.obj->fn();
}
