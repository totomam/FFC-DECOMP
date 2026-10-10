#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);

void *func_02017734(void *unused, uint32_t index) {
    const uint8_t *catalog = (const uint8_t *)(uintptr_t)0x020B8E70;
    uint8_t *entry;
    (void)unused;
    entry = func_02052d90(
        *(const void *const *)(catalog + 0x60),
        *(const uint32_t *)(catalog + 0x64));
    return entry + *(uint32_t *)(entry + 0x0C) + (index - 1) * 12;
}
