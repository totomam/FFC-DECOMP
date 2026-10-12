#include "ffc/types.h"

typedef struct {
    int8_t flag;
    uint8_t pad[3];
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    void (*f10)(void);
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    void (*f20)(void);
    uint32_t f24;
} FfcState;

extern FfcState data_0213e210;
extern uint8_t data_0213e220[];
extern uint8_t data_0213e230[];

extern void func_02089e3c(void);
extern void func_0208bbe4(void *p);
extern void func_0208bbfc(void *p);
extern void func_02079828(void);
extern void func_0207a404(void);
extern void func_02079b7c(void);
extern void func_02079760(void);
extern void func_02079788(void);

void func_020796e8(void) {
    if (data_0213e210.fc != 0) {
        return;
    }
    data_0213e210.fc = 1;
    func_02089e3c();
    data_0213e210.f10 = func_02079760;
    data_0213e210.f14 = 0;
    data_0213e210.f20 = func_02079788;
    data_0213e210.f24 = 0;
    func_0208bbe4(data_0213e220);
    func_0208bbfc(data_0213e230);
    func_02079828();
    func_0207a404();
    func_02079b7c();
    data_0213e210.flag = -1;
    data_0213e210.f4 = 1;
}
