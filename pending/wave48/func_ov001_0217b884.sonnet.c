#include "ffc/types.h"

typedef struct {
    int32_t type;
    int32_t pad[6];
    int32_t result;
} Obj;

extern int32_t func_ov001_02179510(int32_t a, Obj *p);
extern int32_t func_ov001_0217c7a8(int32_t a, Obj *p);
extern int32_t func_ov001_0217c920(int32_t a, Obj *p);
extern int32_t func_ov001_0217a04c(int32_t a, Obj *p);
extern int32_t func_ov001_0217eb40(int32_t a, Obj *p);
extern int32_t func_ov001_0217ebdc(int32_t a, Obj *p);
extern int32_t func_ov000_021652a8(int32_t a, int32_t b, int32_t c, void *d, int32_t e);
extern char data_ov001_02190ee4[];

int32_t func_ov001_0217b884(int32_t a, Obj *p)
{
    int32_t r = 0;
    int32_t t = p->type;

    if ((uint32_t)t > 6) {
        goto bad;
    }
    switch (t) {
    case 0:
        r = func_ov001_02179510(a, p);
        break;
    case 1:
        r = func_ov001_0217c7a8(a, p);
        break;
    case 2:
        r = func_ov001_0217a04c(a, p);
        break;
    case 3:
        goto bad;
    case 4:
        r = func_ov001_0217eb40(a, p);
        break;
    case 5:
        r = func_ov001_0217c920(a, p);
        break;
    case 6:
        r = func_ov001_0217ebdc(a, p);
        break;
    default:
        break;
    }

    goto done;
bad:
    func_ov000_021652a8(1, 4, 1, data_ov001_02190ee4, t);
done:
    if (r != 0) {
        p->result = r;
    }
    return r;
}
