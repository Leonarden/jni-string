#include "/jni-string/src/main/java/com/res/jnistring/com_res_jnistring_jni_JniString.h"
#include "avlarray/avl_array.h"
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <regex>




/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    print
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_res_jnistring_jni_JniString_print
  (JNIEnv * env, jobject obj, jstring s){
    const char *p = malloc(255*sizeof(char));
    strcpy(p,(*env)->GetStringUTFChars(env, s, 0));
	print(p);
	free(p);

}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    println
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_res_jnistring_jni_JniString_println
  (JNIEnv *env, jobject obj, jstring s){
	const char *p = malloc(255*sizeof(char));
	strcpy(p,(*env)->GetStringUTFChars(env, s, 0));
	println(p);
	free(p);

}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    equals
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_res_jnistring_jni_JniString_equals
  (JNIEnv * env, jobject obj, jstring s1, jstring s2){
	const char *p1 = malloc(255*sizeof(char));
	strcpy(p1,(*env)->GetStringUTFChars(env, s1, 0));
	const char *p2 =  malloc(255*sizeof(char));
	strcpy(p2,(*env)->GetStringUTFChars(env, s2, 0));

	 jboolean b = equals(p1,p2);

	 free(p1);
	 free(p2);
	 return b;
}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    concat
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_res_jnistring_jni_JniString_concat
  (JNIEnv *env, jobject obj, jstring s1, jstring s2){

	const char *p1 = malloc(255*sizeof(char));
	strcpy(p1,(*env)->GetStringUTFChars(env, s1, 0));
	const char *p2 =  malloc(255*sizeof(char));
	strcpy(p2,(*env)->GetStringUTFChars(env, s2, 0));

    const char *p = concat(p1,p2);

    free(p1);
    free(p2);

    jstring r = malloc(255*sizeof(jstring));
    (*env)-> (*env).ReleaseStringUTFChars(r, p);
    free(p);
    return r;



}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    indexOf
 * Signature: (Ljava/lang/String;C)I
 */
JNIEXPORT jint JNICALL Java_com_res_jnistring_jni_JniString_indexOf
  (JNIEnv * env, jobject obj, jstring s, jchar c){
	const char *p = malloc(255*sizeof(char));
	strcpy(p, (*env)->GetStringUTFChars(env, s, 0));

	jbyte b = (jbyte) c; //casting from UTF 16b to UTF 8b
	char ic = (char) b;
	/*
	auto unsigned int i = -1;
	auto unsigned int k = strlen(p);
	auto unsigned int j = 0;

	bool fnd = false;

	for(j=p;j<(p+k);j++){
		if(*j==ic){
			fnd = true;
			break;
		}
	  i++;
     }

	free(p);

	if(fnd)
		return i;
	else
		return -1;
*/
	return indexOf(p,ic);

}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    bytes
 * Signature: (Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_res_jnistring_jni_JniString_bytes
  (JNIEnv *env, jobject obj, jstring s){

	const char *p = malloc(255*sizeof(char));
    jbyteArray b = bytes(env,p);
    free(p);
	return b;
	bytes(env,p);
}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    split
 * Signature: (Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_res_jnistring_jni_JniString_split
  (JNIEnv *env, jobject obj, jstring s1, jstring s2){


    jobjectArray sres = NULL;
	const char *p = malloc(255*sizeof(char));
	strcpy(p,(*env)->GetStringUTFChars(env, s1, 0));
	const char *rs = malloc(255*sizeof(char));
	strcpy(rs,(*env)->GetStringUTFChars(env, s2, 0));
    sres = split(env,p,rs);
	return sres;

}

/*
 * Class:     com_res_jnistring_jni_JniString
 * Method:    toSet
 * Signature: (Ljava/lang/String;)Ljava/util/Set;
 */
JNIEXPORT jobject JNICALL Java_com_res_jnistring_jni_JniString_toSet
  (JNIEnv *, jobject, jstring){

}
