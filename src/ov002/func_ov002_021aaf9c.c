#include "ffc/overlay_02.h"
#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))
extern uint32_t func_ov002_021acf84(const void *object);
extern uint32_t func_ov002_021ac9f0(uint32_t first, uint32_t second);
extern void func_02091a24(const void *message);
extern void func_0208f42c(void);
extern uint32_t func_ov002_021aaab0(const void *object);
extern uint32_t func_ov002_021ad008(void *object, uint32_t index, uint32_t value);
extern uint32_t func_ov002_021ad084(void *object);

uint32_t func_ov002_021aaf9c(void *object, uint32_t index) {
    if (index < func_ov002_021acf84(object)) {
        return func_ov002_021ad008(object, index, 0);
    }
    return func_ov002_021ad084(object);
}
