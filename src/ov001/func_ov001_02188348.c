#include "ffc/types.h"

extern uint32_t func_ov000_02165704(uint32_t h);
extern int32_t func_ov000_021654f8(uint32_t h, uint8_t *buf, uint32_t n, uint32_t z, uint32_t *px, uint32_t *ps);
extern int32_t func_ov001_02186c70(uint8_t *p, uint32_t v, uint16_t hw);
extern uint32_t func_ov001_0218636c(uint8_t *p, uint32_t v, uint16_t hw);
extern uint32_t func_ov001_021863e8(void);
extern void func_ov001_021863d0(uint32_t a, uint32_t b);
extern void func_ov001_02186c10(uint8_t *p, uint32_t c);
extern uint32_t func_ov000_0216591c(void);
extern void func_ov000_02165428(uint32_t h);
extern uint32_t data_ov001_02195758;

int32_t func_ov001_02188348(uint8_t *p) {
    struct { uint32_t a; uint32_t b; uint32_t v; } s;
    uint8_t buf[0x5db];
    uint32_t *w = (uint32_t *)p;
    int32_t r;
    uint32_t c;
    uint32_t t;

    s.a = 8;
    if (func_ov000_02165704(w[0x1ad])) {
        do {
            r = func_ov000_021654f8(w[0x1ad], buf, 0x5db, 0, &s.b, &s.a);
            if (r != -1) {
                if (func_ov001_02186c70(p, s.v, (*(uint16_t*)((uint8_t*)&s.a+6))) == -1) {
                    c = func_ov001_0218636c(p, s.v, (*(uint16_t*)((uint8_t*)&s.a+6)));
                    if (func_ov001_021863e8()) return 5;
                    func_ov001_021863d0(c, 0x11);
                    func_ov001_02186c10(p, c);
                }
            }
        } while (func_ov000_02165704(w[0x1ad]));
    }
    t = func_ov000_0216591c();
    if (t - w[0x1ae] > 0x7d0) {
        func_ov000_02165428(w[0x1ad]);
        w[0x1ad] = -1;
        w[0] = 1;
        {
            void (*fn)(uint8_t *, uint32_t, uint32_t, uint32_t) =
                (void (*)(uint8_t *, uint32_t, uint32_t, uint32_t))w[0x122];
            fn(p, 3, data_ov001_02195758, w[0x125]);
        }
    }
    return 0;
}
