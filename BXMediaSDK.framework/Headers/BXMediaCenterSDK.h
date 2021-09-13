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

/**
 *************************************************
 *
 * 活动事件相关
 *
 **************************************************
 */

/// 加载激励视频广告
/// 当用户需要观看广告时,则会调用.
/// @param model model
- (void)showVideoAd:(BXMediaModel *)model;

/// 显示分享视图.
/// 如果媒体需要自己把活动分享出去,当用户点击活动中的分享按钮时,就会调用.
/// @param model model
- (void)showShare:(BXMediaModel *)model;

/// 提现
/// 如果配置奖品发放方式为媒体自身发放, 则会调用.
/// @param orderModel 订单
- (void)withdraw:(BXMOrderModel *)orderModel;

/// 显示banner类型的广告
/// @param model model
- (void)showBannerAd:(BXMediaModel *)model;


/// 隐藏banner类型的广告
- (void)hideBannerAd;

/**
 *************************************************
 *
 * 活动加载相关
 *
 **************************************************
 */
/// 加载进度
/// @param progress 视图加载进度
- (void)loadProgress:(double)progress;

/// webView的标题
/// @param title title
- (void)activityTitle:(NSString *)title;

/**
 *************************************************
 *
 * 以下方法为定制活动添加,详情请咨询我方开发人员
 *
 **************************************************
 */
/// 获取活动相关数据 sdk向媒体主动索取数据
/// @param activityData 获取活动相关数据
/// @param callBack 回调名称
- (void)getActivityData:(NSString *)activityData callBack:(NSString *)callBack;

/// 更新活动数据 sdk同步数据给媒体
/// @param activityData sdk传给媒体的数据
/// @param callBack 回调名称
- (void)updateActivityData:(NSString *)activityData callBack:(NSString *)callBack;

/// 点击对应任务
/// @param page 打开对应任务
/// @param callBack 回调名称
- (void)openPage:(NSString *)page callBack:(NSString *)callBack;


@end

@interface BXMediaCenterSDK : NSObject

/// sdk代理
@property (nonatomic,weak) id<BXMediaCenterSDKDelegate> delegate;

/// 设置平台appkey
/// @param appkey 平台的appKey
/// @param secretKey 平台的appSecret
+ (void)setAppKey:(NSString *)appkey
        secretKey:(NSString *)secretKey;


/// 获取sdk版本号
+ (NSString *)getSDKVersion;

/// 是否显示log, 默认不显示
/// @param isDebug bool
+ (void)setDebugLog:(BOOL)isDebug;

/// 媒体服务端主动获取活动数据
/// @param paramsData 参数
/// @param appKey appkey
/// @param placeId 资源位id
/// @param consumerId 用户id
/// @param result 回调结果数据,如果为nil,则请求失败
+ (void)getActivityData:(NSString *)paramsData
                 appKey:(NSString *)appKey
                placeId:(NSString *)placeId
             consumerId:(NSString *)consumerId
                 result:(void(^)(id jsonData))result;

/// 媒体服务端主动同步活动数据
/// @param paramsData 参数
/// @param appKey appkey
/// @param placeId 资源位id
/// @param consumerId 用户id
/// @param result 回调结果数据,如果为nil,则请求失败
+ (void)sendActivityData:(NSString *)paramsData
                  appKey:(NSString *)appKey
                 placeId:(NSString *)placeId
              consumerId:(NSString *)consumerId
                  result:(void(^)(id jsonData))result;


/// 媒体定制活动配置
/// @param placeId 资源位id 必填
/// @param consumerId 用户唯一标识-userid 必填
/// @param activityType 活动类型.当前支持红包雨-13
/// @param extParams 扩展字段 选填
/// @param result 配置结果
+ (void)getActivityConfigWithPlaceId:(NSString *)placeId consumerId:(NSString *)consumerId activityType:(NSInteger)activityType extParams:(NSString *)extParams result:(void(^)(id jsonData))result;


/// 扩展字段. 扩展字段的添加一定要在获取视图之前调用
/// @param extData 扩展字段
- (void)setExtData:(NSString *)extData;

/**
  设置支持的广告源, 用英文逗号分割 1穿山甲，2广点通，3快手，4百度
  @param adSources 支持的广告源
  一定要在 getViewWithFram 之前调用
  示例: [self.center setAdSources:@"1,2,3,4"];
 */
- (void)setAdSources:(NSString *)adSources;

/// 获取视图
/// @param frame 视图frame
/// @param thirdUserId 三方用户唯一标示
/// @param placeId 资源位Id
- (UIView *)getViewWithFram:(CGRect)frame
                thirdUserId:(NSString *)thirdUserId
                    placeId:(NSString *)placeId;


/// 视图是否可返回上一级
- (BOOL)canGoBack;
/// 视图在二级页面返回
- (void)goBack;
/// 刷新视图
- (void)reloadView;

/// 用户点击导航栏上的返回按钮
- (void)backButtonClick:(void(^)(BOOL result))completionHandler;

/**
 *************************************************
 *
 * 激励视频加载播放时机上报
 * 需根据穿山甲或者广点通对应的代理方法调用以下方法
 *
 **************************************************
 */
/// 视频加载成功上报
/// @param adId 广告id
- (void)exportVideoLoadSuccess:(NSString *)adId;

/// 视频曝光成功上报
/// @param adId 广告id
- (void)exportVideoExposeSuccess:(NSString *)adId;

/// 视频广告点击上报
/// @param adId 广告id
- (void)exportVideoClick:(NSString *)adId;

/// 视频播放完成,点击关闭按钮时上报
/// @param adId 广告id
- (void)exportVideoPlaySuccessWithId:(NSString *)adId;

/// 视频加载播放失败上报
/// @param adId 广告id
- (void)exportVideoPlayFaildWithId:(NSString *)adId __attribute__((deprecated("1.4.2.6版本开始废弃\n请使用新版- (void)exportVideoPlayFaildWithId:error:接口替换")));
/// 视频加载播放失败上报
/// @param adId adId 广告id
/// @param error 错误信息
- (void)exportVideoPlayFaildWithId:(NSString *)adId error:(NSError *)error;

/// 跳过视频
/// 视频未播放完成时已出现关闭按钮,用户点击关闭时调用
/// @param adId 广告id
- (void)exportVideoSkipWithId:(NSString *)adId;

/**
 *************************************************
 *
 * banner类型广告上报
 * 需根据穿山甲或者广点通对应的代理方法调用以下方法
 *
 **************************************************
 */

/// banner广告加载成功
/// @param adId 广告id
- (void)exportBannerAdLoadSuccess:(NSString *)adId;

/// banner广告展示成功(渲染成功)
/// @param adId 广告id
- (void)exportBannerAdExposeSuccess:(NSString *)adId;

/// banner广告被点击
/// @param adId 广告id
- (void)exportBannerAdClick:(NSString *)adId;

/// banner广告加载失败
/// @param adId 广告id
- (void)exportBannerAdFailed:(NSString *)adId;

/// banner广告被关闭
/// @param adId 广告id
- (void)exportBannerAdClose:(NSString *)adId;


/**
 *************************************************
 *
 * 其他定制功能回调
 *
 **************************************************
 */
/// 分享成功上报
/// 调用媒体自己的分享,在分享成功之后调用
/// @param adId 广告id
- (void)exportShareSuccessWithId:(NSString *)adId;

/// 上报活动相关数据
/// @param activityData 活动相关数据
/// @param callBack 回调名称
- (void)exportActivityData:(NSString *)activityData callBack:(NSString *)callBack;

/// 任务完成之后上报相关数据
/// @param pageData 任务数据
/// @param callBack 回调名称
- (void)exportPageData:(NSString *)pageData callBack:(NSString *)callBack;
@end

