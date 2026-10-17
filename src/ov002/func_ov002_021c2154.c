/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc24_vtbl_clearbyte_4ptr_021C2154.c, externs renamed. */
/* 0x021C2154 (size 0x30) -O4 — Alloc(0x24) ctor: clear low byte of +0xC, set vtable, store 4 ptr args (a@0x14, b@0x18, d@0x1C, c@0x20) */
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

extern void* func_0205681c(int);
extern u32 data_ov002_021d6ff0;
void* func_ov002_021c2154(void* a, void* b, void* c, void* d) {
    u8* p;
    p = (u8*)func_0205681c(0x24);
    if (p != 0) {
        *(u32*)(p + 0xC) = *(u32*)(p + 0xC) & ~0xFF;
        *(u32*)p = (u32)&data_ov002_021d6ff0;
        *(void**)(p + 0x14) = a;
        *(void**)(p + 0x18) = b;
        *(void**)(p + 0x1C) = d;
        *(void**)(p + 0x20) = c;
    }
    return p;
}
