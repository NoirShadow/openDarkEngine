/******************************************************************************
 *
 *    This file is part of openDarkEngine project
 *    Copyright (C) 2009 openDarkEngine team
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *
 *	  $Id$
 *
 *****************************************************************************/

// This source code is a fixed and maintained version of the Null render system written by xyzzy@ogre3d.org forum

#ifndef __NULLTEXTURE_H
#define __NULLTEXTURE_H

#include "stdafx.h"

using namespace Ogre;

class NULLTexture : public Texture
{
public:
	NULLTexture(ResourceManager* creator, const String& name, ResourceHandle handle,
		const String& group, bool isManual = false, ManualResourceLoader* loader = 0) : Texture(creator, name, handle, group, isManual, loader) { }
	~NULLTexture() {}
	void loadImpl(void) {}
	void loadImage (const Ogre::Image &) {}
	HardwarePixelBufferSharedPtr getBuffer(size_t face=0, size_t mipmap=0) { return HardwarePixelBufferSharedPtr(NULL); }
	void createInternalResourcesImpl() {}
	void freeInternalResourcesImpl() {}
};

#endif
