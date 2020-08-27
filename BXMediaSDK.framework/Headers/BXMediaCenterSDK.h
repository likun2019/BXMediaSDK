//
//  BXMediaCenterSDK.h
//  BXMediaSDK
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BXMOrderModel.h"
#import "BXMediaModel.h"
@protocol BXMediaCenterSDKDelegate <NSObject>

@optional
/// 加载激励视频广告
/// @param model model
- (void)showVideoAd:(BXMediaModel *)model;

/// 显示分享视图
/// @param model model
- (void)showShare:(BXMediaModel *)model;

/// 如果配置奖品发放方式为自身发放, 则会调用
/// @param orderModel 订单
- (void)withdraw:(BXMOrderModel *)orderModel;

@end

@interface BXMediaCenterSDK : NSObject

/// sdk代理
@property (nonatomic,weak) id<BXMediaCenterSDKDelegate> delegate;

/// 设置平台appkey
/// @param appkey 平台的appKey
/// @param secretKey 平台的appSecret
+ (void)setAppKey:(NSString *)appkey
        secretKey:(NSString *)secretKey;

/// 获取视图
/// @param frame 视图frame
/// @param thirdUserId 三方用户唯一标示
/// @param placeId 资源位Id
- (UIView *)getViewWithFram:(CGRect)frame
                thirdUserId:(NSString *)thirdUserId
                    placeId:(NSString *)placeId;

/// 视频播放完成上报
/// @param adId 广告id
- (void)exportVideoPlaySuccessWithId:(NSString *)adId;

/// 视频播放失败上报
/// @param adId 广告id
- (void)exportVideoPlayFaildWithId:(NSString *)adId;
/// 分享成功上报
/// @param adId 广告id
- (void)exportShareSuccessWithId:(NSString *)adId;
@end

