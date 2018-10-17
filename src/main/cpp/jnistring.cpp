#include "/jni-string/src/main/java/com/res/jnistring/com_res_jnistring_jni_JniString.h"
#include "avlarray/avl_array.h"
#include <algorithm>



/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    print
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_res_jnistring_jni_JniString_print
  (JNIEnv *, jobject, jstring){

}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    println
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_res_jnistring_jni_JniString_println
  (JNIEnv *, jobject, jstring){

}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    equals
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_res_jnistring_jni_JniString_equals
  (JNIEnv *, jobject, jstring, jstring){

}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    concat
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_res_jnistring_jni_JniString_concat
  (JNIEnv *, jobject, jstring, jstring){

}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    indexOf
 * Signature: (Ljava/lang/String;C)I
 */
JNIEXPORT jint JNICALL Java_com_res_jnistring_jni_JniString_indexOf
  (JNIEnv *, jobject, jstring, jchar){

}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    bytes
 * Signature: (Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_res_jnistring_jni_JniString_bytes
  (JNIEnv *, jobject, jstring){

}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    split
 * Signature: (Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_res_jnistring_jni_JniString_split
  (JNIEnv *, jobject, jstring, jstring){

}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    toSet
 * Signature: (Ljava/lang/String;)Ljava/util/Set;
 */
JNIEXPORT jobject JNICALL Java_com_res_jnistring_jni_JniString_toSet
  (JNIEnv *, jobject, jstring){

}

/*
 * =================IMPLEMENTATION===============
 * Class:     in_derros_jni_Utilities
 * Method:    printMethod
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_in_derros_jni_Utilities_printMethod
        (JNIEnv *env, jobject obj) {
    std::cout << "Native method called. Printing garbage." << std::endl;
}



