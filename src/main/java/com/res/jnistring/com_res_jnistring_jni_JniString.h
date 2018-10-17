/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_res_jnistring_jni_JniString */

#ifndef _Included_com_res_jnistring_jni_JniString
#define _Included_com_res_jnistring_jni_JniString
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    print
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_res_jnistring_jni_JniString_print
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    println
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_res_jnistring_jni_JniString_println
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    equals
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_res_jnistring_jni_JniString_equals
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    concat
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_res_jnistring_jni_JniString_concat
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    indexOf
 * Signature: (Ljava/lang/String;C)I
 */
JNIEXPORT jint JNICALL Java_com_res_jnistring_jni_JniString_indexOf
  (JNIEnv *, jobject, jstring, jchar);

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    bytes
 * Signature: (Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_res_jnistring_jni_JniString_bytes
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    split
 * Signature: (Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_res_jnistring_jni_JniString_split
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    toSet
 * Signature: (Ljava/lang/String;)Ljava/util/Set;
 */
JNIEXPORT jobject JNICALL Java_com_res_jnistring_jni_JniString_toSet
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif