#include "ffc/types.h"

extern void func_ov006_0219ef6c(void *p, int v, int n);
extern uint16_t func_ov006_0219f038(int x);
extern uint32_t func_ov006_0219f010(uint32_t x);
extern int func_ov006_0219efe0(int a, int b, int c, int d, void *buf, int n);
extern uint32_t data_ov006_021ba1dc[];
extern int8_t data_ov006_021ba1fc[];

typedef struct {
    uint8_t pad0;
    uint8_t kind;
    uint16_t val;
    uint32_t res;
} S_ov006;

int func_ov006_0219eac0(int a, int b, int c, int d)
{
    S_ov006 s;

    func_ov006_0219ef6c(&s, 0, 8);
    s.kind = 2;
    s.val = func_ov006_0219f038(0x5790);
    s.res = func_ov006_0219f010(data_ov006_021ba1dc[0x34 / 4]);
    if (c == 0xff || data_ov006_021ba1fc[0x1c] == 0) {
        s.res = -1;
    }
    return func_ov006_0219efe0(d, a, b, 0, &s, 8);
}
