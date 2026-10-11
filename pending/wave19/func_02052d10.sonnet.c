/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_02052d10(uint8_t *p, int idx);
struct Ime {
    uint16_t old;
    Ime() { volatile uint16_t *r = (volatile uint16_t *)0x4000208; old = *r; *r = 0; }
    ~Ime() { volatile uint16_t *r = (volatile uint16_t *)0x4000208; (void)*r; *r = (old != 0) ? 1 : 0; }
};
extern "C" void func_02052d10(uint8_t *p, int idx) {
    Ime g;
    uint32_t *arr = *(uint32_t **)(p + 0x1c);
    arr[idx] += 1;
}
