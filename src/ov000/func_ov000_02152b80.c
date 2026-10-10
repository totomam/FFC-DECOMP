#include "ffc/types.h"

typedef struct {
    uint8_t pad[10];
    uint8_t flag;
    uint8_t pad2;
    void *ptr;
} Obj;

extern Obj *func_ov000_02152ae4(int x);
extern uint8_t func_ov000_02152b68(void);

void func_ov000_02152b80(void *p) {
    Obj *obj = func_ov000_02152ae4(1);
    obj->ptr = p;
    obj->flag = func_ov000_02152b68();
}
