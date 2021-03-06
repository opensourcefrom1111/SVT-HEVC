/*
* Copyright(c) 2018 Intel Corporation
* SPDX - License - Identifier: BSD - 2 - Clause - Patent
*/

#ifndef EbPictureDecisionReorderQueue_h
#define EbPictureDecisionReorderQueue_h

#include "EbTypes.h"
#include "EbSystemResourceManager.h"

/************************************************
 * Packetization Reorder Queue Entry
 ************************************************/
typedef struct PictureDecisionReorderEntry_s {
    EB_U64                                pictureNumber;    
    EbObjectWrapper_t                    *parentPcsWrapperPtr;
} PictureDecisionReorderEntry_t;   

extern EB_ERRORTYPE PictureDecisionReorderEntryCtor(   
    PictureDecisionReorderEntry_t       **entryDblPtr,
    EB_U32                                pictureNumber);

#endif //EbPictureDecisionReorderQueue_h
