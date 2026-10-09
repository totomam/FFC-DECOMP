#include "ffc/overlay_02.h"
#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))
extern uint32_t func_ov002_021acf84(const void *object);
extern uint32_t func_ov002_021ac9f0(uint32_t first, uint32_t second);
extern void func_02091a24(const void *message);
extern void func_0208f42c(void);
extern uint32_t func_ov002_021aaab0(const void *object);
extern uint32_t func_ov002_021ad008(void *object, uint32_t index, uint32_t value);
extern uint32_t func_ov002_021ad084(void *object);

void *func_ov002_021d2b7c(const void *object, uint32_t index) {
    if (index >= CONST_FIELD(uint32_t, object, 4)) {
        func_02091a24((const void *)0x021D78C4);
        func_0208f42c();
    }
    return (uint8_t *)(uintptr_t)CONST_FIELD(uint32_t, object, 0) + index * 8;
}
