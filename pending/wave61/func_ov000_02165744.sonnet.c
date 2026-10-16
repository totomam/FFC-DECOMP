#include "ffc/types.h"
typedef struct G { void *a,*b; void *p8, *pc; uint16_t h10, h12; void *p14, *p18; void *pad[4]; void *p2c, *p30; } G;
extern G data_ov000_02170af8;
extern uint8_t data_ov000_0216b41c[], data_ov000_02170b24[], data_ov000_02170b10[], data_ov000_02170b00[];
extern int func_ov000_0214e984(void);
extern void func_ov000_0214f1f4(int, void*);
void *func_ov000_02165744(void) {
    data_ov000_02170af8.p8 = data_ov000_0216b41c;
    data_ov000_02170af8.pc = &data_ov000_02170af8;
    data_ov000_02170af8.h10 = 2;
    data_ov000_02170af8.h12 = 0;
    data_ov000_02170af8.p14 = data_ov000_02170b24;
    data_ov000_02170af8.p18 = 0;
    func_ov000_0214f1f4(func_ov000_0214e984(), data_ov000_02170b10);
    if (data_ov000_02170af8.p18 == 0) return 0;
    data_ov000_02170af8.p2c = data_ov000_02170b10;
    data_ov000_02170af8.h12 = 4;
    data_ov000_02170af8.p30 = 0;
    return data_ov000_02170b00;
}
