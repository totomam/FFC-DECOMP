#include "ffc/types.h"

extern uint8_t *func_02092a2c(uint8_t *text, uint32_t character);
extern uint8_t data_ov000_0216bb74[];

int func_ov000_02167440(void *unused, int8_t *text, int32_t len, int32_t *pos) {
    while (*pos < len) {
        if (func_02092a2c(data_ov000_0216bb74, text[*pos]) == 0) {
            return 1;
        }
        (*pos)++;
    }
    return 0;
}
