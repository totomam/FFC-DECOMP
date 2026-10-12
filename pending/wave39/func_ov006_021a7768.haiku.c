#include "ffc/types.h"

typedef struct {
    uint8_t a;
    uint8_t b;
    uint8_t pad[6];
    uint32_t *obj;
} S;

extern S data_ov006_021bc748;
extern void func_ov006_021a77f8(void);
extern void func_ov006_021a3e78(int x);
extern void func_ov006_021b0cdc(int x);
extern void func_ov006_021a3aa0(int a, int b, int c);
extern uint32_t *func_ov006_021b3e6c(int a, int b);
extern void func_ov006_021a3d68(uint16_t a, uint16_t b, uint16_t c, uint16_t d);
extern void func_ov006_021a64c8(void *f);
extern void func_ov006_021a78fc(void);
extern uint16_t data_ov006_021b8520[];
extern uint16_t data_ov006_021b8522[];
extern uint16_t data_ov006_021b8524[];
extern uint16_t data_ov006_021b8526[];

void func_ov006_021a7768(void)
{
    uint32_t *o;
    uint32_t i;

    data_ov006_021bc748.b = 0;
    func_ov006_021a77f8();
    func_ov006_021a3e78(0x10);
    func_ov006_021b0cdc(3);
    func_ov006_021a3aa0(0x39, -1, 0);
    o = func_ov006_021b3e6c(0, 0x5b);
    data_ov006_021bc748.obj = o;
    o[0] = (o[0] & 0xfe00ff00) | 0x00e00084;
    ((uint16_t *)data_ov006_021bc748.obj)[2] = (((uint16_t *)data_ov006_021bc748.obj)[2] & 0xfffff3ff) | (3 << 10);
    i = data_ov006_021bc748.a;
    func_ov006_021a3d68(data_ov006_021b8520[i * 4], data_ov006_021b8524[i * 4], data_ov006_021b8522[i * 4], data_ov006_021b8526[i * 4]);
    func_ov006_021a64c8(func_ov006_021a78fc);
}
