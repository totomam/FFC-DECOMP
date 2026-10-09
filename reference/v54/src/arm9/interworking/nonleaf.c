#include "ffc/nonleaf.h"

#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))

extern void *ffc_arm9_02084b2c(void *destination, uint32_t value, uint32_t size);
extern uint64_t ffc_arm9_0209a978(uint32_t first, uint32_t second);
extern uint32_t ffc_arm9_02088978(void);
extern void ffc_arm9_0208898c(uint32_t token);
extern uint32_t ffc_arm9_0206c090(uint32_t value);
extern void ffc_arm9_02086c78(uint32_t value);

void ffc_arm9_0207e4ac(void *object) {
    ffc_arm9_02084b2c(object, 0, 0x5C);
    FIELD(uint32_t, object, 0x10) = 0;
    FIELD(uint32_t, object, 0x0C) = 0;
}

uint32_t ffc_arm9_0206c184(uint32_t first, uint32_t second) {
    uint32_t masked = ffc_arm9_0206c090(first) & 0x7FFFFFFF;
    return (uint32_t)(ffc_arm9_0209a978(masked, second) >> 32);
}

uint32_t ffc_arm9_02087260(uint32_t value) {
    void *global = (void *)(uintptr_t)0x021414F4;
    uint32_t previous;
    uint32_t token = ffc_arm9_02088978();
    previous = FIELD(uint32_t, global, 0x28);
    FIELD(uint32_t, global, 0x28) = value;
    ffc_arm9_0208898c(token);
    return previous;
}

void ffc_arm9_020870a0(void *object) {
    uint32_t token = ffc_arm9_02088978();
    FIELD(uint32_t, object, 0x64) = 1;
    ffc_arm9_02086c78(1);
    ffc_arm9_0208898c(token);
}
