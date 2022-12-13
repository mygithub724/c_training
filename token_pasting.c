#include<stdio.h>
#define pf printf
#define paste(a,b) a##b
#define marks(x) marks_##x
int main()
{
	int v1=10,v2=20;
	int marks_c=90,marks_linux=50;
	pf("%d\n",paste(v,1));
pf("%d\n",paste(v,2));
	pf("marks_c=%d\n",marks(c));
	pf("marks_linux=%d\n",marks(linux));
	}
