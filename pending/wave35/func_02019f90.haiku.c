#include "ffc/types.h"

extern uint8_t *func_02017700(void *a, int b, int c, int d, int e);

typedef struct {
    uint8_t pad[8];
    uint32_t count;
    uint32_t off;
} Header;

typedef struct {
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t rest[9];
} Entry;

int func_02019f90(void *p0, int p1, int p2, int p3) {
    int found = -1;
    Header *h = (Header *)func_02017700(p0, -1, p2, p3, found);
    Entry *base = (Entry *)((uint8_t *)h + h->off);
    uint32_t i;
    for (i = 0; i < h->count; i++) {
        if (p1 == base[i].b && p2 == base[i].c) {
            found = i;
        }
    }
    if (found == -1) {
        return 0;
    }
    return found + 1;
}
