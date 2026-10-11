#include "ffc/types.h"

typedef struct { uint32_t x, y; } V;
extern V data_ov007_021c7834;
extern V data_ov007_021c783c;
typedef struct { uint8_t pad[0xb0]; V v; uint32_t gap[2]; uint32_t mode; } O;

void func_ov007_021bab14(O *p) {
    switch (p->mode) {
    case 0:
        p->v = data_ov007_021c7834;
        break;
    case 1:
        *(uint16_t *)((uint8_t *)p + 0x38b4) = 0;
        p->v = data_ov007_021c783c;
        break;
    }
}
