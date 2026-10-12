#include "ffc/types.h"

typedef struct {
    uint8_t f0;
    uint8_t _p[11];
    uint32_t f0c;
    uint32_t f10;
} G;

typedef struct {
    uint16_t f0;
    uint16_t f2;
    uint16_t f4;
    uint16_t f6;
} Q;

extern G data_0213e0b8;
extern void func_0208ac20(Q *buf, uint32_t *p);

void func_02057848(uint8_t *a, uint32_t *b)
{
    Q buf;
    uint8_t v;

    func_0208ac20(&buf, b);
    if (buf.f4 != 0) {
        if (buf.f6 == 0) {
            data_0213e0b8.f0c = buf.f0;
            data_0213e0b8.f10 = buf.f2;
        } else if (data_0213e0b8.f0 == 0) {
            buf.f4 = 0;
        }
    }
    v = 1;
    if (buf.f4 == 0) {
        v = 0;
    }
    data_0213e0b8.f0 = v;
    *a = data_0213e0b8.f0;
    b[0] = data_0213e0b8.f0c;
    b[1] = data_0213e0b8.f10;
}
