#include <msvcrt/mbstring.h>

/*
 * FIXME not correct
 *
 * @unimplemented
 */
unsigned char * _mbsspnp(const unsigned char *s1, const unsigned char *s2)
{
  const unsigned char *p = s1, *spanp;
  char c, sc;

 cont:
  c = *p++;
  for (spanp = s2; (sc = *spanp++) != 0;)
    if (sc == c)
      goto cont;
  return (unsigned char *)p;
}
