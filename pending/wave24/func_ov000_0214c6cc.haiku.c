#include "ffc/types.h"

extern void func_ov000_0214c698(uint16_t *a, uint16_t *b, int c);

void func_ov000_0214c6cc(uint16_t *p, int n) {
    int i;
    for (i = 0; i < n; i++) {
        p[i] = ~p[i];
    }
    func_ov000_0214c698(p, p, 1);
}
