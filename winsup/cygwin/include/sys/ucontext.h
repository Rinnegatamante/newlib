/* ucontext.h

   Copyright 2015 Red Hat, Inc.

This file is part of Cygwin.

This software is a copyrighted work licensed under the terms of the
Cygwin license.  Please consult the file "CYGWIN_LICENSE" for
details. */

#ifndef _SYS_UCONTEXT_H_
#define _SYS_UCONTEXT_H_

#include <signal.h>

typedef struct __mcontext mcontext_t;

typedef struct __ucontext {
	struct __ucontext *uc_link;
	sigset_t	uc_sigmask;
	stack_t	uc_stack;
	mcontext_t	uc_mcontext;
	unsigned long int	uc_flags;
} ucontext_t;

#endif /* !_SYS_UCONTEXT_H_ */
