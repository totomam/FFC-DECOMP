#include "ffc/nonleaf.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
extern void *func_02084b2c(void *destination, uint32_t value, uint32_t size);
extern uint64_t func_0209a978(uint32_t first, uint32_t second);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t token);
extern uint32_t func_0206c090(uint32_t value);
extern void func_02086c78(uint32_t value);

void func_0207e4ac(void *object) {
    func_02084b2c(object, 0, 0x5C);
    FIELD(uint32_t, object, 0x10) = 0;
    FIELD(uint32_t, object, 0x0C) = 0;
}
