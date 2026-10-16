#include "ffc/types.h"
typedef struct { uint32_t a:8; uint32_t b:2; uint32_t c:22; uint16_t h; uint16_t p; } E;
void func_0205fe18(uint8_t *o) {
    E *e = *(E**)(o + 4);
    uint32_t n = *(uint32_t*)(o + 0x10);
    if (n != 0) {
        do {
            uint32_t z = 0;
            e->h = z;
            *(uint32_t*)e = z;
            e->b = 2;
            n--;
            e++;
        } while (n != 0);
    }
}
