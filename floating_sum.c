#include <stdio.h>

/* This is the first program I have ever written from scratch while memorising syntax. Very proud to learn C which I have wanted to since
2007 or so, as a scraggly haired youth in and out of trouble. Most eagerly awaiting a memorisation of the bulk of Win32 API headers, and their
functions, parameter declarations and data types, and more generally speaking the Windows API of the same. Nice to study a unit in Foundation
Mathematics with Southern Cross University contributing toward the 2011-2019 spend endlessly reading from the Cambridge BSc Tripos */

/* This program will take a binary tree for evaluating the sum of 11 floating-point numbers, invoked in a seperate function and parsed as
a return value to the printf(); function. p, q, r, s, a, b, c, d, x, y, z. Eager to become fully proficient in both RFC and MSDN/Technet
protocols and file-formats. In learning C, I hope to accomplish being able to write or find kernel vulnerabilities or exploits, create
fuzzers for protocols such as MSRPC or SMB or UPnP, apply cryptography such as TLS or SSL, fuzz proprietary software such as that which
supports MS-TNEF etc. One day I need to leave my Centrelink behind to move to SYD and see whether a hiring agent or workplace will give
me that shot at a 100k career. In the meantime it is soothing for both my Schizophrenia and my isolation to spend time knocking things off
the bucket list, such as learning C/C++, writing malware, finding zero-days, IOCTL/C++ API kernel fuzzing, protocol analysis, understanding
and defeating all memory-based and compiler protections insomuchas can possibly be done */

/* Charles Thomas Wallace Truscott, github.com/r0ss1n1. I LOVE YOU DAD : MARK WILLIAM WATTERS B. 1955 */

float perform_sum(float p, float q, float r, float s, float a, float b, float c, float d, float x, float y, float z);


int main(void) {

	float p, q, r, s, a, b, c, d, x, y, z;

	printf("%s\n", "Welcome to the program. Please input 11 floating-point numbers.\nCharles Thomas Wallace Truscott 13/10/2020\n");

	scanf("%f%f%f%f%f%f%f%f%f%f%f", &p, &q, &r, &s, &a, &b, &c, &d, &x, &y, &z);

	printf("The sum of those numbers, distributed over a binary-alternating addition and subtraction is: %f\n", perform_sum(p, q, r, s, a, b, c, d, x, y, z));
	printf("e.g. p + q - r + s - a + b - c + d - x + y - z = %f\n\n",  perform_sum(p, q, r, s, a, b, c, d, x, y, z));
}


float perform_sum(float p, float q, float r, float s, float a, float b, float c, float d, float x, float y, float z){
	return p + q - r + s - a + b - c + d - x + y - z;
}