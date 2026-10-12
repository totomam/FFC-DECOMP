#include "ffc/types.h"
extern uint8_t *func_02017700(void *a, int b, int c, int d);
typedef struct { uint8_t pad[8]; volatile uint32_t count; uint32_t off; } Header;
int func_02019f90(void *p0, int p1, int p2, int p3) {
    int found = -1;
    Header *h = (Header *)func_02017700(p0, -1, p2, p3);
    uint32_t i;
    for (i = 0; i < h->count; i++) {
        uint8_t *e = (uint8_t *)h + h->off + i * 12;
        if (p1 == e[1] && p2 == e[2]) {
            found = i;
        }
    }
    if (found == -1) return 0;
    return found + 1;
}
