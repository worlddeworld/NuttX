/***************************************************************************
 * arch/arm/src/cxd56xx/cxd56_audio_dma.h
 *
 *   Copyright 2018 Sony Semiconductor Solutions Corporation
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name of Sony Semiconductor Solutions Corporation nor
 *    the names of its contributors may be used to endorse or promote
 *    products derived from this software without specific prior written
 *    permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_CXD56XX_CXD56_AUDIO_DMA_H
#define __ARCH_ARM_SRC_CXD56XX_CXD56_AUDIO_DMA_H

/***************************************************************************
 * Included Files
 ****************************************************************************/

#include <arch/chip/audio.h>

/***************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/***************************************************************************
 * Public Types
 ****************************************************************************/

/***************************************************************************
 * Public Data
 ****************************************************************************/

/***************************************************************************
 * Inline Functions
 ****************************************************************************/

/***************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

CXD56_AUDIO_ECODE cxd56_audio_dma_get_handle(cxd56_audio_dma_path_t path,
                                             FAR cxd56_audio_dma_t *handle);
CXD56_AUDIO_ECODE cxd56_audio_dma_free_handle(cxd56_audio_dma_t handle);
CXD56_AUDIO_ECODE cxd56_audio_dma_init(cxd56_audio_dma_t handle,
                                       cxd56_audio_samp_fmt_t fmt,
                                       FAR uint8_t *ch_num);
CXD56_AUDIO_ECODE cxd56_audio_dma_set_cb(cxd56_audio_dma_t handle,
                                         FAR cxd56_audio_dma_cb_t cb);
CXD56_AUDIO_ECODE cxd56_audio_dma_get_mstate(cxd56_audio_dma_t handle,
                                             FAR cxd56_audio_dma_mstate_t *state);
CXD56_AUDIO_ECODE cxd56_audio_dma_en_dmaint(void);
CXD56_AUDIO_ECODE cxd56_audio_dma_dis_dmaint(void);
CXD56_AUDIO_ECODE cxd56_audio_dma_start(cxd56_audio_dma_t handle,
                                        uint32_t addr,
                                        uint32_t sample);
CXD56_AUDIO_ECODE cxd56_audio_dma_stop(cxd56_audio_dma_t handle);
#endif /* __ARCH_ARM_SRC_CXD56XX_CXD56_AUDIO_DMA_H */
