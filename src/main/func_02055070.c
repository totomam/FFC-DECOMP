/* cflags: -lang c++ */
#include "ffc/types.h"
struct G { uint16_t old; G() { volatile uint16_t *r=(volatile uint16_t*)0x4000208; old=*r; *r=0; } ~G() { volatile uint16_t *r=(volatile uint16_t*)0x4000208; (void)*r; r=(volatile uint16_t*)0x4000208; *r = (old!=0)?1:0; } };
extern "C" void func_02055070(uint32_t *p) {
    G g;
    p[0x5f] += 1;
}
