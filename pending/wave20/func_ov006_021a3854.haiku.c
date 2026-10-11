#include "ffc/types.h"

typedef struct Obj {
    uint8_t pad[0x14];
    uint16_t cnt;
    int8_t flag;
} Obj;

extern Obj *data_ov006_021bc6a8;
extern void func_ov006_021a3884(void);
extern void func_ov006_021b5770(void *a, void (*fn)(void));

void func_ov006_021a3854(void *a) {
    int32_t m = 0;
    data_ov006_021bc6a8->flag = ~m;
    data_ov006_021bc6a8->cnt++;
    if (data_ov006_021bc6a8->cnt >= 4) {
        data_ov006_021bc6a8->cnt = 0;
        func_ov006_021b5770(a, func_ov006_021a3884);
    }
}
