/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JNITest */

#ifndef _Included_JNITest
#define _Included_JNITest
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     JNITest
 * Method:    he_version
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JNITest_he_1version
  (JNIEnv *, jobject);

/*
 * Class:     JNITest
 * Method:    he_open
 * Signature: (Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_JNITest_he_1open
  (JNIEnv *, jobject, jstring, jstring, jint, jstring);

/*
 * Class:     JNITest
 * Method:    he_close
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_JNITest_he_1close
  (JNIEnv *, jobject, jint);

/*
 * Class:     JNITest
 * Method:    intMethod
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JNITest_intMethod
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
