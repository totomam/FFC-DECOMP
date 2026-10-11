#include "ffc/types.h"

struct Inner { uint32_t a; uint16_t h; };
struct Outer { uint32_t a; struct Inner *b; };

extern struct Outer data_ov000_0216e280;

int func_ov000_0215326c(void) {
    struct Inner *p = data_ov000_0216e280.b;
    if (p != 0 && p->h == 6) {
        return 1;
    }
    return 0;
}
