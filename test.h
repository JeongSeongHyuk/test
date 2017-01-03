#include <iostream>
#include <stdio.h>
using namespace std;

void hello(){
	
	FILE* f =fopen("test.txt","w");
	fwrite("hello",1,100,f);
	fclose(f);
}
