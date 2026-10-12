#include "ffc/types.h"

extern int32_t func_ov001_021809e4(void *p, uint32_t a, uint32_t b);
extern int32_t func_ov001_02180a44(void *p, uint32_t a, uint32_t b);
extern int32_t func_ov001_02180ab4(void *p, uint32_t a, uint32_t b);
extern int32_t func_ov001_02180b4c(void *p, uint32_t a, uint32_t b);
extern int32_t func_ov001_02180c08(void *p);
extern int32_t func_ov001_02180c3c(void *p, uint32_t a, uint32_t b);
extern int32_t func_ov001_02180c84(void *p);

int32_t func_ov001_02180cb4(uint8_t *p, uint32_t type, uint32_t a, uint32_t b)
{
    uint16_t n = *(uint16_t *)(p + 0x66);
    *(uint16_t *)(p + 0x66) = n + 1;

    if (type == 0) {
        if (func_ov001_021809e4(p, a, b) == 0) return 0;
    } else if (type == 1) {
        if (func_ov001_02180a44(p, a, b) == 0) return 0;
    } else if (type == 2) {
        if (func_ov001_02180ab4(p, a, b) == 0) return 0;
    } else if (type == 3) {
        if (func_ov001_02180b4c(p, a, b) == 0) return 0;
    } else if (type == 4) {
        if (func_ov001_02180c08(p) == 0) return 0;
    } else if (type == 5) {
        if (func_ov001_02180c3c(p, a, b) == 0) return 0;
    } else if (type == 6) {
        if (func_ov001_02180c84(p) == 0) return 0;
    }
    return 1;
}
