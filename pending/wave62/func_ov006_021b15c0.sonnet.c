#include "ffc/types.h"
typedef struct S { uint8_t pad[0x14]; uint32_t f14; uint16_t f18; uint8_t pad2; int8_t f1b; } S;
extern S *data_ov006_021bc7f8;
extern void func_ov006_021b5774(int);
extern uint32_t func_ov006_021b570c(int, void*, int, int);
extern void func_ov006_021b17d4(void);
void func_ov006_021b15c0(int a)
{
    data_ov006_021bc7f8->f1b = -1;
    data_ov006_021bc7f8->f18++;
    if (data_ov006_021bc7f8->f18 >= 0x78) {
        func_ov006_021b5774(0);
        data_ov006_021bc7f8->f14 = func_ov006_021b570c(1, (void*)func_ov006_021b17d4, 0, 0x78);
    }
}
