LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_CPP_EXTENSION := .cpp .cc

LOCAL_SRC_FILES = funct_pat_std.cpp

LOCAL_MODULE := funct_pat_std

ifeq ($(TARGET_ARCH_ABI),x86)
    LOCAL_CFLAGS += -ffast-math -mtune=atom -mssse3 -mfpmath=sse
endif

include $(BUILD_EXECUTABLE)
