#include<stdio.h>
#include<jni.h>
#include<JNITest.h>
#include<he.h>
#include<math.h>

//used for c++
//extern "C" {

JNIEXPORT void JNICALL Java_JNITest_he_1version
  (JNIEnv *env, jobject obj){

	int major, minor, patch;
        const char *n = he_version(&major, &minor, &patch);
        if ((HE_VERSION_MAJOR != major) ||
           (HE_VERSION_MINOR != minor) ||
            (HE_VERSION_PATCH != patch)) {
           printf("Helium Library Version Mismatch!!\n");
           return;
        }
        printf("Helium Library is OK!!\n");
	printf("The version is: %d.%d.%d \n", major, minor, patch);
        return;
	}

JNIEXPORT jint JNICALL Java_JNITest_he_1open
  (JNIEnv *env, jobject obj, jstring URL, jstring NAME, jint FLAGS, jstring ENVS) {
	 he_t handle;

	const char *url1;
	const char *name1;
	const char *flags1;

	url1 = (*env)->GetStringUTFChars(env, URL, 0);
	name1 = (*env)->GetStringUTFChars(env, NAME, 0);

	handle = he_open(url1, name1, FLAGS, 0);

        printf("Datastore created!!! %d\n", &handle);

	//return handle; ??? todo: get handle.

	he_close(handle);

	}

JNIEXPORT void JNICALL Java_JNITest_he_1close
  (JNIEnv *env, jobject obj, jint HANDLE)
	{
	//he_close(HANDLE);
 	printf("Datastore closed!!!\n");
	}


JNIEXPORT jint JNICALL Java_JNITest_intMethod
  (JNIEnv *env, jobject obj, jint num)
	{
	return num * num;
	}

void main(){}
