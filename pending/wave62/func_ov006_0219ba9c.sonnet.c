#include "ffc/types.h"
typedef struct { uint8_t pad[0xc]; uint8_t *p; } G;
extern G data_ov006_021ba150;
typedef void (*Fn)(int);
void func_ov006_0219ba9c(uint16_t *a)
{
    if (a[1] != 0) return;
    switch (a[2]) {
    case 7:
    case 0x19:
        return;
    case 8:
    case 9:
    case 0x1a:
        break;
    case 0x15:
        (*(Fn *)(data_ov006_021ba150.p + 0x51c))(9);
        break;
    }
}
