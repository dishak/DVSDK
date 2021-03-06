/*
 * dvtbAudPlay1Core.h
 *
 * DVTB(wince) XDM1.0 Audio Decode related Core Functions
 *
 * Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
 * 
 * 
 *  Redistribution and use in source and binary forms, with or without 
 *  modification, are permitted provided that the following conditions 
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright 
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the 
 *    documentation and/or other materials provided with the   
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/

#ifndef _DVEVM_ST_AUD_PLAY1_CORE_H
#define _DVEVM_ST_AUD_PLAY1_CORE_H

#include "dvtbGlobal.h"
#include "dvtbAudDec1.h"
//#include "dvtbALSAAudio.h"
#include "dvtbUtils.h"

void
dvtb_audDec1ProcessEndMessage(DvevmStBool useAlgorithm, DvevmStBool fileBased, int nFrames);

void
dvtb_audDec1InitPtrs(DvevmStAudDec1Info *ad);

DvevmStRetCode
dvtb_audDec1HanInit(DvevmStAudDec1Info *ad, char *engName);

void
dvtb_audDec1HanClose(DvevmStAudDec1Info *ad, char *engName);

DvevmStRetCode
dvtb_audDec1OutBuffAlloc(DvevmStXdmBuffer *outBuf);

void
dvtb_audDec1OutBuffFree(DvevmStXdmBuffer *outBuf);

DvevmStRetCode
dvtb_audDec1DecProcess(DvevmStAudDec1Info *ad, int *decDuration);

//DvevmStRetCode
//dvtb_audDec1ProcessOutBuff(DvevmStAudioInfo *aud, DvevmStBool fileBased, char *buff, int nBytes, FILE *fp);

//DvevmStRetCode
//dvtb_audDec1SetSampleRate(DvevmStAudioInfo *aud, int sampleRate);

int
dvtb_audDec1getOutPutBytes(IAUDDEC1_Status *adecStatus);

DvevmStRetCode
dvtb_audDec1ReadInput(char *inBuffer, int *totalBytesConsumed, int *bytesRemaining, int buffsize, FILE *fp, int *nBytes);

#endif
