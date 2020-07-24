//
//  BXMediaCenterSDK.h
//  BXMediaSDK
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@protocol BXMediaCenterSDKDelegate <NSObject>

@optional
/// 加载激励视频广告
/// @param adId 广告id
- (void)showVideoAdWithId:(NSString *)adId;

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
@end

