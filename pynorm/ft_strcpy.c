/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpafhdfafafafafafsfsfa                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelangex <x@x>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/00/00 00:00:00 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2016/10/18 01:32:49 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

THE FOLLOWING WAS SCRAPED FROM THE MAN PAGE.

  REPLACE THIS WITH THE 42 HEADER WHEN YOU'RE DONE.

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>

     char *
     stpcpy(char * dst, const char * src);

     char *
     stpncpy(char * dst, const char * src, size_t len);

     char *
     strcpy(char * dst, const char * src);

     char *
     strncpy(char * dst, const char * src, size_t len);

DESCRIPTION
     The stpcpy() and strcpy() functions copy the string src to dst (including
     the terminating ` ' character.)

     The stpncpy() and strncpy() functions copy at most len characters from
     src into dst.  If src is less than len characters long, the remainder of
     dst is filled with ` ' characters.  Otherwise, dst is not terminated.

     The source and destination strings should not overlap, as the behavior is
     undefined.

RETURN VALUES
     The strcpy() and strncpy() functions return dst.  The stpcpy() and
     stpncpy() functions return a pointer to the terminating ` ' character of
     dst.  If stpncpy() does not terminate dst with a NUL character, it
     instead returns a pointer to dst[n] (which does not necessarily refer to
     a valid memory location.)

EXAMPLES
     The following sets chararray to ``abc   '':

	   char chararray[6];

	   (void)strncpy(chararray, "abc", sizeof(chararray));

     The following sets chararray to ``abcdef'':

	   char chararray[6];

	   (void)strncpy(chararray, "abcdefgh", sizeof(chararray));

     Note that it does not NUL terminate chararray because the length of the
     source string is greater than or equal to the length argument.

     The following copies as many characters from input to buf as will fit and
     NUL terminates the result.  Because strncpy() does not guarantee to NUL
     terminate the string itself, this must be done explicitly.

	   char buf[1024];

	   (void)strncpy(buf, input, sizeof(buf) - 1);
	   buf[sizeof(buf) - 1] = ' ';

     This could be better achieved using strlcpy(3), as shown in the following
     example:

	   (void)strlcpy(buf, input, sizeof(buf));

     Note that because strlcpy(3) is not defined in any standards, it should
     only be used when portability is not a concern.

*/

#include "libft.h"

char * ft_strcpy(char *dst, char const *src)
{
     int i;

     i = -1;
     while(src[++i])
          dst[i] = src[i];
     dst[i] = '\0';
     return(dst);
}
