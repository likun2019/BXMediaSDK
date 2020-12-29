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
/// @param model 如果是自定义素材(即媒体自己的入口图片,不通过接口返回),则需要组装model
/// BXMMaterialModel *model = [[BXMMaterialModel alloc] init];
/// model.appKey = @"";
/// model.placeId = @"";
/// @param thirdUserId 三方用户唯一标示
+ (void)entranceShowEventTracking:(BXMMaterialModel *)model thirdUserId:(NSString *)thirdUserId NS_CLASS_DEPRECATED_IOS(1_0,1_3_6,"接口即将废弃,请替换新的接口 -entranceShowEventTrackingWithPlaceId");

/// 入口展示上报
/// @param placeId 资源位ID
/// @param thirdUserId 三方用户唯一标示 没有值传 @""
/// @param placeMateId 素材id 没有值传 @""
+ (void)entranceShowEventTrackingWithPlaceId:(NSString *)placeId thirdUserId:(NSString *)thirdUserId placeMateId:(NSString *)placeMateId;

/// 入口点击上报
/// @param model 如果是自定义素材(即媒体自己的入口图片,不通过接口返回),则需要组装model
/// BXMMaterialModel *model = [[BXMMaterialModel alloc] init];
/// model.appKey = @"";
/// model.placeId = @"";
/// @param thirdUserId 三方用户唯一标示
+ (void)entranceClickEventTracking:(BXMMaterialModel *)model thirdUserId:(NSString *)thirdUserId NS_CLASS_DEPRECATED_IOS(1_0,1_3_6,"接口即将废弃,请替换新的接口 -entranceClickEventTrackingWithPlaceId");

/// 入口点击上报
/// @param placeId 资源位ID
/// @param thirdUserId 三方用户唯一标示 没有值传 @""
/// @param placeMateId 素材id 没有值传 @""
+ (void)entranceClickEventTrackingWithPlaceId:(NSString *)placeId thirdUserId:(NSString *)thirdUserId placeMateId:(NSString *)placeMateId;
@end
