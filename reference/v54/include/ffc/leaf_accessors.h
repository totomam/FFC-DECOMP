#ifndef FFC_LEAF_ACCESSORS_H
#define FFC_LEAF_ACCESSORS_H

#include "ffc/types.h"

/* Address-based neutral names: behavior is known, ownership/semantics are not. */
void ffc_arm9_02035c18(void);
void ffc_arm9_02035d7c(void *object);
void ffc_arm9_020367a8(void);
void ffc_arm9_02056894(void);
void ffc_arm9_02063bc8(void);
void ffc_arm9_0208f69c(void);
uint32_t ffc_arm9_02038b48(const void *object);
void *ffc_arm9_02036380(void *object);
void *ffc_arm9_020367b8(void *object);
uint32_t ffc_arm9_02061568(const void *object);
uint32_t ffc_arm9_02064aa8(const void *object);
uint32_t ffc_arm9_02066878(const void *object);
uint32_t ffc_arm9_0207fc20(const void *object);
uint32_t ffc_arm9_0207fc24(const void *object);
uint32_t ffc_arm9_020871d4(const void *object);
uint32_t ffc_arm9_0207fd2c(void);
int32_t ffc_arm9_020526ac(void);
void ffc_arm9_02053234(void *object);
void ffc_arm9_02060e80(void *object);
void ffc_arm9_0206133c(void *object);
void ffc_arm9_0203645c(void *object, uint32_t value);
void ffc_arm9_02036460(void *destination, const void *source);
uint8_t ffc_arm9_0204f7a0(const void *object);
uint32_t ffc_arm9_020696e8(const void *object);
void ffc_arm9_020696e0(void *object, uint8_t value);
void ffc_arm9_02069320(void *object, uint32_t value);
void ffc_arm9_02069404(void *object, uint32_t value);
int16_t ffc_arm9_0203c410(const int16_t *values, uint32_t index);
uint32_t ffc_arm9_02036b4c(const void *object, uint32_t index);
void ffc_arm9_02058194(void *destination, const void *source);
void ffc_arm9_020576c8(void *object, uint32_t value_0c, uint32_t value_10_18, uint32_t value_14);
void ffc_arm9_02060448(void *object, uint32_t value_00);
void ffc_arm9_02088fa0(void *object);
void ffc_arm9_02005dac(void *object);
void ffc_arm9_02005db4(void *object, uint32_t value);
uint32_t ffc_arm9_0201b924(const void *object);
uint32_t ffc_arm9_0201bc54(const void *object, uint32_t index, uint32_t addend);
uint32_t ffc_arm9_0201e920(const void *object);
void ffc_arm9_02035c3c(void *object, uint32_t value);
void ffc_arm9_02035c4c(void *object, uint32_t value);
void ffc_arm9_02035c60(void *object, uint32_t value);
void ffc_arm9_02035c74(void *object, uint32_t value);
uint8_t ffc_arm9_02035dac(const void *object);
void ffc_arm9_02035dbc(void *object, uint32_t value);
uint32_t ffc_arm9_02035eb0(const void *object);
void ffc_arm9_02035f44(void *object, uint32_t value);
uint32_t ffc_arm9_02036344(const void *object);
uint8_t ffc_arm9_02036360(const void *object);
uint32_t ffc_arm9_020363a4(const void *object);
void ffc_arm9_02036438(void *object, uint32_t value);
uint32_t ffc_arm9_02036838(const void *object);
uint32_t ffc_arm9_02036cd8(const void *object);
uintptr_t ffc_arm9_0207e5c4(const void *object);
uint32_t ffc_arm9_0207f8a0(uint32_t unused, const void *range, uint32_t *difference);
void *ffc_arm9_02087c14(void *node, void *owner);
void ffc_arm9_02088708(void *object);
void ffc_arm9_020872d0(void *object, uint32_t value);
int32_t ffc_arm9_0208f694(int32_t value);
void ffc_arm9_02062984(void *object, uint32_t value_14, uint32_t value_18);
void ffc_arm9_02059c34(void *destination, const void *source);
void ffc_arm9_0205359c(void *object);
void ffc_arm9_0208f6a4(void *object);
void ffc_arm9_02035dcc(void *object, uint32_t increment);
uint32_t ffc_arm9_020369c0(const void *object, uint32_t index);
uintptr_t ffc_arm9_020525f0(const void *object);
uintptr_t ffc_arm9_0207eb94(const void *object);
void ffc_arm9_0208c534(void *cursor, uint8_t value);
uint8_t ffc_arm9_02036820(const void *object, uint32_t index);
uint32_t ffc_arm9_02090270(uint32_t unused, uint32_t flags);
void ffc_arm9_02090380(void *destination, const void *source, uint32_t length);
void ffc_arm9_0207fad4(void *object, uint32_t first, uint32_t second);
uint32_t ffc_arm9_020581cc(const void *first, const void *second);
uint32_t ffc_arm9_02093b94(const uint16_t *first, const uint16_t *second, uint32_t length);
void *ffc_arm9_02087c24(void *head, void *node);
void ffc_arm9_020877d4(void *list, void *node);
uint32_t ffc_arm9_020817c8(int32_t first, int32_t second);
uint64_t ffc_arm9_0209a71c(uint64_t first, uint64_t second);
uint32_t ffc_arm9_02092864(const uint8_t *text);
uint32_t ffc_arm9_02093bb4(const uint16_t *text);
uint32_t ffc_arm9_0204f7d4(const void *object);
uint32_t ffc_arm9_0204f7ec(const void *object);
void ffc_arm9_0207e890(void *object);
void ffc_arm9_0205f2f0(void *object, uint32_t value);
void ffc_arm9_0205fdc8(void *object, uint32_t value);
void ffc_arm9_020527cc(void *first, void *second);
void ffc_arm9_020872d8(void *object, uintptr_t buffer, uint32_t size);
uintptr_t ffc_arm9_02069734(const void *object);
uint8_t *ffc_arm9_02092a2c(uint8_t *text, uint32_t character);
int32_t ffc_arm9_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
uintptr_t ffc_arm9_02086b94(void *owner);
void ffc_arm9_02035be0(void *object);
void ffc_arm9_02059b60(void *object, uint32_t value_14, uint32_t packed_8_12,
                       uint32_t value_04, uint32_t value_08, uint32_t packed_14_15,
                       uint32_t value_18);
uintptr_t ffc_arm9_0204f3cc(const void *container, const uint32_t *threshold,
                           uint32_t *selected, uint8_t *first_flag, uint8_t *second_flag);
void ffc_arm9_0202a9ac(void *cursor);
void ffc_arm9_0201f36c(const void *object, uint32_t index, void *output);
void ffc_arm9_0201f460(const void *object, uint32_t index, void *output);

#endif
