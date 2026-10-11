#include "ffc/types.h"

extern int func_02087460(void);

typedef struct {
    uint8_t pad[0x10];
    uint8_t flag;
} S;

uint8_t func_02088be0(void) {
    if (func_02087460()) {
        return ((S *)(*(uint32_t *)0x2fffdfc))->flag;
    }
    return 0;
}
