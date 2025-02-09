#ifndef F_F_OP_DRAW_TAG_H_
#define F_F_OP_DRAW_TAG_H_

#include "../dolphin/gctypes.h"
#include "../dolphin/mtx/vec.h"

struct MatrixPtr {
    /* 0x000 */ u8 field_0x0[0x6C];
    /* 0x06C */ Vec target;
    /* 0x070 */ f32 field_0x070;
    /* 0x07C */ Vec pos;
    /* 0x080 */ f32 field_0x080;
    /* 0x084 */ f32 zoom;
    /* 0x088 */ f32 roll;
    /* 0x08C */ u32 field_0x088;
    /* 0x16F */ u8 field_0x16B[0xE3];
    /* 0x170 */ u8 camera_mode;
};

struct MatrixInfo {
    MatrixPtr* matrix_info;
};

extern MatrixInfo matrixInfo;

#endif