#include "ffc/types.h"

extern void func_020766fc(void *object);
extern uint8_t data_ov001_02194af0[];

#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))

void *func_ov001_0218ebcc(void *object) {
    func_020766fc(object);
    FIELD(void *, object, 0) = data_ov001_02194af0;
    FIELD(uint32_t, object, 0x8c) = 0;
    return object;
}
