#include "ffc/types.h"

extern uint32_t func_02057a18(void);
extern void func_02057a08(uint32_t *out);

typedef struct {
    uint8_t pad[0x14];
    uint16_t buf[0x4e0];
    int32_t rot;
    int32_t counter;
} S;

void func_0206be68(S *p) {
    uint32_t a[2];
    uint32_t x[2];
    int32_t crc = 0;
    int32_t old;

    crc ^= (uint16_t)~func_02057a18();

    func_02057a08(a);
    crc ^= (uint16_t)a[0];

    func_02057a08(x);
    crc ^= (x[1] & 0xff) << 8;

    if (p->rot != 0) {
        crc = (uint16_t)((crc >> p->rot) | (crc << (16 - p->rot)));
    }

    old = p->counter;
    p->buf[old] ^= crc;
    p->counter = old + 1;
    if (p->counter >= 0x4e0) {
        p->counter = 0;
        p->rot = (p->rot + 1) & 0xf;
    }
}
