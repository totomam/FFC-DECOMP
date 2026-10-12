#include "ffc/types.h"

extern void func_ov001_0218085c(uint8_t *buf, int len, uint16_t arg);
extern int func_ov001_021803b0(uint8_t *self, uint8_t *buf, int len);
extern uint16_t data_ov001_02191a24;

typedef struct { uint16_t hdr; uint8_t buf[10]; } S;

int func_ov001_02181a30(uint8_t *p) {
    S st;
    uint8_t *b;
    uint8_t *e;
    int n = 0;

    if (*(int32_t *)(*(uint8_t **)(p + 8) + 0x40) == 2) {
        uint8_t *s;
        uint8_t *d;
        st.hdr = 5;
        d = st.buf;
        s = (uint8_t *)&st;
        d[0] = s[0];
        n += 2;
        d[1] = s[1];
    }
    b = st.buf;
    e = b + n;
    {uint8_t *src = (uint8_t *)&data_ov001_02191a24; e[0] = src[0]; e[1] = src[1];}
    b[n + 2] = 100;
    func_ov001_0218085c(b, n + 3, *(uint16_t *)(p + 0x66));
    if (func_ov001_021803b0(p, b, n + 5) == 0) return 0;
    *(uint32_t *)(p + 0x90) = 0;
    return 1;
}
