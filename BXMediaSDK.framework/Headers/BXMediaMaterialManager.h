//
//  BXMediaMaterialManager.h
//  BXMediaSDK
//
//  Created by likun on 2020/9/1.
//  Copyright © 2020 LIKUN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BXMMaterialModel.h"

@interface BXMediaMaterialManager : NSObject

/// 获取入口素材
/// @param appkey appkey
/// @param placeId 资源位id
/// @param thirdUserId 三方用户唯一标示 可不传
/// @param materilasModel 返回素材
+ (void)getEntranceMaterialsWithAppkey:(NSString *)appkey
                                placId:(NSString *)placeId
                           thirdUserId:(NSString *)thirdUserId
                               success:(void(^)(BXMMaterialModel *model))materilasModel
                                  fail:(void(^)(NSString *error))error;


/// 入口展示上报
/// @param model 如果是自定义素材,则需要组装model
/// BXMMaterialModel *model = [[BXMMaterialModel alloc] init];
/// model.appKey = @"";
/// model.placeId = @"";
/// @param thirdUserId 三方用户唯一标示
+ (void)entranceShowEventTracking:(BXMMaterialModel *)model thirdUserId:(NSString *)thirdUserId;

/// 入口点击上报
/// @param model 如果是自定义素材,则需要组装model
/// BXMMaterialModel *model = [[BXMMaterialModel alloc] init];
/// model.appKey = @"";
/// model.placeId = @"";
/// @param thirdUserId 三方用户唯一标示
+ (void)entranceClickEventTracking:(BXMMaterialModel *)model thirdUserId:(NSString *)thirdUserId;
@end
