/****************************************************************************
                   encoderffmpegmp4.cpp  -  FFMPEG MP4 encoder for mixxx
                             -------------------
    copyright            : (C) 2012-2013 by Tuukka Pasanen
                           (C) 2007 by Wesley Stessens
                           (C) 1994 by Xiph.org (encoder example)
                           (C) 1994 Tobias Rafreider (shoutcast and recording fixes)
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef ENCODERFFMPEGMP4_H
#define ENCODERFFMPEGMP4_H

#include "encoderffmpegcore.h"

class EncoderFfmpegCore;

class EncoderFfmpegMp4 : public EncoderFfmpegCore {
public:
    EncoderFfmpegMp4(EncoderCallback* pCallback=NULL);
};

#endif
