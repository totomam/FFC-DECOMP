#include "ffc/nonleaf.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
extern void *func_02084b2c(void *destination, uint32_t value, uint32_t size);
extern uint64_t func_0209a978(uint32_t first, uint32_t second);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t token);
extern uint32_t func_0206c090(uint32_t value);
extern void func_02086c78(uint32_t value);

uint32_t func_02087260(uint32_t value) {
    void *global = (void *)(uintptr_t)0x021414F4;
    uint32_t previous;
    uint32_t token = func_02088978();
    previous = FIELD(uint32_t, global, 0x28);
    FIELD(uint32_t, global, 0x28) = value;
    func_0208898c(token);
    return previous;
}
