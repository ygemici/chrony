/*
  $Header: /cvs/src/chrony/rtc.h,v 1.9 2002/02/28 23:27:13 richard Exp $

  =======================================================================

  chronyd/chronyc - Programs for keeping computer clocks accurate.

 **********************************************************************
 * Copyright (C) Richard P. Curnow  1997-2002
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 * 
 **********************************************************************

  =======================================================================

  */

#ifndef GOT_RTC_H
#define GOT_RTC_H

#include "reports.h"

extern void RTC_Initialise(void);
extern void RTC_Finalise(void);
extern void RTC_TimePreInit(void);
extern void RTC_TimeInit(void (*after_hook)(void *), void *anything);
extern void RTC_StartMeasurements(void);
extern int  RTC_GetReport(RPT_RTC_Report *report);

#define RTC_ST_OK 0
#define RTC_ST_NODRV 1
#define RTC_ST_BADFILE 2

extern int RTC_WriteParameters(void);

extern int RTC_Trim(void);

extern void RTC_CycleLogFile(void);

#endif /* GOT_RTC_H */
