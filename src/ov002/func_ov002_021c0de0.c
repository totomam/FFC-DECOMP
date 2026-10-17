/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/call_chain_14.c, externs renamed. */
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

/* Matched: 021C0DB0 021C0DE0 (46B)
   Key: parameter reassigned (s = (u8*)s + 0x14) so compiler mutates r5 */
extern u32 func_02056aec(void*);
extern u32 func_ov002_021c234c(u32, u32);
extern void func_02056bc0(void*, u32);
extern void func_02056bc0(void*, u32);

void func_ov002_021c0de0(void* s) {
    u32 r;
    u32 x;
    r = func_02056aec(s);
    x = func_ov002_021c234c(*(u32*)((u8*)s + 0x84), *(u32*)((u8*)s + 0x80));
    s = (u8*)s + 0x14;
    func_02056bc0(s, x);
    func_02056bc0(s, r);
}
