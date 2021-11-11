#if 0
rm -f libprofile.so
gcc -shared -fPIC -static-libgcc profile.c -o libprofile.so
exit
#endif
// cl /LD profile.c

#ifdef _WIN32
__declspec(dllexport)
#endif
void profileBegin(const char * mark) {
  volatile int nothing;
}

#ifdef _WIN32
__declspec(dllexport)
#endif
void profileEnd(const char * mark) {
  volatile int nothing;
}

