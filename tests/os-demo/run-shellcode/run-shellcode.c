/*
 * Imported from the operating systems class.
 */

#if defined __i386__
static const char shellcode[] = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68"
			"\x2f\x62\x69\x6e\x89\xe3\x50\x53\x89\xe1\x31\xd2\xb0\x0b\xcd\x80";
#elif defined __x86_64__
static const char shellcode[] = "\x48\x31\xd2\x48\xbb\xff\x2f\x62\x69\x6e\x2f"
			"\x73\x68\x48\xc1\xeb\x08\x53\x48\x89\xe7\x48\x31\xc0\x50\x57\x48"
			"\x89\xe6\xb0\x3b\x0f\x05";
#endif

int main(void)
{
	void (*f)(void) = (void (*)(void)) shellcode;

	f();

	return 0;
}
