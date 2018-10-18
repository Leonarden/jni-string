#jni-string is a project that tries to improve of basic method of java String class for further work with avl trees #
(language processing)

gcc  -std=c++11 -c -I"/usr/lib/jvm/jdk1.8.0_192/include" -I"/usr/lib/jvm/jdk1.8.0_192/include/linux" jnistringImpl.cpp

gcc -I"/usr/lib/jvm/jdk1.8.0_192/include" -I"/usr/lib/jvm/jdk1.8.0_192/include/linux" -c   jnistring.so  jnistringImpl.o -shared -o libjnistring.so -fPIC jnistring.c -lc

(warnings and bugs)