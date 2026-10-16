/* cflags: -O0 */
#include "ffc/types.h"
typedef struct { uint32_t a, b, c; } S;
typedef void (*Fn)(S*);
extern void func_ov006_021a34e4(S*);
extern uint8_t data_ov006_021bb170[];
void func_ov006_021a3530(void) {
    S s;
    func_ov006_021a34e4(&s);
    (*(Fn*)(data_ov006_021bb170 + 0x7c))(&s);
}
