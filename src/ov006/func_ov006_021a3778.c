#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x19];
    uint8_t flag;
} Obj;

extern Obj *data_ov006_021bc6a8;

int func_ov006_021a3778(void)
{
    if (data_ov006_021bc6a8 == 0) {
        return 1;
    }
    if (data_ov006_021bc6a8->flag == 0) {
        return 1;
    }
    return 0;
}
