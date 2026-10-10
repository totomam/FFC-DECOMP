#include "ffc/types.h"

void func_ov000_0214ec34(uint32_t *head, uint8_t *obj) {
    *(uint32_t *)(obj + 0xb8) = *head;
    *head = (uint32_t)obj;
}
