#include <jni.h>

#ifndef _JNISTRING_IMPL_H
#define _JNISTRING_IMPL_H

#ifdef __cplusplus
        extern "C" {
#endif

        void print(char * s1);
        void println(char * s1);
        int equals(char* s1, char* s2);
        char * concat(char* s1, char* s2);
        int indexOf(char* s1, char c1);
        jbyteArray bytes(JNIEnv *env,char* s1);
        jobjectArray split(JNIEnv *env,char* s1, char* regex);


#ifdef __cplusplus
        }
#endif

#endif
