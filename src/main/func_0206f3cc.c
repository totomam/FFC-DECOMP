#include "ffc/types.h"

#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))

extern void func_02090398(void *destination, const void *source, uint32_t size);

void *func_0206f3cc(void *container, void *position) {
    uint8_t *end = (uint8_t *)(uintptr_t)CONST_FIELD(uint32_t, container, 0) +
                   CONST_FIELD(uint32_t, container, 4) * 8;
    int32_t count = ((int32_t)(end - (uint8_t *)position) / 8) - 1;
    func_02090398(position, (uint8_t *)position + 8, count * 8);
    FIELD(uint32_t, container, 4)--;
    return position;
}
