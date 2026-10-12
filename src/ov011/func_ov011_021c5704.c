#include "ffc/types.h"

extern void func_ov011_021c5934(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

#define W(o) (*(uint32_t *)(p + (o)))

void func_ov011_021c5704(uint8_t *p)
{
    uint32_t state = *(uint8_t *)(p + 0x118);

    if (state > 5) {
        return;
    }
    if (state <= 2) {
        func_ov011_021c5934(p, W(0xbc), W(0xc0), W(0xc0), W(0xd4), W(0xd4));
        func_ov011_021c5934(p, W(0xc0), W(0xbc), W(0xbc), W(0xd4), W(0xbc));
    } else if (state == 3) {
        func_ov011_021c5934(p, W(0xbc), W(0xc0), W(0xc0), W(0xc4), W(0xc4));
        func_ov011_021c5934(p, W(0xc0), W(0xbc), W(0xbc), W(0xc4), W(0xbc));
        func_ov011_021c5934(p, W(0xc4), W(0xc0), W(0xd4), W(0xbc), W(0xbc));
    } else if (state == 4) {
        func_ov011_021c5934(p, W(0xbc), W(0xc0), W(0xc8), W(0xc4), W(0xc4));
        func_ov011_021c5934(p, W(0xc0), W(0xc8), W(0xbc), W(0xc4), W(0xbc));
        func_ov011_021c5934(p, W(0xc4), W(0xc0), W(0xd4), W(0xbc), W(0xbc));
        func_ov011_021c5934(p, W(0xc8), W(0xbc), W(0xc0), W(0xd4), W(0xd4));
    } else if (state == 5) {
        func_ov011_021c5934(p, W(0xbc), W(0xc0), W(0xc8), W(0xc4), W(0xc4));
        func_ov011_021c5934(p, W(0xc0), W(0xcc), W(0xbc), W(0xc4), W(0xbc));
        func_ov011_021c5934(p, W(0xc4), W(0xc0), W(0xcc), W(0xbc), W(0xbc));
        func_ov011_021c5934(p, W(0xc8), W(0xbc), W(0xc0), W(0xcc), W(0xd4));
        func_ov011_021c5934(p, W(0xcc), W(0xc4), W(0xc0), W(0xd4), W(0xc8));
    }
}
