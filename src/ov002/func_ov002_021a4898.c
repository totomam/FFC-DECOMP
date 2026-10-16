/* cflags:  */
/* From arcnid/ffc-decomp src/battle/msglist_build_marker_pair_021a4898.c, externs renamed. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

/* Matched: 021A4898, size 0xE4 (228B), -O4,p.
   Message-list builder: two func_0205681c(0x14) vtbl-0x020AC398 marker nodes (flag 1 / 0)
   wrapped via func_02055a2c(b,p), an func_0205681c(0x1C) ctor node, a sub-list with string
   0x100FE, conditional func_02021610(0x427,0), null-checked str+0x14 base adjust,
   func_ov002_021ab244(c,1,str). Bare-constant vtable literals. */

extern void* func_0203b688(void);              /* 0x203b688 */
extern void* func_0205681c(u32);                   /* 0x205681c */
extern void* func_02055a2c(void*, void*);         /* 0x2055a2c */
extern void func_02056bc0(void*, void*);        /* 0x2056bc0 */
extern void* func_ov002_021a0ce4(void*, void*, u32);  /* 0x21a0ce4 */
extern void* func_0203b6fc(void);               /* 0x203b6fc */
extern void* func_0203bd04(u32, u32, u32, u32);/* 0x203bd04 */
extern s32 func_ov002_021a38f4(void*);                 /* 0x21a38f4 */
extern void* func_02021610(u32, u32);           /* 0x2021610 */
extern void* func_ov002_021ab244(void*, u32, void*);   /* 0x21ab244 */

void* func_ov002_021a4898(void* a, void* b, void* c)
{
    void* list;
    u8* p;
    void* sub;
    u8* str;
    void* q;

    list = func_0203b688();
    p = (u8*)func_0205681c(0x14);
    if (p != 0) {
        *(u32*)(p + 8) = 0;
        *(u32*)(p + 0xC) = 0x1015A;
        *(u32*)p = 0x020AC398;
        *(u8*)(p + 0x10) = 1;
    }
    func_02056bc0(list, func_02055a2c(b, p));
    q = func_0205681c(0x1C);
    if (q != 0) {
        q = func_ov002_021a0ce4(q, c, 1);
    }
    func_02056bc0(list, q);
    sub = func_0203b6fc();
    str = (u8*)func_0203bd04(0x100FE, 0, 0, 1);
    func_02056bc0(sub, str);
    if (func_ov002_021a38f4(a) != 1) {
        func_02056bc0(sub, func_02021610(0x427, 0));
    }
    if (str != 0) {
        str += 0x14;
    }
    func_02056bc0(sub, func_ov002_021ab244(c, 1, str));
    func_02056bc0(list, sub);
    p = (u8*)func_0205681c(0x14);
    if (p != 0) {
        *(u32*)(p + 8) = 0;
        *(u32*)(p + 0xC) = 0x1015A;
        *(u32*)p = 0x020AC398;
        *(u8*)(p + 0x10) = 0;
    }
    func_02056bc0(list, func_02055a2c(b, p));
    return list;
}
