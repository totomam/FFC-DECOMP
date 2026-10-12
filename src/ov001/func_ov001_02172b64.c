#include "ffc/types.h"

typedef struct {
    int32_t pad[3];
    int32_t c;
} Obj;

extern void *data_ov001_02194bf8;
extern char data_ov001_0218f4ec[];
extern char data_ov001_0218f544[];
extern char data_ov001_0218f638[];
extern char data_ov001_0218f4c2[];
extern char data_ov001_0218f5ac[];

extern int32_t func_02092948(void *a, void *b);
extern void func_ov000_021652a8(int32_t a, int32_t b, int32_t c, void *d, ...);
extern int32_t func_ov001_0217281c(void *a);
extern int32_t func_ov001_0217299c(void);
extern int32_t func_ov000_0216888c(void *obj, int32_t *p, void *f, int32_t z, int32_t one);
extern void *func_ov000_0216876c(void *obj, int32_t id);
extern void func_ov000_02168848(void *obj, int32_t id);
extern int32_t func_ov000_02168768(void *obj);
extern void func_ov000_02168738(void *obj);
extern void func_ov000_021653f4(int32_t v);

int32_t func_ov001_02172b64(void *a) {
    int32_t v[4];
    int32_t id;
    int32_t ret = 1;
    Obj *p;

    if (a == 0 || data_ov001_02194bf8 == 0 || func_02092948(a, data_ov001_0218f4ec) == 0) {
        func_ov000_021652a8(8, 4, 1, data_ov001_0218f638, data_ov001_0218f544, data_ov001_0218f4c2, 0x37b, a, data_ov001_02194bf8);
        return 0;
    }

    v[0] = func_ov001_0217281c(a);
    id = func_ov000_0216888c(data_ov001_02194bf8, v, func_ov001_0217299c, 0, 1);
    if (id == -1) {
        func_ov000_021652a8(8, 4, 1, data_ov001_0218f5ac, data_ov001_0218f544, data_ov001_0218f4c2, 0x38a, a);
        ret = 0;
    } else {
        p = (Obj *)func_ov000_0216876c(data_ov001_02194bf8, id);
        p->c = p->c - 1;
        if (p->c <= 0) {
            func_ov000_02168848(data_ov001_02194bf8, id);
            if (func_ov000_02168768(data_ov001_02194bf8) == 0) {
                func_ov000_02168738(data_ov001_02194bf8);
                data_ov001_02194bf8 = 0;
            }
        }
    }
    func_ov000_021653f4(v[0]);
    return ret;
}
