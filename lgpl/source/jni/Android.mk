LOCAL_PATH := $(call my-dir)

# libmp3lame.so - LAME 3.100 as a separate, replaceable shared library (LGPL).
# Same module definition ToneGenPro uses to build its libmp3lame.so.
include $(CLEAR_VARS)
LOCAL_MODULE := mp3lame
LOCAL_SRC_FILES := \
    lame/bitstream.c \
    lame/encoder.c \
    lame/fft.c \
    lame/gain_analysis.c \
    lame/id3tag.c \
    lame/lame.c \
    lame/newmdct.c \
    lame/presets.c \
    lame/psymodel.c \
    lame/quantize.c \
    lame/quantize_pvt.c \
    lame/reservoir.c \
    lame/set_get.c \
    lame/tables.c \
    lame/takehiro.c \
    lame/util.c \
    lame/vbrquantize.c \
    lame/VbrTag.c \
    lame/version.c \
    lame/hip_stub.c

LOCAL_CFLAGS := -DHAVE_CONFIG_H -DSTDC_HEADERS -O3 -ffast-math \
    -DNOANALYSIS \
    -Wno-absolute-value -Wno-shift-negative-value \
    -Wno-tautological-pointer-compare -Wno-pointer-sign \
    -Wno-parentheses-equality -Wno-unused-variable -Wno-unused-function

# 16 KB page size alignment (required by Android 15+)
LOCAL_LDFLAGS := -Wl,-z,max-page-size=16384

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/lame \
    $(LOCAL_PATH)
include $(BUILD_SHARED_LIBRARY)
