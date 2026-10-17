/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_slot10_chain_1b98.c, externs renamed. */
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

/* Matched: 021B1B98 (34B incl pad) — BL 020644A0, slot10 on *(self+0x84), BL 0205F498(*(*(self+0x88)+0x94)) */
typedef void (*Fn)(void*);
extern void func_020644a0(void*);
extern void func_0205f498(void*);
void func_ov002_021b1b98(void* self) {
    void* o;
    func_020644a0(self);
    o = *(void**)((u8*)self + 0x84);
    (*(Fn**)o)[10](o);
    self = (u8*)self + 0x88;
    func_0205f498(*(void**)((u8*)(*(void**)self) + 0x94));
}
