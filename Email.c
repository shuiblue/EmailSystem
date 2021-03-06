#include <stdio.h>
#include "Email.h"


void
printMail (EMAIL msg)
{
  printf ("ID:\n  %i\n", getEmailId(msg));
  printf ("FROM:\n  %i\n", getEmailFrom(msg));
  printf ("TO:\n  %i\n", getEmailTo(msg));
  printf ("IS_READABLE\n  %i\n", isReadable(msg));
  printf ("SIGNED\n  %i\n", isSigned(msg));
  printf ("SIGNATURE\n  %i\n", getEmailSignKey(msg));
   printf ("ENCRYPTED\n  %d\n", isEncrypted(msg));
  printf ("ENCRYPTION KEY\n  %d\n", getEmailEncryptionKey(msg));
}

int
isReadable (EMAIL msg)
{
  // return 1;
    if (!isEncrypted(msg))
    return 1;
  else
    return 0;
}

EMAIL cloneEmail(EMAIL msg) {
    return msg;
}

EMAIL createEmail (int from, int to) {
  EMAIL msg = 1;
  setEmailFrom(msg, from);
  setEmailTo(msg, to);
  return msg;
}



