#include "ffc/types.h"

extern uint32_t data_ov007_021c7834[];
extern uint32_t data_ov007_021c783c[];

void func_ov007_021bab14(uint8_t *p) {
    switch (*(uint32_t *)(p + 0xc0)) {
    case 0:
        *(uint32_t *)(p + 0xb0) = data_ov007_021c7834[0];
        *(uint32_t *)(p + 0xb4) = data_ov007_021c7834[1];
        break;
    case 1:
        *(uint16_t *)(p + 0x38b4) = 0;
        *(uint32_t *)(p + 0xb0) = data_ov007_021c783c[0];
        *(uint32_t *)(p + 0xb4) = data_ov007_021c783c[1];
        break;
    }
}
