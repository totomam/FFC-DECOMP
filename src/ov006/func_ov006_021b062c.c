#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e8;
extern int func_02079b04(void *a, void *b, void *c);

int func_ov006_021b062c(void *a, void *b)
{
    return func_02079b04((uint8_t *)data_ov006_021bc7e8 + 0xa0, a, b);
}
