#include "ffc/types.h"

typedef struct {
    uint8_t a;
    uint8_t pad[7];
    uint8_t *p;
} S;

typedef struct {
    uint8_t b[4];
} B4;

extern B4 data_ov006_021b8714;
extern S data_ov006_021bc78c;

void func_ov006_021ac7d4(void)
{
    B4 buf;
    uint8_t *q;
    int i;

    buf = data_ov006_021b8714;

    for (i = 0; i < 4; i++) {
        if (data_ov006_021bc78c.a == buf.b[i]) {
            q = data_ov006_021bc78c.p + i;
            q[4] = 0x14;
            if (i & 1) {
                q = data_ov006_021bc78c.p + (i - 1);
                q[4] = 0;
                return;
            }
            q = data_ov006_021bc78c.p + (i + 1);
            q[4] = 0;
            return;
        }
    }
}
