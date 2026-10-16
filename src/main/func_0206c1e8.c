/* cflags: -lang c++ */
#include "ffc/types.h"
struct D { uint32_t a; uint32_t cnt; };
extern "C" D data_0213e178;
struct Guard {
    uint32_t en;
    Guard() {
        volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
        uint16_t old = *ime;
        *ime = 0;
        en = (old != 0);
    }
    ~Guard() {
        volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
        (void)*ime;
        *ime = en;
    }
};
extern "C" void func_0206c1e8(uint8_t *p)
{
    Guard g;
    if (*p != 0) return;
    *p = 1;
    data_0213e178.cnt++;
}
