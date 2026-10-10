#include "ffc/types.h"

typedef void (*fn_t)(void);
typedef struct {
    uint8_t pad[0x28];
    fn_t fn;
} S;

extern S data_ov000_0216e21c;

void func_ov000_02150218(void) {
    fn_t f = data_ov000_0216e21c.fn;
    if (f != 0) {
        f();
    }
}
