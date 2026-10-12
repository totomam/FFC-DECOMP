#include "ffc/types.h"

typedef struct { uint8_t v; } B;
extern void func_ov009_021a90c0(void *a, void *b, void *c, B d);

void func_ov009_021ad3f0(uint8_t *a, uint32_t idx)
{
    B f;
    switch (idx) {
    case 0:
        if (a + 0x184 == a + 0x190) break;
        f.v = 0;
        func_ov009_021a90c0(a + 0x184, *(uint8_t **)(a + 0x190), *(uint8_t **)(a + 0x190) + *(uint32_t *)(a + 0x194) * 4, f);
        break;
    case 1:
        if (a + 0x184 == a + 0x19c) break;
        f.v = 0;
        func_ov009_021a90c0(a + 0x184, *(uint8_t **)(a + 0x19c), *(uint8_t **)(a + 0x19c) + *(uint32_t *)(a + 0x1a0) * 4, f);
        break;
    case 2:
        if (a + 0x184 == a + 0x1a8) break;
        f.v = 0;
        func_ov009_021a90c0(a + 0x184, *(uint8_t **)(a + 0x1a8), *(uint8_t **)(a + 0x1a8) + *(uint32_t *)(a + 0x1ac) * 4, f);
        break;
    case 3:
        if (a + 0x184 == a + 0x1b4) break;
        f.v = 0;
        func_ov009_021a90c0(a + 0x184, *(uint8_t **)(a + 0x1b4), *(uint8_t **)(a + 0x1b4) + *(uint32_t *)(a + 0x1b8) * 4, f);
        break;
    case 4:
        if (a + 0x184 == a + 0x1c0) break;
        f.v = 0;
        func_ov009_021a90c0(a + 0x184, *(uint8_t **)(a + 0x1c0), *(uint8_t **)(a + 0x1c0) + *(uint32_t *)(a + 0x1c4) * 4, f);
        break;
    default: break;
    }
}
