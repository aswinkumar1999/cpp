#include"omp.h"
using namespace std;
int main(){
#pragma omp parallel
	{ int id=omp_get_thread_num();
		cout<<"Hello world-"<<id;
	}
return 0;
}
