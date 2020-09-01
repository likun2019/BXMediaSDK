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
/// 活动类型 1摇奖机 2飞镖 3大转盘 4刮刮卡
@property (nonatomic,assign) NSInteger activityType;
/// 原始数据
@property (nonatomic,strong) NSDictionary *originalData;
@end

