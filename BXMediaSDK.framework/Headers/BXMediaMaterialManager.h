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
+ (void)entranceShowEventTrackingWithPlaceId:(NSString *)placeId thirdUserId:(NSString *)thirdUserId placeMateId:(NSString *)placeMateId NS_CLASS_DEPRECATED_IOS(1_0,1_4_0,"接口即将废弃,请替换新的接口 -entranceShowEventTrackingWithPlaceId:userId:materialModel");

/// 入口展示上报
/// @param placeId 资源位ID 必填
/// @param userId 用户id 非必填 空值传 @""
/// @param materialModel getEntranceMaterialsWithAppkey接口获取到的model.如果是用户自定义的图片素材, 传 nil
+ (void)entranceShowEventTrackingWithPlaceId:(NSString *)placeId userId:(NSString *)userId materialModel:(BXMMaterialModel *)materialModel;

/// 多个入口同时曝光上报
/// @param userId 用户id 非必填 空值传 @""
/// @param placeMaterials 素材model数组
///  BXMMaterialModel *model = [[BXMMaterialModel alloc] init];
///  model.placeId = @"资源位id -- 必填";
///  model.placeMateId = @"素材ID--选填";
///  model.materialId = @"素材库ID -- 选填";
///  NSArray *placeMaterials = [NSArray arrayWithObject:model];
+ (void)bachEntranceShowEventTrackingWithUserId:(NSString *)userId placeMaterials:(NSArray *)placeMaterials;


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
+ (void)entranceClickEventTrackingWithPlaceId:(NSString *)placeId thirdUserId:(NSString *)thirdUserId placeMateId:(NSString *)placeMateId NS_CLASS_DEPRECATED_IOS(1_0,1_4_0,"接口即将废弃,请替换新的接口 -entranceClickEventTrackingWithPlaceId:userId:materialModel");

/// 入口点击上报
/// @param placeId 资源位id 必填
/// @param userId 用户id 非必填 空值传 @""
/// @param materialModel getEntranceMaterialsWithAppkey接口获取到的model.如果是用户自定义的图片素材, 传 nil
+ (void)entranceClickEventTrackingWithPlaceId:(NSString *)placeId userId:(NSString *)userId materialModel:(BXMMaterialModel *)materialModel;

@end
