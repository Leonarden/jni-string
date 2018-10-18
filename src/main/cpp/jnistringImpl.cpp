
#include <jni.h>
#include "avlarray/avl_array.h"
#include <algorithm>
#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <boost/regex.hpp>
#include "jnistringImpl.h"

using namespace std;


/* Implementation */

void print(char * s1){

    printf("%s", s1);


}

void println(char * s1){

	printf("%s\n", s1);
}

int equals(char* s1, char* s2){

	return strcmp(s1,s2);

}

char * concat(char* s1, char* s2){

	return  strcat(s1,s2);
}

int indexOf(char* s1, char c1){

	return (int)( strchr(s1,c1) - s1 );
}

jbyteArray bytes(JNIEnv *env,char* s1){


	jbyteArray ba = env->NewByteArray(strlen(s1));
	env->SetByteArrayRegion(ba, 0, strlen(s1), (jbyte*) s1);

	 return ba;

}

jobjectArray split(JNIEnv *env, char* s1, char* rx){
    jobjectArray r = NULL;
    return r;
}
/*TODO: Solve iteration
 *
jobjectArray split(JNIEnv *env, char* s1, char* rx){
    jobjectArray r = NULL;
	string *str = new string;
	str->append(s1);
	char **sp;
	unsigned int spl;
	char *rs = (char*) malloc(255*sizeof(char));
	rs = strcat(rs,"^");
	if(rx==NULL || rx==""){
		sp = (char**) malloc(1 * sizeof(char**));
		strcpy(sp[0], str->c_str());
	}
	else{

		bool mf = false;
		boost::regex expr{rs};
	    boost::smatch match;
	    mf = boost::regex_match(*str,match,expr);
	    if(mf){
	    vector<string> *vt;
	    int len = 0;
		boost::regex_iterator<char*,string> k = match.begin();

		while(k<match.end()){

			vector<string> *subp = new vector<string>;
			boost::sub_match<char*,char*> sub = *k;
			char * ini = str->c_str();
			unsigned int n = strlen(sub.first().c_str());
			char * is =  &sub;
			while(is < (sub + sizeof(sub))){
			  subp->push_back(str->substr((int)ini,n));
			  ini = *is + n;
			  is = is + sizeof(*is);
			}


			if(subp->size()==0)
				break;
			len =+ subp->size();
			vt = new vector<string>;

			spl = sizeof(sp)/sizeof(char*);

				if(spl>0){
					for(int i=0;i<spl;i++)
						vt->push_back(sp[i]);

				}

				for(vector<string>::iterator t = subp->begin();t<subp->end();++t)
						vt->push_back((*t));


			delete(subp);


			free(sp);
			sp = (char**)malloc(vt->size()* sizeof(char**));
			int i = 0;
			for(vector<string>::iterator t =vt->begin();t<vt->end();++t){
				sp[i] = t->c_str();
			    i++;
			}
			delete(vt);


			++k;

		 }

	    }

	    spl = sizeof(sp)/sizeof(char*);

	    r = (jobjectArray) env->NewObjectArray(spl,env->FindClass("java/lang/String"),env->NewStringUTF(""));
	    	for(int i=0;i<spl;i++)
			 env->SetObjectArrayElement(r,i,env->NewStringUTF(sp[i]));
       free(sp);


	   return r;
}

*/
