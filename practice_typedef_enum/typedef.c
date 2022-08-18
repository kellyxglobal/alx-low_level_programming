// Objective C program to demonstrate the use of typedef
#import <Foundation/Foundation.h>

// Assigning new names to the data types
// Using typedef keyword
typedef int MOUSE;
typedef unsigned long long CAT;

int main (int argc, const char * argv[])
{
	NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
	
	// Creating the variable of data types
	// with new names
	MOUSE x = 10000;
	CAT y = 121234;
	
	// Displaying the result
	NSLog (@"Value of x is %i", x);
	NSLog (@"Value of y is %llu", y);
	[pool drain];
	return 0;
}

