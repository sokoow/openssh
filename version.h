/* $OpenBSD: version.h,v 1.75 2015/08/21 03:45:26 djm Exp $ */

#define SSH_VERSION	"OpenSSH_7.1"

#define SSH_PORTABLE	"p1"
#define SSH_RELEASE_MINIMUM	SSH_VERSION SSH_PORTABLE
#ifdef SSH_EXTRAVERSION
#define SSH_RELEASE	SSH_RELEASE_MINIMUM " " SSH_EXTRAVERSION
#else
#define SSH_RELEASE	SSH_RELEASE_MINIMUM
#endif
