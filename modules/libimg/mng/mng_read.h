/* ************************************************************************** */
/* *                                                                        * */
/* * project   : libmng                                                     * */
/* * file      : mng_read.h                copyright (c) 2000 G.Juyn        * */
/* * version   : 0.5.1                                                      * */
/* *                                                                        * */
/* * purpose   : Read management (definition)                               * */
/* *                                                                        * */
/* * author    : G.Juyn                                                     * */
/* * web       : http://www.3-t.com                                         * */
/* * email     : mailto:info@3-t.com                                        * */
/* *                                                                        * */
/* * comment   : Definition of the read management routines                 * */
/* *                                                                        * */
/* * changes   : 0.5.1 - 05/08/2000 - G.Juyn                                * */
/* *             - changed strict-ANSI stuff                                * */
/* *                                                                        * */
/* ************************************************************************** */

#if defined(__BORLANDC__) && defined(MNG_STRICT_ANSI)
#pragma option -A                      /* force ANSI-C */
#endif

#ifndef _mng_read_h_
#define _mng_read_h_

#include "libmng.h"
#include "mng_data.h"

/* ************************************************************************** */

mng_retcode read_graphic (mng_datap pData);

/* ************************************************************************** */

#endif /* _mng_read_h_ */

/* ************************************************************************** */
/* * end of file                                                            * */
/* ************************************************************************** */
