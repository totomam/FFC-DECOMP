#include "ffc/types.h"

extern uint8_t *data_0213e178;
extern int func_0206cb98(uint8_t *p);
extern void func_0208eae4(int a, int b);

void func_0206effc(void) {
    if (func_0206cb98(data_0213e178) == 0) {
        data_0213e178[0xf92] = 0;
        if (data_0213e178[0xf93] != 0) {
            func_0208eae4(0, 1);
        }
    }
}
