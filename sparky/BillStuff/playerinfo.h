/*  
 * Half-Life client-side generic hook engine.
 * Copyright (c) Vasily Pupkin (clientbot@narod.ru) 2000-2001
 * Copyright (c) Tim Yunaev (tim@lviv.gu.net) 2000-2001
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * NOTE:
 * GNU license doesn't cover Engine directory.
 * Content of Engine directory is copyrighted (c) 1999, 2000, by Valve LLC
 * and it is licensed under Valve's proprietary license (see original HL SDK).
 *
 * $Id: menu.h,v 1.2 2001/07/16 11:23:10 vasily Exp $
 */


#ifndef PLAYERINFO_H
#define PLAYERINFO_H

class CPlayerinfo : CBaseHook
{
	public:
	
	virtual bool Pre_HUD_PlayerMove (struct playermove_s *ppmove, int server);
	virtual void Post_HUD_PlayerMove (struct playermove_s *ppmove, int server);

	CPlayerinfo(void);

	playermove_t ppmove_cache;
	bool bCached;
	float fMaxSpeeds[10];
};

extern CPlayerinfo gPlayerinfo;

#endif