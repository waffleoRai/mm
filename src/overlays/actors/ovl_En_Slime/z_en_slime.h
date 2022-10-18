#ifndef Z_EN_SLIME_H
#define Z_EN_SLIME_H

#include "global.h"

struct EnSlime;

typedef void (*EnSlimeActionFunc)(struct EnSlime*, PlayState*);

typedef struct EnSlime {
    /* 0x000 */ Actor actor;
    /* 0x144 */ EnSlimeActionFunc actionFunc;
    /* 0x148 */ u8 unk148; //In draw, describes env alpha
    /* 0x149 */ s8 unk149;
    /* 0x14A */ u8 unk14A; /* inferred */
    /* 0x14B */ char pad14B[1];
    /* 0x14C */ s16 unk14C; /* inferred */
    /* 0x14E */ char pad14E[2];
    /* 0x150 */ s16 unk150; /* inferred */
    /* 0x152 */ s16 unk152;
    /* 0x154 */ f32 unk154; /* inferred */
    /* 0x158 */ f32 unk158;
    /* 0x15C */ f32 unk15C; /* inferred */
    /* 0x160 */ void* unk160;
    /* 0x164 */ f32 unk164; /* inferred */
    /* 0x168 */ f32 unk168; /* inferred */
    /* 0x16C */ f32 unk16C; /* inferred */
    /* 0x170 */ f32 unk170;
    /* 0x174 */ f32 unk174;        /* inferred */
    /* 0x178 */ f32 unk178;        /* inferred */
    /* 0x17C */ f32 unk17C;        /* inferred */
    /* 0x180 */ Vec3f unk180[5];      /* inferred */
    /* 0x1BC */ ColliderCylinder unk1BC;
} EnSlime; /* size = 0x208 */

#endif // Z_EN_SLIME_H
