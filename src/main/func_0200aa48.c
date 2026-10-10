#include "ffc/types.h"

typedef struct { uint8_t v; } C1;

extern void func_0200a82c(void *obj, int zero, uint32_t idx, uint32_t a, uint32_t b, C1 c);

typedef struct { uint32_t f : 1; uint32_t rest : 31; } W;
typedef struct { uint8_t f : 1; uint8_t idx : 7; } B;

void func_0200aa48(void *obj, uint32_t a, uint32_t b) {
    volatile C1 buf;
    uint32_t idx;
    if (((W *)obj)->f == 0) {
        idx = ((B *)obj)->idx;
    } else {
        idx = ((uint32_t *)obj)[1];
    }
    func_0200a82c(obj, 0, idx, a, b, *(C1 *)&buf);
}
