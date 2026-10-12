#include "ffc/types.h"

extern int func_ov001_02186d30(uint32_t *p);
extern int func_ov001_02188170(uint32_t *p);
extern int func_ov001_02188348(uint32_t *p);

int func_ov001_02188428(uint32_t *p) {
    func_ov001_02186d30(p);
    switch (*p) {
    case 2:
    case 3:
        return func_ov001_02188170(p);
    case 0:
        return func_ov001_02188348(p);
    case 1:
    default:
        return 0;
    }
}
