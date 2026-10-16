#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
extern uint32_t func_020698fc(uint32_t a, P p);
extern uint32_t func_020697ac(uint32_t a, uint32_t b);
uint32_t func_02069828(uint32_t a, uint32_t b, ...)
{
    return func_020697ac(a, func_020698fc(a, *(P*)&b));
}
