//
//  BXMMaterilsModel.h
//  BXMediaSDK
//
//  Created by likun on 2020/9/1.
//  Copyright © 2020 LIKUN. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface BXMMaterialModel : NSObject
/// appkey
@property (nonatomic,strong) NSString *appKey;
/// 资源位id
@property (nonatomic,strong) NSString *placeId;
/// 素材id
@property (nonatomic,strong) NSString *placeMateId;
/// 入口素材url
@property (nonatomic,strong) NSString *materialPath;
/// 展示上报url
@property (nonatomic,strong) NSString *showUrl __attribute__((unavailable("从1.3.7开始参数已经废弃")));
/// 点击上报url
@property (nonatomic,strong) NSString *clickUrl __attribute__((unavailable("从1.3.7开始参数已经废弃")));
@end

