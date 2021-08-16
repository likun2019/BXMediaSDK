//
//  BXMOrderModel.h
//  BXMediaSDK
//
//  Created by likun on 2020/8/26.
//  Copyright © 2020 LIKUN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BXMOrderModel : NSObject

/// 发放记录编号
@property (nonatomic,strong) NSString *giveOrderNo;
/// 记录日期
@property (nonatomic,strong) NSString *curDate;
/// 媒体consumer_id
@property (nonatomic,strong) NSString *consumerId;
/// 活动No
@property (nonatomic,strong) NSString *activityNo;
/// 奖品赠送类型 1现金(单位:分)  2实物  3虚拟币
@property (nonatomic,assign) NSInteger giveType;
/// 奖品数量
@property (nonatomic,assign) NSInteger prizeNum;
/// 签名
@property (nonatomic,strong) NSString *sign;
/// 原始数据
@property (nonatomic,strong) NSDictionary *originalData;

@end

