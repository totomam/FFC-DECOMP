#include "ffc/types.h"

extern void func_ov002_021ac088(uint32_t *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_ov002_021ac198(uint32_t *p, uint32_t b);

void func_ov002_021ac5d4(uint32_t *out, uint32_t a1, uint32_t a2, uint32_t a3)
{
    uint32_t buf[4];
    uint32_t y;

    func_ov002_021ac088(&buf[3], a1, a2, a3);
    if (a3 == 6) {
        y = 0;
    } else {
        func_ov002_021ac198(&buf[1], a2);
        y = buf[1];
    }
    *out = buf[3] - y;
}
