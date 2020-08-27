//
//  BXMediaModel.h
//  BXMediaSDK
//
//  Created by likun on 2020/8/26.
//  Copyright © 2020 LIKUN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BXMediaModel : NSObject

/// 广告唯一标示
@property (nonatomic,strong) NSString *requestId;
/// 视频类型
/// 1.穿山甲
/// 2.广点通
@property (nonatomic,assign) NSInteger adType;
/// 媒体广告位id
@property (nonatomic,strong) NSString *pid;
/// 扩展字段
@property (nonatomic,strong) NSString *extData;
@end

