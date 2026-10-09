#ifndef FFC_NONLEAF_H
#define FFC_NONLEAF_H

#include "ffc/types.h"

typedef struct {
    uint8_t value_00;
} FfcByteValue;

typedef struct {
    uint32_t value_00;
} FfcWordValue;

typedef struct {
    uint32_t value_00;
    uint32_t value_04;
} FfcWordPair;

uint32_t ffc_arm9_02086b20(void *object, uint32_t first, uint32_t second, uint32_t third);
uint32_t ffc_arm9_0207eee4(void *object);
uint16_t ffc_arm9_02088a2c(void *object);
void *ffc_arm9_02035e30(void *object);
void *ffc_arm9_020903cc(void *object);
void *ffc_arm9_02081210(void *object);
void *ffc_arm9_0206c030(void *object);
void *ffc_arm9_0200d750(void *object);
void *ffc_arm9_02053f00(void *object);
uint32_t ffc_arm9_0205db1c(const void *object);
uint32_t ffc_arm9_0205db2c(const void *object);
uint32_t ffc_arm9_0205fbb8(void *object, uint32_t second, uint32_t third);
void *ffc_arm9_02060a54(void *object, uint32_t first, uint32_t second);
uint32_t ffc_arm9_02063558(const void *object);
uint32_t ffc_arm9_02063568(const void *object);
uint32_t ffc_arm9_02063578(const void *object);
void *ffc_arm9_02068334(void *object);
void *ffc_arm9_020691b0(void *object);
void *ffc_arm9_02060e6c(void *object, uint32_t value);
void ffc_arm9_02052024(void *object);
uint32_t ffc_arm9_020366d4(void *object);
uint32_t ffc_arm9_02052698(void *object);
void *ffc_arm9_02053290(void *object);
uint32_t ffc_arm9_02035ff4(void *object);
void *ffc_arm9_0205327c(void *destination, const void *source);
void *ffc_arm9_020059cc(void *object);
void *ffc_arm9_0200a678(void *object);
uint32_t ffc_arm9_0205db04(const void *object);
uint32_t ffc_arm9_0207cb04(void *object);
uint32_t ffc_arm9_02015a38(void);
uint32_t ffc_arm9_0203c23c(void);
uint32_t ffc_arm9_0203c250(void);
void *ffc_arm9_0205208c(void *object);
uint32_t ffc_arm9_02086af0(void *object, uint32_t second, uint32_t third);
void ffc_arm9_0207e4ac(void *object);
uint32_t ffc_arm9_02063588(const void *object, uint32_t index);
uint32_t ffc_arm9_0207ea98(void *object, uint32_t first, uint32_t second);
uint32_t ffc_arm9_0201e9a8(void *object);
uint32_t ffc_arm9_0203c01c(void *object);
uint32_t ffc_arm9_0203c030(void *object);
uint32_t ffc_arm9_0203c06c(void *object);
uint32_t ffc_arm9_0203c080(void *object);
void *ffc_arm9_02061720(void *object, uint32_t value);
void *ffc_arm9_0200d794(void *object);
void *ffc_arm9_02053d78(void *object);
void *ffc_arm9_02053f44(void *object);
void *ffc_arm9_02068378(void *object);
void *ffc_arm9_020691f4(void *object);
uint32_t ffc_arm9_020363bc(const void *object);
uint32_t ffc_arm9_020363d8(const void *object);
uint32_t ffc_arm9_02035eb8(const void *object);
uint32_t ffc_arm9_02035ed8(const void *object);
uint32_t ffc_arm9_020522a8(void *object, uint32_t first, uint32_t second);
void ffc_arm9_02060b30(void *object);
void *ffc_arm9_02061504(void *object, uint32_t value);
void *ffc_arm9_020617f4(void *object);
void ffc_arm9_0205db7c(int32_t *output, const void *descriptor);
uint32_t ffc_arm9_0207e5d0(void *object, uint32_t first, uint32_t second);
void ffc_arm9_020692a4(void *object);
void *ffc_arm9_02015ba4(void *unused, uint32_t index);
void *ffc_arm9_02015c98(void *unused, uint32_t index);
void *ffc_arm9_02017714(void *unused, const uint8_t *index);
uint32_t ffc_arm9_02036134(const void *object);
void ffc_arm9_020375f4(uint32_t mask);
void *ffc_arm9_02037f40(void *object);
uint32_t ffc_arm9_02037f98(void *object, uint32_t value);
uint32_t ffc_arm9_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
uint32_t ffc_arm9_0205fc5c(void *object, uint32_t first, uint32_t second, uint32_t third, uint32_t fourth);
void *ffc_arm9_0205ff14(void *object, uint32_t index, uint32_t third);
uint32_t ffc_arm9_020098e0(void);
void ffc_arm9_02009574(void *object, uint32_t value);
void ffc_arm9_0200d5d4(void *object, uint32_t value);
void ffc_arm9_02053d60(void *object, uint32_t value);
void ffc_arm9_02065740(void *object, uint32_t value);
void ffc_arm9_02067f84(void *object, uint32_t value);
void ffc_arm9_02069024(void *object, uint32_t value);
void ffc_arm9_020161cc(void *object);
void ffc_arm9_0201762c(void *object);
void ffc_arm9_02019c78(void *object);
uint32_t ffc_arm9_02058228(void);
uint32_t ffc_arm9_0205fb50(void);
uint32_t ffc_arm9_0208b52c(void *object);
uint32_t ffc_arm9_0208b5a4(void *object, uint32_t value);
void *ffc_arm9_02056b10(void *owner);
void *ffc_arm9_02062a30(void *owner);
void ffc_arm9_02005d8c(void *object);
void *ffc_arm9_02005d3c(void *object);
void *ffc_arm9_02009928(void *object);
void *ffc_arm9_020659f8(void *object);
void *ffc_arm9_02065ca4(void *object);
uint32_t ffc_arm9_02005f1c(void *object, uint32_t third);
uint32_t ffc_arm9_0201a3a0(void *object, const void *third);
uint32_t ffc_arm9_02008f2c(void *object, FfcWordValue value);
void *ffc_arm9_0205323c(void *object);
void *ffc_arm9_02035fd0(void *object);
uint32_t ffc_arm9_0208f42c(void);
uint32_t ffc_arm9_02062884(void *object);
void ffc_arm9_020867dc(uint32_t value);
uint32_t ffc_arm9_0206c184(uint32_t first, uint32_t second);
uint32_t ffc_arm9_02087260(uint32_t value);
void ffc_arm9_020870a0(void *object);
void ffc_arm9_020528d0(void);
uint32_t ffc_arm9_0205fa1c(uint32_t first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth);
void ffc_arm9_0207da90(void);
uint32_t ffc_arm9_02030f9c(uint32_t first, uint32_t second, uint32_t third);
uint32_t ffc_arm9_020356d8(uint32_t index, void *object);
void *ffc_arm9_020358c8(void *object);
void ffc_arm9_02056bc0(void *object, void *node);
void ffc_arm9_0201506c(void *object, void *const *source, uint32_t value);
uint32_t ffc_arm9_02064390(void *object, uint32_t first, uint32_t second);
uint32_t ffc_arm9_0206687c(void *object, uint32_t first, uint32_t second);
uint32_t ffc_arm9_02005efc(void *object, uint32_t first, ...);
uint32_t ffc_arm9_02086ad4(void *object, uint32_t first, ...);
uint32_t ffc_arm9_02091b10(void *object, uint32_t first, ...);
void *ffc_arm9_02053260(void *object, ...);
void ffc_arm9_02069288(void *object);
void ffc_arm9_02084800(void);
void ffc_arm9_0204f474(void);
void *ffc_arm9_020578c0(void *object, uint32_t value);
void ffc_arm9_0207fe54(void *object);
void ffc_arm9_0208b6e4(uint32_t value);
void ffc_arm9_0208bbd0(void *node);
void *ffc_arm9_02035e10(void *object);
void *ffc_arm9_020548b4(void *object, uint32_t first, uint32_t second);
void ffc_arm9_0209cc90(void);
void ffc_arm9_020886bc(void *node);
uint32_t ffc_arm9_0207e96c(void *object, uint32_t second, uint32_t third,
                           uint32_t fourth, uint32_t fifth);
uint32_t ffc_arm9_0207e990(void *object, uint32_t second, uint32_t third, ...);
void ffc_arm9_02032dd0(void *object, uint32_t second, uint32_t third,
                       uint32_t fourth, uint32_t fifth, uint32_t sixth, ...);
void *ffc_arm9_02069210(void *object);
void *ffc_arm9_0205ffac(void *object, uint32_t index, uint32_t third);
void *ffc_arm9_020487a0(void *container, void *position);
uint32_t ffc_arm9_0208b4a4(uint32_t first, uint32_t second, uint32_t third,
                           uint32_t fourth, uint32_t fifth);
void *ffc_arm9_02057148(void *object, int32_t second, uint32_t third,
                        uint32_t fourth);

#endif
