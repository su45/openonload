/*
** Copyright 2005-2018  Solarflare Communications Inc.
**                      7505 Irvine Center Drive, Irvine, CA 92618, USA
** Copyright 2002-2005  Level 5 Networks Inc.
**
** This program is free software; you can redistribute it and/or modify it
** under the terms of version 2 of the GNU General Public License as
** published by the Free Software Foundation.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
*/

/**************************************************************************\
*//*! \file
** <L5_PRIVATE L5_SOURCE>
** \author  
**  \brief  
**   \date  
**    \cop  (c) Level 5 Networks Limited.
** </L5_PRIVATE>
*//*
\**************************************************************************/

/*! \cidoxg_lib_ciapp */

#include <ci/app.h>

/* CI support for multi-platform error codes */




/* sockets */
ci_sock_err_t  CI_SOCK_OK 		= { 0 };
ci_sock_err_t  CI_SOCK_INVALID 		= { INVALID_SOCKET };
ci_sock_err_t  CI_SOCK_EWOULDBLOCK 	= { EWOULDBLOCK };
ci_sock_err_t  CI_SOCK_EMSGSIZE         = { EMSGSIZE };
ci_sock_err_t  CI_SOCK_ETIMEDOUT	= { ETIMEDOUT };
ci_sock_err_t  CI_SOCK_ECONNREFUSED	= { ECONNREFUSED };
ci_sock_err_t  CI_SOCK_ECONNABORTED	= { ECONNABORTED };
ci_sock_err_t  CI_SOCK_ENOBUFS		= { ENOBUFS };
ci_sock_err_t  CI_SOCK_EOPNOTSUPP	= { EOPNOTSUPP };


/*! \cidoxg_end */
