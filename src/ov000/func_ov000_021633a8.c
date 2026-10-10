#include "ffc/types.h"

extern void *func_ov000_02163350(void *object);

uint8_t func_ov000_021633a8(void *object) {
    return *(uint8_t *)((uint8_t *)func_ov000_02163350(object) + 0x16);
}
