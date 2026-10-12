#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void func_02084a0c(uint32_t a, void *b, uint32_t c);
extern uint32_t func_ov006_021b3ed4(uint32_t a, void *b, uint32_t c);
extern uint32_t func_ov006_021b570c(uint32_t a, void *f, uint32_t b, uint32_t c);
extern void func_ov006_021b5138(void);
extern uint8_t *data_ov006_021bc848;

void func_ov006_021b50d4(void)
{
    int i;

    data_ov006_021bc848 = (uint8_t *)func_ov006_021b49e4(0x80c, 4);
    func_02084a0c(512, data_ov006_021bc848, 2048);
    for (i = 0; i < 2; i++) {
        *(uint32_t *)(data_ov006_021bc848 + 0x800 + i * 4) =
            func_ov006_021b3ed4(0x40, data_ov006_021bc848 + i * 1024, 8);
    }
    *(uint32_t *)(data_ov006_021bc848 + 0x808) =
        func_ov006_021b570c(1, (void *)func_ov006_021b5138, 0, 200);
}
