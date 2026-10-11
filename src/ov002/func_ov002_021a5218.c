#include "ffc/types.h"

#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))

extern void func_02091a24(const void *message);
extern void func_0208f42c(void);
extern char data_ov002_021d522c[];

uint32_t *func_ov002_021a5218(const void *object, uint32_t index) {
    if (index >= CONST_FIELD(uint32_t, object, 4)) {
        func_02091a24(data_ov002_021d522c);
        func_0208f42c();
    }
    return (uint32_t *)(uintptr_t)CONST_FIELD(uint32_t, object, 0) + index;
}
