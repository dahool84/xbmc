/*
*      Copyright (C) 2012 Team XBMC
*      http://www.xbmc.org
*
*  This Program is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation; either version 2, or (at your option)
*  any later version.
*
*  This Program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with XBMC; see the file COPYING.  If not, write to
*  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
*  http://www.gnu.org/copyleft/gpl.html
*
*/

#pragma once

#ifndef WINDOW_EVENTS_IOS_H
#define WINDOW_EVENTS_IOS_H

#include "windowing/WinEvents.h"

class CWinEventsIOS : public CWinEventsBase
{
public:
  static void Init();
  static void DeInit();
  static void MessagePush(XBMC_Event *newEvent);
  static bool MessagePump();
  static int  GetQueueSize();

protected:
};

#endif // WINDOW_EVENTS_IOS_H

