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
/// 入口素材url
@property (nonatomic,strong) NSString *materialPath;
/// 展示上报url
@property (nonatomic,strong) NSString *showUrl;
/// 点击上报url
@property (nonatomic,strong) NSString *clickUrl;
@end

