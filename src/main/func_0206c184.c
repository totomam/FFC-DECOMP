#include "ffc/nonleaf.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
extern void *func_02084b2c(void *destination, uint32_t value, uint32_t size);
extern uint64_t func_0209a978(uint32_t first, uint32_t second);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t token);
extern uint32_t func_0206c090(uint32_t value);
extern void func_02086c78(uint32_t value);

uint32_t func_0206c184(uint32_t first, uint32_t second) {
    uint32_t masked = func_0206c090(first) & 0x7FFFFFFF;
    return (uint32_t)(func_0209a978(masked, second) >> 32);
}
