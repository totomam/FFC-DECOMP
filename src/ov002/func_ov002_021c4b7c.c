/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/status2_release_handle_021C4B7C.c, externs renamed. */
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

/* 021C4B7C (size 0x2C, -O4) — if handle at +0x14: G1(handle) when flag byte +0x18 is 0, then G2(handle, flag); always set status byte +0xC to 2. */
extern void func_02022390(void* p);
extern void func_0202231c(void* p, u8 b);
void func_ov002_021c4b7c(u8* s) {
    if (*(void**)(s + 0x14) != 0) {
        if (*(u8*)(s + 0x18) == 0) {
            func_02022390(*(void**)(s + 0x14));
        }
        func_0202231c(*(void**)(s + 0x14), *(u8*)(s + 0x18));
    }
    *(u32*)(s + 0xC) = (*(u32*)(s + 0xC) & ~0xFF) | 2;
}
