//
//  PYConfig.h
//  PYIMAV
//
//  Created by 002 on 2018/5/22.
//  Copyright © 2018年 Ponyo. All rights reserved.
//

#ifndef PYConfig_h
#define PYConfig_h

typedef NS_ENUM(NSInteger, PYNetworkSocketState) {
    ENetworkSocketState_None,             ///< 未操作
    ENetworkSocketState_Connecting,       ///< 连接中
    ENetworkSocketState_Connected,        ///< 连接成功
    ENetworkSocketState_Disconnect,       ///< 连接失败
    
    ENetworkQuality_slow_very = 50,         ///< 很慢
    ENetworkQuality_slow,                   ///< 慢
    ENetworkQuality_normal,                 ///< 正常
};

/**
 压缩类型
 */
typedef NS_ENUM(uint8_t, PYIMCodecType) {
    /** audio codec */
    EIMCodec_adpcm,     ///< adpcm 编解码 4:1
    EIMCodec_opus,      ///< opus 10:1
    
    /** video codec */
    EIMCodec_x264 = 0x10,
    EIMCodec_H264,
};

#endif /* PYConfig_h */
