#include "ffc/types.h"

typedef struct Node {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    struct Node *f20;
} Node;

uint32_t func_ov001_0217b85c(uint8_t *p)
{
    Node *n = *(Node **)(*(uint8_t **)p + 0x5c4);
    while (n != 0) {
        if (n->f8 != 0) {
            if (n->f0 != 3) {
                return 1;
            }
        }
        n = n->f20;
    }
    return 0;
}
