#include "ffc/types.h"

extern int func_ov002_021ad084(void *p);
extern uint8_t func_ov002_021a1e04(const void *object);

uint8_t func_ov002_021ab028(void *p)
{
    if (func_ov002_021ad084(p) == 0) {
        return 0;
    }
    return func_ov002_021a1e04(*(void **)((uint8_t *)p + 0xbc));
}
