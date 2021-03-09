# 

## **1.集成须知**

### **1.1********小满SDK简介**

#### 1.1.1 小满聚合平台变现流程

* 您可以通过下面的表格，按照我们的基础步骤迅速地开始使用小满聚合平台。
|快速接入导航|
|:----|
|1.申请并创建账号|
|2.集成小满 SDK|
|3.已支持的的第三方广告平台|
|4.聚合管理设置|
|5.SDK集成测试|
|6.查看数据报表|


#### 1.1.2 活动工具产品介绍

* 小满科技活动运营工具SDK支持安卓和苹果两大平台，支持丰富的运营活动工具的管理功能和多种程序语言版本的API开放接口，具有各个语言版本的SDK使用方法相同，接口调用方式相同，错误码相同以及返回包格式相同等优点。同时，我们还提供SDK集成文档、开发者后台配置、高级功能使用、经典变现案例等全方位服务，为实现最大化变现收益保驾护航。
* 小满的活动工具产品有摇奖机活动、夏日飞镖、新刮刮卡活动、大转盘、农场果树、剪羊毛、忍者飞镖、翻牌子活动等，包含集卡类、闯关类、概率类、养成类多种活动类型，玩法策略上包括社交电商类、影音类、工具类、运动类、游戏类、网赚类、小说类等多种玩法，同时每个活动工具同还具备多套皮肤和多个主题，可根据节日和热点事件等运营需要进行自定义更换。
#### 1.1.3 业务流程

![图片](https://uploader.shimo.im/f/j3HP46jFwR6qFLoF.png!thumbnail?fileGuid=VKGjhK6vH38tGxrP)

#### 1.1.4**隐私协议地址**

[https://web.hixiaoman.com/app-h5/1.0.0/privacy.html](https://web.hixiaoman.com/app-h5/1.0.0/privacy.html)

#### 1.1.5 对接流程

![图片](https://uploader.shimo.im/f/KEw6mMJDgERsy1ar.png!thumbnail?fileGuid=VKGjhK6vH38tGxrP)

### **1.2 账号申请**

请联系商务在⼩满系统申请媒体账号获取appKey、secretKey、placeId;

### **1.3 集成小满SDK**

参考**SDK接入配置说明文档**将SDK集成进您的应用中。

* 下载SDK链接
|系统平台|地址|
|:----|:----|
|Android SDK|技术提供包名|
|iOS SDK|技术提供包名|


* SDK接入配置说明文档
|系统平台|说明|
|:----|:----|
|Android SDK|查看2.1|
|iOS SDK|查看2.2|


### **1.4 已支持的****广告平台**

* 穿山甲
* 广点通
* 快手
* ...
### **1.5 聚合管理设置**

* 分流比例：每次请求广告时，按照设置的分流比例命中相应的广告计划；
* 权重顺序：请求广告时，按照设置的权重大小，降序命中广告计划；
### **1.6********集成测试**

本步骤对于验证您集成是否成功非常重要。按照测试指引来验证广告是否正常曝光，展示和点击是否成功追踪。我们通过设置示例应用程序和广告位来简化测试。参考SDK测试指引：

* 对应接入测试的文档链接

无法复制加载中的内容

### **1.7********查看报表**

恭喜您成功集成了SDK,可以开始创收啦！ 应用发布后，可以在**报表**中查看数据效果。综合报表为您提供全局的广告变现数据进行分析，从而进一步提升广告变现收益。

目前支持的数据维度有：日期、应用、广告位、广告场景、广告样式、广告平台、广告源、SDK版本、应用版本。

* **应用**：选择只查看指定的应用数据，或者不包括部分应用的数据，您可以简单地包括或者不包括某些应用。
* **广告位**：选择只查看指定的广告位数据，或者不包括部分广告位的数据，您可以简单地包括或者不包括某些 广告位；支持广告位名称或者ID搜索。
* **广告样式**：指定查看某一种广告样式的数据，如激励视频或者插屏。
* **广告平台**：指定查看某个广告平台的数据。
* **广告源**：选择查看指定的广告源数据，您可以简单的包括或者不包括某些广告源；支持广告源名称或者ID搜索。
* **广告场景**：选择查看指定的广告场景数据，或者不包括部分广告场景的数据，您可以简单地包括或者不包括某些广告场景；支持广告场景名称搜索；

平台提供了如下数据指标：

* **DAU**：每天打开应用的独立用户数。注意：根据GDPR协议，欧盟地区需要用户同意后才会统计数据.
* **人均收益**:人均收益，计算公式: 收益/DAU
* **新用户**：首次使用应用的用户
* **新用户占比**：首次使用应用的用户占比，计算公式：新增用户/DAU
* **DEU**：每天观看过广告的独立用户数。DAU仅支持应用维度，DEU支持应用、广告位两种维度，不同筛选条件下，DEU的数据会有所变化。
* **渗透率**：每天观看过广告的用户占比，计算公式：DEU/DAU
* **流****量****请求**：应用向平台发送请求的次数。一次流量请求可能触发多次广告请求
* **流量填充率**：应用向平台发送请求后，返回成功的占比
* **广告请求**：平台向广告平台发送请求的次数。一次流量请求可能触发多次广告请求
* **广告填充率**：平台向广告平台发送请求后，返回成功的占比
* **展示**：平台统计的广告曝光数。由于统计口径差异、网络丢包等因素，平台展示与广告平台展示可能存在一定差异。
* **展示率**：平台统计的广告展示率。计算公式：展示/填充。需注意的是部分广告平台有自动填充逻辑，平台 SDK无法统计广告平台的自动填充数，因此会出现展示率大于100%的情况。
* **eCPM**：平台统计的千次展示收益，计算公式：收益*1000/展示
* **点击**：平台统计的广告点击数。部分平台不提供点击回调，导致平台无法统计到用户的点击行为
* **点击率**：平台统计的广告点击率，计算公式：点击/展示
* **收益**：平台通过API向广告平台拉取到的收益
* **展示API**：平台通过API向广告平台拉取到的广告曝光数。由于统计口径差异、网络丢包等因素，平台展示与广告平台展示可能存在一定差异
* **eCPM API**：平台通过API向广告平台拉取到的千次展示收益，计算公式：收益*1000/展示 API
* **点击API**：平台通过API向广告平台拉取到的广告点击数
* **点击率API**：平台通过API向广告平台拉取到的广告点击率，计算公式：点击 API/展示 API
* **请求API**：平台通过API向广告平台拉取到的请求数，部分平台不提供此数据
* **填充率API**：平台通过API向广告平台拉取到的填充率，部分平台不提供此数据
## **2.****SDK****接入****配置**

### **2.1****iOS**

#### **2.1.1 系统版****本****限制******

* SDK 最低兼容的系统版本为 iOS 9.0。
* SDK获取隐私信息： IDFA
#### **2****.1****.2 集成****⽅式******

本 SDK 可通过 CocoaPods 集成，在⼯程的 Podfifile⾥⾯添加以下代码：

```plain
pod 'BXMediaSDK', '1.4.0'
```
保存并执⾏pod install，然后⽤后缀为.xcworkspace 的⽂件打开⼯程。

* 如果发现没有最新版本，请使用pod repo update命令更新pod库。
* 如果不支持pod方式或者有其他特殊需要，请与我方技术人员联系。
#### **2.1.3********环境****配置******

* 需在 Build Settings - Linking - Other Linker Flags 处添加上-ObjC。
* 在iOS14以上，IDFA需要申请权限。
* 需要在 info.plist 中添加⼀下属性支持http请求：
```plain
<key>NSAppTransportSecurity</key>
<dict>
<key>NSAllowsArbitraryLoads</key>
<true/>
</dict>
```
#### **2.1.4 初始化SDK**

引⼊头⽂件：

```plain
#import <BXMediaSDK/BXMediaCenterSDK.h>
```
在⼯程 AppDelegate.m 的 application:didFinishLaunchingWithOptions:⽅法中初始化：

```plain
- (BOOL)application:(UIApplication *)application
didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
//初始化
[BXMediaCenterSDK setAppKey:@"appkey" secretKey:@"secretkey"];
return YES;
}
```
#### **2.1.5 获取⼊⼝图片**

本活动支持提供入口图片配置服务，请提前与运营人员沟通

```plain
//引入头文件
#import <BXMediaSDK/BXMediaMaterialManager.h>
```
**2.1.5.1 获取⼊⼝图片**

**1）客户端直接获取小满入口素材URL（推荐）**

SDK提供入口素材图片。对接前，需要与我方运营沟通，让运营人员在后台配置入口图片。

```plain
[BXMediaMaterialManager getEntranceMaterialsWithAppkey:@"appkey"
placId:@"placeId" thirdUserId:"userId" success:^(BXMMaterialModel *model)
{
// 获取到素材url。model中的具体参数，参照代码中的注释
} fail:^(NSString *error) {
}];
```
**2） 服务端通过调用小满入口素材URL**

详细对接请看2.4.1步骤。

#### **2.1.6 ⼊⼝上报****必须调用**

不管有没有使用获取入口素材图片的方法，**这两个方法必须调用**。目的是为了更好的统计入口点击率，优化活动的运营策略，提升活动点击率。

**2.1.6.1 ⼊⼝展示上报**

* **在入口图片加载完成之后就调用。**
```plain
///入口展示上报
///@paramplaceId 资源位ID 必填
///@param userId 用户id 非必填 空值传 @""
///@param materialModel getEntranceMaterialsWithAppkey接口获取到的model.如果是用户自定义的图片素材, 传 nil/
[BXMediaMaterialManageentranceShowEventTrackingWithPlaceId:@"资源位Id" userId:@"用户Id" materialModel:model];
```
**2****.****1.6.2 ⼊⼝点击上报**

* **在点击入口图片素材进入活动页面的时候调用。**
```plain
///入口点击上报
///@param placeId 资源位id 必填
///@param userId 用户id 非必填 空值传 @""
///@param materialModel getEntranceMaterialsWithAppkey接口获取到的model.如果是用户自定义的图片素材, 传 nil
[BXMediaMaterialManager entranceClickEventTrackingWithPlaceId:@""userId:@""materialModel:model];
```
**2.1.6.3 ⼊⼝曝光批量上报**

**使用场景：**当APP当前页面有多个资源位（或入口素材）曝光的时候，需要一次上报多个入口曝光数据，可以使用该接口。

```plain
///多个入口同时曝光上报
///@param userId 用户id 非必填 空值传 @""
///@param placeMaterials 素材model数组
///BXMMaterialModel *model = [[BXMMaterialModel alloc] init];
///model.placeId = @"资源位id -- 必填";
///model.placeMateId = @"素材ID--选填";
///model.materialId = @"素材库ID -- 选填";
///NSArray *placeMaterials = [NSArray arrayWithObject:model];
+ (void)bachEntranceShowEventTrackingWithUserId:(NSString *)userId placeMaterials:(NSArray *)placeMaterials;
```
#### **2****.1****.7********获取视图**

该方法会返回一个UIView视图。用法和普通UIView视图的用法一样。

* 注意：视图不能重新改变frame。要在初始化的时候设置好。
* **placeId为动态参数，建议由服务端下发给客户端，客户端不要写成固定**。方便资源位的运营，适应更多场景。
```plain
- (void)viewDidLoad {
[super viewDidLoad];
BXMediaCenterSDK*center = [[BXMediaCenterSDK alloc] init];
center.delegate = self;
self.center = center;
UIView *webView = [center getViewWithFram:self.view.frame
thirdUserId:@"userId" placeId:@"placeId"];
[self.view addSubview:webView];
}
```
**2.1.7.1 调⽤激励视频**

当用户在玩游戏过程中，出现弹窗或者条件需要用户观看视频才能继续下去的时候，SDK会调用以下代理方法。**返回的model中包含广告平台adType和对应平台的代码位id（即pid），媒体方根据接收到的信息来出对应的激励视频。因此媒体方不要把代码位固定，否则活动广告运营策略无法生效。**

```plain
- (void)showVideoAd:(BXMediaModel *)model{
// TODO: 显示激励视频广告。model中的具体参数，参照代码中的注释
}
```
具体使用如下：

```plain
- (void)showVideoAd:(BXMediaModel *)model{
self.adId = model.requestId;
// 根据adType值判断是哪个平台的，然后获取mode中的pid来加载广告。这里用的是穿山甲例子，穿山甲的具体用法以穿山甲最新文档为准。
 if (model.adType == 1) {
BURewardedVideoModel *rewardModel = [[BURewardedVideoModel alloc] init];
rewardModel.userId = self.userId;
self.rewardedVideoAd = [[BUNativeExpressRewardedVideoAd alloc] initWithSlotID:model.pid rewardedVideoModel:rewardModel];
 self.rewardedVideoAd.delegate = self;
[self.rewardedVideoAd loadAdData];
}
}
```
**2.1.7.2 激励视频播放事件上报**

在用户观看完激励视频之后，需要根据对应广告平台的对应代理方法，调用以下三个对应的上报方法，上报给SDK。

* 如果出现看完视频之后，活动页面弹窗不消失。请检查以下三个方法是否调用正确。
* 如果视频加载等待时间过久，请尝试使用预加载或者添加过场动画。
* 如果视频加载失败，活动中的奖励是会正常领取的，只有在翻倍等特殊场景下才不会发放奖励，请知晓。
* 如果激励视频拉取不到，请检查穿山甲或者广点通的报错代理方法，查看具体错误。
```plain
/// 视频加载成功上报,如果要做广告预加载，请在视频曝光的时候也调用加载成功的上报
- (void)exportVideoLoadSuccess:(NSString *)adId;
/// 视频曝光成功上报
- (void)exportVideoExposeSuccess:(NSString *)adId;
/// 视频广告点击上报
- (void)exportVideoClick:(NSString *)adId;
/// 视频播放完成,点击关闭按钮时上报,需要验证是否是有效激励视频
- (void)exportVideoPlaySuccessWithId:(NSString *)adId;
/// 视频加载播放失败上报
- (void)exportVideoPlayFaildWithId:(NSString *)adId;
/// 跳过视频
/// 视频未播放完成时已出现关闭按钮,用户点击关闭时调用
- (void)exportVideoSkipWithId:(NSString *)adId;
```
穿山甲具体使用如下：

```plain
#pragma mark - BURewardedVideoAdDelegate
- (void)nativeExpressRewardedVideoAdDidLoad:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd{
NSLog(@"穿山甲-激励视频广告-物料-加载成功");
[self.rewardedVideoAd showAdFromRootViewController:self.navigationController ritScene:BURitSceneType_home_get_bonus ritSceneDescribe:nil];
[self.center exportVideoLoadSuccess:self.adId];
self.videoVerify = NO;
}
- (void)nativeExpressRewardedVideoAdViewRenderSuccess:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd{
NSLog(@"穿山甲-激励视频广告-展示");
[self.center exportVideoExposeSuccess:self.adId];
}
- (void)nativeExpressRewardedVideoAdDidClose:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd{
NSLog(@"穿山甲-视频关闭");
if (self.videoVerify) {
[self.center exportVideoPlaySuccessWithId:self.adId];
}else{
[self.center exportVideoSkipWithId:self.adId];
}
}
- (void)nativeExpressRewardedVideoAd:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd didFailWithError:(NSError *_Nullable)error{
NSLog(@"穿山甲-视频或素材加载失败: %@",error);
[self.center exportVideoPlayFaildWithId:self.adId];
}
- (void)nativeExpressRewardedVideoAdDidClick:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd{
NSLog(@"穿山甲-激励视频广告-点击");
[self.center exportVideoClick:self.adId];
}
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd verify:(BOOL)verify{
NSLog(@"穿山甲-激励视屏-验证结果-%d",verify);
self.videoVerify = verify;
}
```
广点通的回调需要注意判断视频是否播放完成：

```plain
#pragma mark - GDTRewardedVideoAdDelegate
- (void)gdt_rewardVideoAdVideoDidLoad:(GDTRewardVideoAd *)rewardedVideoAd{
NSLog(@"广点通-视频数据下载成功回调，已经下载过的视频会直接回调");
 self.videoVerify = NO;
if (self.rewardVideoAd.isAdValid) {
[self.rewardVideoAd showAdFromRootViewController:self];
[self.center exportVideoLoadSuccess:self.adId];
}
}
- (void)gdt_rewardVideoAdDidExposed:(GDTRewardVideoAd *)rewardedVideoAd{
NSLog(@"广点通-视频广告曝光回调");
[self.center exportVideoExposeSuccess:self.adId];
}
- (void)gdt_rewardVideoAdDidClose:(GDTRewardVideoAd *)rewardedVideoAd{
NSLog(@"广点通-视频播放页关闭回调");
if (self.videoVerify) {
[self.center exportVideoPlaySuccessWithId:self.adId];
}else{
NSLog(@"调用跳过方法");
[self.center exportVideoSkipWithId:self.adId];
}
}
- (void)gdt_rewardVideoAd:(GDTRewardVideoAd *)rewardedVideoAddidFailWithError:(NSError *)error{
NSLog(@"广点通-视频广告各种错误信息回调 %@",error);
[self.center exportVideoPlayFaildWithId:self.adId];
}
- (void)gdt_rewardVideoAdDidRewardEffective:(GDTRewardVideoAd *)rewardedVideoAd{
NSLog(@"广点通-视频广告播放达到激励条件回调");
self.videoVerify = YES;
}
- (void)gdt_rewardVideoAdDidClicked:(GDTRewardVideoAd *)rewardedVideoAd{
NSLog(@"广点通-视频广告点击");
[self.center exportVideoClick:self.adId];
}
```
2.1.7.3 显示banner类型广告

场景一：弹窗底部banner

* **适用场景**：在用户参与活动过程中弹窗提示“恭喜获得XX”时出现在游戏页面底部的位置。SDK会在该广告位有广告计划的时候通知客户端加载该广告。媒体则需要在对应的广告平台申请广告位：

1、广点通平台

![图片](https://uploader.shimo.im/f/9tm5Qf24zhSLsFpZ.png!thumbnail?fileGuid=VKGjhK6vH38tGxrP)


2、穿山甲平台

![图片](https://uploader.shimo.im/f/WVFZ36UocDJqHf68.png!thumbnail?fileGuid=VKGjhK6vH38tGxrP)



媒体申请好对应的广告位之后，需实现BXMediaCenterSDKDelegate对应的代理方法

```plain
/// 展示banner广告
- (void)showBannerAd:(BXMediaModel *)model{
NSLog(@"展示bannerAd");
if (model.adType == 4) {
// 穿山甲平台 SlotID仅作为demo中使用，媒体要注意替换。从model.pid中获取
self.bannerAdId = model.requestId;
self.bannerView = [[BUNativeExpressBannerView alloc] initWithSlotID:@"945697676" rootViewController:self adSize:CGSizeMake(600, 150) IsSupportDeepLink:YES];
self.bannerView.frame = CGRectMake(0, self.view.frame.size.height-150, self.view.frame.size.width, 150);
self.bannerView.delegate = self;
[self.bannerView loadAdData];
[self.view addSubview:self.bannerView];
}else if (model.adType == 5){
// 广点通平台 这里placementId仅作为demo中使用。媒体要注意替换。从model.pid中获取
CGRect rect = {CGPointZero, CGSizeMake(375, 60)};
self.gdtBannerView = [[GDTUnifiedBannerView alloc] initWithFrame:rectplacementId:@"2071745960440452" viewController:self];
self.gdtBannerView.animated = YES;
self.gdtBannerView.delegate = self;
[self.gdtBannerView loadAdAndShow];
[self.view addSubview:self.gdtBannerView];
}
}
///隐藏banner广告
- (void)hideBannerAd{
NSLog(@"隐藏ADbanner");
if (self.bannerView) {
[self.bannerView removeFromSuperview];
self.bannerView = nil;
if (self.bannerAdId.length>0) {
[self.center exportBannerAdClose:self.bannerAdId];
}
}
}
#pragma mark - BUNativeExpressBannerViewDelegate
-(void)nativeExpressBannerAdViewDidLoad:(BUNativeExpressBannerView *)bannerAdView{
NSLog(@"banner-加载");
[self.center exportBannerAdLoadSuccess:self.bannerAdId];
}
-(void)nativeExpressBannerAdView:(BUNativeExpressBannerView *)bannerAdView didLoadFailWithError:(NSError *_Nullable)error{
NSLog(@"banner-加载失败-%@",error.description);
[self.center exportBannerAdFailed:self.bannerAdId];
}
- (void)nativeExpressBannerAdViewRenderSuccess:(BUNativeExpressBannerView *)bannerAdView{
NSLog(@"banner-渲染成功");
[self.center exportBannerAdExposeSuccess:self.bannerAdId];
}
-(void)nativeExpressBannerAdViewRenderFail:(BUNativeExpressBannerView *)bannerAdView error:(NSError * __nullable)error{
NSLog(@"banner-渲染失败");
[self.center exportBannerAdFailed:self.bannerAdId];
}
- (void)nativeExpressBannerAdViewDidClick:(BUNativeExpressBannerView *)bannerAdView{
NSLog(@"banner-点击");
[self.center exportBannerAdClick:self.bannerAdId];
}
- (void)nativeExpressBannerAdView:(BUNativeExpressBannerView *)bannerAdView dislikeWithReason:(NSArray<BUDislikeWords *> *_Nullable)filterwords{
NSLog(@"banner- 回调方法，需要在此回调方法中进行广告的移除操作，并将广告对象置为nil，如若不实现此回调方法，关闭按钮将不会生效");
[bannerAdView removeFromSuperview];
self.bannerView = nil;
[self.center exportBannerAdClose:self.bannerAdId];
}
#pragma mark - GDTUnifiedBannerViewDelegate
- (void)unifiedBannerViewDidLoad:(GDTUnifiedBannerView*)unifiedBannerView{
NSLog(@"gdt-banner-加载成功");
[self.center exportBannerAdLoadSuccess:self.bannerAdId];
}
- (void)unifiedBannerViewFailedToLoad:(GDTUnifiedBannerView *)unifiedBannerView error:(NSError *)error{
NSLog(@"gdt-banner-加载失败-%@",error.description);
[self.center exportBannerAdFailed:self.bannerAdId];
}
- (void)unifiedBannerViewWillExpose:(GDTUnifiedBannerView *)unifiedBannerView{
NSLog(@"gdt-banner-曝光");
[self.center exportBannerAdExposeSuccess:self.bannerAdId];
}
- (void)unifiedBannerViewClicked:(GDTUnifiedBannerView *)unifiedBannerView{
NSLog(@"gdt-banner-点击");
[self.center exportBannerAdClick:self.bannerAdId];
}
- (void)unifiedBannerViewWillClose:(GDTUnifiedBannerView *)unifiedBannerView{
NSLog(@"gdt-banner-用户关闭时调用");
[unifiedBannerView removeFromSuperview];
self.bannerView = nil;
[self.center exportBannerAdClose:self.bannerAdId];
}
```
场景二：导流倒计时弹窗

* **适用场景**：适用于具备导流至其他活动的的工具，具体场景为：用户点击导流按钮进入导流活动前弹窗展示banner广告
* **优势**：以弹窗插屏的形式深度结合导流入口场景巧妙的弹出banner广告，将广告前置，导流入口流量利用率更高，用户高参与度、高复参，提高整体收益。

1、广点通平台

![图片](https://uploader.shimo.im/f/4ai3xl7Tw5L3brIC.png!thumbnail?fileGuid=VKGjhK6vH38tGxrP)

2、穿山甲平台

![图片](https://uploader.shimo.im/f/3EJRTYweT4rxATed.png!thumbnail?fileGuid=VKGjhK6vH38tGxrP)

```plain
// 展示banner
- (void)showBannerAd:(BXMediaModel *)model{
NSLog(@"展示bannerAd");
NSLog(@"获取对应平台的代码位ID ==========> %@",model.pid);
self.bannerAdId = model.requestId;
if (model.adType == 13){

NSLog(@"穿山甲跳转中部广告");
CGFloat w = self.view.frame.size.width-20;
CGFloat h = (self.view.frame.size.width-20)/2;

self.bannerView = [[BUNativeExpressBannerView alloc] initWithSlotID:@"945853767" rootViewController:self adSize:CGSizeMake(w, h) IsSupportDeepLink:YES];
self.bannerView.frame = CGRectMake(10, (self.view.frame.size.height-h)/2, w, h);
self.bannerView.delegate = self;
[self.bannerView loadAdData];
[self.view addSubview:self.bannerView];

}else if (model.adType == 14){

NSLog(@"广点通跳转中部广告");
GDTAdParams *adParams = [[GDTAdParams alloc] init];
adParams.adSize = CGSizeMake(self.view.frame.size.width-20, 50);
self.adManager = [[GDTNativeExpressProAdManager alloc] initWithPlacementId:@"3001861236344999" adPrams:adParams];
self.adManager.delegate = self;
[self.adManager loadAd:1];

}
}
// 隐藏banner
- (void)hideBannerAd{
NSLog(@"隐藏ADbanner");
if (self.bannerView) {
[self.bannerView removeFromSuperview];
self.bannerView = nil;
if (self.bannerAdId.length>0) {
[self.center exportBannerAdClose:self.bannerAdId];
}
}
if (self.gdtExpressAdContentView) {
[self.gdtExpressAdContentView removeFromSuperview];
self.gdtExpressAdContentView = nil;
}
}
#pragma mark - BUNativeExpressBannerViewDelegate
- (void)nativeExpressBannerAdViewDidLoad:(BUNativeExpressBannerView *)bannerAdView{
NSLog(@"穿山甲-banner-加载");
[self.center exportBannerAdLoadSuccess:self.bannerAdId];
}
- (void)nativeExpressBannerAdView:(BUNativeExpressBannerView *)bannerAdView didLoadFailWithError:(NSError *_Nullable)error{
NSLog(@"穿山甲-banner-加载失败-%@",error.description);
[self.center exportBannerAdFailed:self.bannerAdId];
}
- (void)nativeExpressBannerAdViewRenderSuccess:(BUNativeExpressBannerView *)bannerAdView{
NSLog(@"穿山甲-banner-渲染成功");
[self.center exportBannerAdExposeSuccess:self.bannerAdId];
}
- (void)nativeExpressBannerAdViewRenderFail:(BUNativeExpressBannerView *)bannerAdView error:(NSError * __nullable)error{
NSLog(@"穿山甲-banner-渲染失败");
[self.center exportBannerAdFailed:self.bannerAdId];
}
- (void)nativeExpressBannerAdViewWillBecomVisible:(BUNativeExpressBannerView *)bannerAdView{
NSLog(@"穿山甲-banner- 当显示新的广告时调用此方法");
}
- (void)nativeExpressBannerAdViewDidClick:(BUNativeExpressBannerView *)bannerAdView{
NSLog(@"穿山甲-banner-点击");
[self.center exportBannerAdClick:self.bannerAdId];
}

- (void)nativeExpressBannerAdView:(BUNativeExpressBannerView *)bannerAdView dislikeWithReason:(NSArray<BUDislikeWords*> *_Nullable)filterwords{
NSLog(@"穿山甲-banner- 回调方法，需要在此回调方法中进行广告的移除操作，并将广告对象置为nil，如若不实现此回调方法，关闭按钮将不会生效");
[bannerAdView removeFromSuperview];
self.bannerView = nil;
[self.center exportBannerAdClose:self.bannerAdId];
}
#pragma mark - GDTNativeExpressProAdManagerDelegate
- (void)gdt_nativeExpressProAdSuccessToLoad:(GDTNativeExpressProAdManager *)adManager views:(NSArray<__kindof GDTNativeExpressProAdView *> *)views
{
   NSLog(@"gdt-center-banner-拉取模板成功");
  [self.center exportBannerAdLoadSuccess:self.bannerAdId];

if (views.count>0) {
GDTNativeExpressProAdView *adView = views.firstObject;
adView.controller = self;
adView.delegate = self;
[adView render];
self.gdtExpressAdContentView = [[UIView alloc] initWithFrame:CGRectMake(10, (self.view.frame.size.height-adView.frame.size.height)/2, adView.frame.size.width, adView.frame.size.height)];
[self.view addSubview:self.gdtExpressAdContentView];
[self.gdtExpressAdContentView addSubview:adView];
 
}
}
- (void)gdt_nativeExpressProAdFailToLoad:(GDTNativeExpressProAdManager*)adManager error:(NSError *)error{
NSLog(@"gdt-center-banner-拉取模板失败");
[self.center exportBannerAdFailed:self.bannerAdId];
}
#pragma mark - GDTNativeExpressProAdViewDelegate
- (void)gdt_NativeExpressProAdViewRenderSuccess:(GDTNativeExpressProAdView *)nativeExpressProAdView{
NSLog(@"平台模板2.0广告渲染成功");

self.gdtExpressAdContentView.frame = CGRectMake(10, (self.view.frame.size.height-nativeExpressProAdView.frame.size.height)/2, nativeExpressProAdView.frame.size.width,nativeExpressProAdView.frame.size.height);

}
- (void)gdt_NativeExpressProAdViewRenderFail:(GDTNativeExpressProAdView *)nativeExpressProAdView{
NSLog(@"平台模板2.0广告渲染失败");
[self.center exportBannerAdFailed:self.bannerAdId];
}
- (void)gdt_NativeExpressProAdViewExposure:(GDTNativeExpressProAdView *)nativeExpressProAdView{
NSLog(@"平台模板2.0广告曝光回调");
[self.center exportBannerAdExposeSuccess:self.bannerAdId];
}
- (void)gdt_NativeExpressProAdViewClicked:(GDTNativeExpressProAdView *)nativeExpressProAdView{
NSLog(@"平台模板2.0广告点击回调");
[self.center exportBannerAdClick:self.bannerAdId];
}
- (void)gdt_NativeExpressProAdViewClosed:(GDTNativeExpressProAdView *)nativeExpressProAdView{
NSLog(@"平台模板2.0广告被关闭");
if (self.gdtExpressAdContentView) {
[self.gdtExpressAdContentView removeFromSuperview];
self.gdtExpressAdContentView = nil;
}
[self.center exportBannerAdClose:self.bannerAdId];
}
- (void)gdt_NativeExpressProAdViewDidDissmissScreen:(GDTNativeExpressProAdView *)nativeExpressProAdView{
NSLog(@"全屏广告页已经关闭");
if (self.gdtExpressAdContentView) {
[self.gdtExpressAdContentView removeFromSuperview];
self.gdtExpressAdContentView = nil;
}
[self.center exportBannerAdClose:self.bannerAdId];
}
```

2.1.7.4获取活动标题

```plain
- (void)activityTitle:(NSString *)title{
NSLog(@"%@",title);
self.navigationItem.title = title;
}
```
2.1.7.5获取活动加载进度

```plain
- (void)loadProgress:(double)progress{
NSLog(@"%f",progress);
}
```
2.1.7.6 返回上一级页面**必须调用**

**使用场景：**是在用户退出的时候做一个拦截，提醒用户是否有其他需要，是就留下，否就返回。

**目的：**可有效提升用户广告位点击次数，提高ecpm，进一步提升媒体广告收益。

```plain
__weaktypeof(self) weakSelf = self;
[self.centerbackButtonClick:^(BOOL result) {
if (result) {
[weakSelf.navigationControllerpopViewControllerAnimated:YES];
}
}];
```
#### **2.1.8 设置扩展字段**

* 适用于媒体方上报新老用户等数据
```plain
/**
* 媒体user类型 0未知 1新用户 2老用户
* 该方法调用一定要在 getViewWithFram：thirdUserId： placeId：方法之前
*/
[self.center setExtData:@"{\"consumerType\":\"1\"}"];
```

### **2.2 Android**

#### **2.2.1 系统版本限制**

最低兼容的Api版本为 19。

#### **2.2.2 在根目录下build.gradle中添加**

```plain
//正式
allprojects {
repositories {
maven { url "http://47.97.184.214:8081/nexus/content/groups/public" }

}
}
```
#### **2.2.3 在app/build.gradle中 添加**

```plain
dependencies{
implementation "com.bx:adsdk:1.3.8.10"
}
```
#### **2.2.4 添加权限**

```plain
<uses-permission android:name="android.permission.ACCESS_WIFI_STATE" />
<uses-permission android:name="android.permission.READ_PHONE_STATE" />
<uses-permission android:name="android.permission.CHANGE_WIFI_STATE" />
<uses-permission android:name="android.permission.INTERNET" />
<uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE" />
<uses-permission android:name="android.permission.WRITE_EXTERNAL_STORAGE" />
```
**2.2.4.1 相关隐私权限**

* IMEI
* OAID
* MAC地址
* AndroidId
* 序列号
* UUID
#### **2.2.5 添加网络安全配置文件**

>android:networkSecurityConfig="@xml/network*security*config"

创建 res/xml/network*security*config.xml

```plain
<?xml version="1.0" encoding="utf-8"?>
<network-security-config>
<base-config cleartextTrafficPermitted="true">
<trust-anchors>
<certificates src="system" />
</trust-anchors>
</base-config>
</network-security-config>
```
#### **2.2.6 初始化SDK**

```plain
public class DemoApplication extends Application {
public void onCreate() {
super.onCreate();
//打开日志
AdSdk.setDebug(true);
//初始化 需要在Applicaiton 中
AdSdk.init(Application context,  String appkey, String secretKey)
}
}
```
#### **2.2.7  素材入口上报**

2.2.7.1**曝光上报,在活动入口渲染完成后****必须调用**

```plain
/**
* 资源位加载完毕后  资源位就是小满活动的入口
* @param placeId 资源位id：必传
* @param userId 用户id，必填
* @param placeMateId 素材id：必填 如果使用自己的入口素材图片，可以传""
* @param materialId 素材库id：必填 如果使用自己的入口素材图片，可以传""
*
*/
AdSdk.exposure(mPlaceId, mUserId, placeMateId,materialId);
```
**2.2.7.2 点击上报，****活动****入口点击时进行调用****必须调用**

```plain
/**
* @param placeId 资源位id：必传
* @param userId 用户id，必填
* @param placeMateId 素材id：必填 如果使用自己的入口素材图片，可以传""
* @param materialId 素材库id：必填 如果使用自己的入口素材图片，可以传""
*/
AdSdk.click(mPlaceId, mUserId, placeMateId,materialId);
```
#### 2.2.8 入口图片的批量曝光上报（多入口，符合使用场景可调用）

为了更好的运营资源位，提高活动的点击率，我们希望搜集入口的曝光和点击数据，以便及时更换入口素材，提升活动收益。

**使用场景：**当APP当前页面有多个资源位（或入口素材）曝光的时候，需要一次上报多个入口曝光数据，可以使用该接口。

```plain
/**
* @param userId 用户id，必填
* @param batchBeans list集合
*/
AdSdk.batchShow(mUserId,batchBeans);
```
示例如下：

```plain
ArrayList<BatchBean> list = new ArrayList<>();
BatchBean bean1 = new BatchBean("资源位id1","素材id1","s素材库id1");
BatchBean bean2 = new BatchBean("资源位id2","素材id2","s素材库id2");
BatchBean bean3 = new BatchBean("资源位id3","素材id3","s素材库id3");
list.add(bean1);
list.add(bean2);
list.add(bean3);
AdSdk.batchShow("userID",list);
```
#### **2.2.9 使用SDK**

* **placeId不能写死，由服务端下发给客户端，建议不要写成固定的，****方****便资源位运营，多场景适用**
```plain
/**
* @param userId 用户id，必传，不能为空，不能为0
* @param placeId 资源位id：必传
* @param callback CampaignCallback 回调
*/
CampaignFragment campaignFragment =
//注意：userId不得大于64位
CampaignFragment.newInstance(userId);
//注意：placeId不写死
campaignFragment.setPlaceId(placeId);
campaignFragment.setCallback(callback);

FragmentTransaction transaction = getSupportFragmentManager().beginTransaction();
transaction.add(R.id.fl_content, campaignFragment);
trransaction.commitAllowingStateLoss();

//webview 是否可以返回上一页
//campaignFragment.canGoBack()
//webview 返回上一页
//campaignFragment.goBack
```
**2.2.9.1  调用激励视频**

当用户在玩游戏过程中，出现弹窗或者条件需要用户观看视频才能继续下去的时候，SDK会调用showAd()代理方法。**返回的params中包含****广告****平台adType和对应平台的代码位id（即pid）****，****媒体方根据接收到的信息来出对应的激励视频。因此媒体方不要把代码位固定，否则活动广告运营策略无法生效。**

```plain
//回调
public class CampaignCallback {

/**
*调用激励视频
* @param params  {"requestId":"","adType":0,"pid":""}
* requestId : 请求唯一标识
* adType: 1 穿山甲激励视频，2 广点通激励视频
* pid: 媒体方广告位id
*/
public void showAd(String params) {
switch (bean.adType){
case "1"://穿山甲激励视频
loadBytedanceBannerAd(campaignFragment,bean);
break;
case "2"://广点通激励视频
loadGDTBannerAd(campaignFragment,bean);
break;
}
}
}
```
**2.2.9.2 广告数据****上报**

在用户观看完激励视频之后，需要根据对应广告平台的对应代理方法，按顺序调用以下六个对应的上报方法，上报给SDK。

* 如果出现看完视频之后，活动页面弹窗不消失。请检查以下四个方法是否调用正确。
* 如果视频加载等待时间过久，请尝试使用预加载或者添加过场动画。
* 如果视频加载失败，活动中的奖励是会正常领取的，翻倍等特殊场景下不会发放奖励.
* 如果出现视频加载失败，请检查穿山甲或者广点通的报错代理方法。查看具体错误。
```plain
//在激励视频的对应回调中调用,一定要全部调用
// requestId ： showAd 方法参数中获取

//视频加载或者曝光时调用
campaignFragment.setVideoLoad(String requestId)
// 视频点击关闭按钮时
campaignFragment.setVideoClose(String requestId)
// 视频播放失败
campaignFragment.setVideoError(String requestId）
//视频跳过时调用
campaignFragment.setVideoSkip(String requestId);
//视频曝光成功时调用
campaignFragment.setVideoExposeComplete(String requestId);
//视频点击时调用
campaignFragment.setVideoClickComplete(String requestId)
```
具体实例如下：

```plain
/**
* 广告加载成功，可在此回调后进行广告展示
**/
@Override
public void onADLoad() {
isPlayState= false;
//视频加载或者曝光时调用
campaignFragment.setVideoLoad(String requestId)
}
/**
* 激励视频广告曝光
*/
@Override
public void onADExpose() {
Log.i(TAG, "onADExpose");
campaignFragment.setVideoExposeComplete(String requestId);
}
/**
* 激励视频广告被点击
*/
@Override
public void onADClick() {
Log.i(TAG, "onADClick");
campaignFragment.setVideoClickComplete(String requestId)
}
@Override
public void onReward() {
super.onReward();
isPlayState = true;
}
/**
* 激励视频广告被关闭
*/
@Override
public void onADClose() {
Log.i(TAG, "onADClose");
if (isPlayState) {
campaignFragment.setVideoClose(String requestId);
}else {
campaignFragment.setVideoSkip(String requestId);
}
}
/**
* 广告流程出错
*/
@Override
publicvoid onError(AdError adError) {
// 视频播放失败
campaignFragment.setVideoError(String requestId);
}
```
2.2.9.3 展示Banner类型广告

**场景一：底部banner**

banner类型广告是在用户参与活动过程中弹窗提示“恭喜获得XX”时出现在游戏页面底部的位置。SDK会在该广告位有广告计划的时候通知客户端加载该广告。媒体则需要在对应的广告平台申请广告位：

1、广点通平台

底部Banner

![图片](https://uploader.shimo.im/f/IDNBi7efaEhB3sRs.png!thumbnail?fileGuid=VKGjhK6vH38tGxrP)

2、穿山甲平台

底部Banner

![图片](https://uploader.shimo.im/f/vdXxEz7OOwaiOGws.png!thumbnail?fileGuid=VKGjhK6vH38tGxrP)

```plain
/**
* Banner广告
* showBanner展示广告
* @param params {"requestId":"","adType":0,"pid":""}
* requestId : 请求唯一标识
* adType: 4 穿山甲banner，5 广点通banner
* pid: 媒体方广告位id
*/
@Override
public void showBanner(String params) {
switch (bean.adType){
case "4"://穿山甲Banner
loadBytedanceBannerAd(campaignFragment,bean);
break;
case "5"://广点通Banner
loadGDTBannerAd(campaignFragment,bean);
break;
}
}

/**
* Banner广告
* hideBanner隐藏广告
* @param params
* requestId:请求唯一标识
*/
@Override
public void hideBanner(String params) {
super.hideBanner(params);
bannerContainer.removeAllViews();
if (unifiedBannerView != null) {
unifiedBannerView.destroy();
unifiedBannerView = null;
}
}
```
**示例如下：广点通底部Banner**

```plain
unifiedBannerView = new UnifiedBannerView(Main2Activity.this,"3061343931705706", new UnifiedBannerADListener() {
@Override
public void onNoAD(AdError adError) {
Log.e(TAG, "广告加载失败: onNoAD");
campaignFragment.setBannerError(bean.requestId);
}

@Override
public void onADReceive() {
Log.e(TAG, "广告加载成功回调: onADReceive");
campaignFragment.setBannerLoad(bean.requestId);
}

@Override
public void onADExposure() {
Log.e(TAG, "广告曝光: onADExposure");
campaignFragment.setBannerExpose(bean.requestId);
}

@Override
public void onADClosed() {
Log.e(TAG, "广告关闭: onADClosed");
campaignFragment.setBannerClose(bean.requestId);
}

@Override
public void onADClicked() {
Log.e(TAG, "广告点击: onADClicked");
campaignFragment.setBannerClick(bean.requestId);
}

@Override
public void onADLeftApplication() {
Log.e(TAG, "广告点击离开 APP:onADLeftApplication");
}

@Override
public void onADOpenOverlay() {
Log.e(TAG, "广告打开浮层: onADOpenOverlay");
}

@Override
public void onADCloseOverlay() {
Log.e(TAG, "广告浮层关闭: onADCloseOverlay");
}
});
bannerContainer.addView(unifiedBannerView, getUnifiedBannerLayoutParams());
unifiedBannerView.loadAD();
```
**穿山甲底部Banner**

```plain
/**
* 加载穿山甲banner广告
* @param fragment
* @param bean
*/
private void loadBytedanceBannerAd(CampaignFragment fragment, JsBridgeBean bean) {
TTAdNative mTTAdNative = TTAdSdk.getAdManager().createAdNative(getApplicationContext());
String pid = bean.pid;
// 在demo中,为了方便测试,写死.媒体在实际应用中注意替换
pid = "945853767";
AdSlot adSlot = new AdSlot.Builder()
.setCodeId(pid) //广告位id
.setSupportDeepLink(true)
.setAdCount(1) //请求广告数量为1到3条
.setExpressViewAcceptedSize(600, 0) //期望模板广告view的size,单位dp
.build();
mTTAdNative.loadBannerExpressAd(adSlot, new TTAdNative.NativeExpressAdListener() {
//请求失败回调
@Override
public void onError(int code, String message) {
fragment.setBannerError(bean.requestId);
}
//请求成功回调
@Override
public void onNativeExpressAdLoad(List<TTNativeExpressAd> ads) {
if (ads == null || ads.size() == 0) {
return;
}
fragment.setBannerLoad(bean.requestId);
mTTAd = ads.get(0);
mTTAd.setSlideIntervalTime(30 * 1000);//设置轮播间隔 ms,不调用则不进行轮播展示
bindBytedanceBannerAdListener(fragment, bean, mTTAd);
mTTAd.render();//调用render开始渲染广告
}
});
}
/**
* 绑定穿山甲banner类型监听
*@param fragment
* @param bean
* @param ad
*/
private void bindBytedanceBannerAdListener(CampaignFragment fragment,JsBridgeBean bean, TTNativeExpressAd ad) {
ad.setExpressInteractionListener(newTTNativeExpressAd.ExpressAdInteractionListener() {
@Override
public void onAdClicked(View view, int type) {
fragment.setBannerClick(bean.requestId);
}
@Override
public void onAdShow(View view, int type) {
}
@Override
public void onRenderFail(View view, Stringmsg, int code) {
fragment.setBannerError(bean.requestId);
}
@Override
public void onRenderSuccess(View view, float width, float height) {
 fragment.setBannerExpose(bean.requestId);
//在渲染成功回调时展示广告，提升体验
bannerContainer.removeAllViews();
bannerContainer.addView(view);
}
});
//dislike设置
bindDislike(fragment, bean, ad);
if (ad.getInteractionType() != TTAdConstant.INTERACTION_TYPE_DOWNLOAD) {
return;
}
}
/**
* 穿山甲banner广告关闭事件绑定
* @param fragment
* @param bean
* @param ad
*/
private void bindDislike(CampaignFragment fragment, JsBridgeBean bean, TTNativeExpressAd ad) {
//使用默认个性化模板中默认dislike弹出样式
ad.setDislikeCallback(Main2Activity.this, new TTAdDislike.DislikeInteractionCallback() {
@Override
public void onSelected(int position, String value) {
//用户选择不喜欢原因后，移除广告展示
fragment.setBannerClose(bean.requestId);
bannerContainer.removeAllViews();
}
@Override
public void onCancel() {
}
@Override
public void onRefuse() {
}
});
}
```
**场景二：中间横幅（平台Banner2.0）**

* **适****用****场景：适用于具备导流至其他活动****的****的工具****，****具体场景为：用户点击导流按钮进入导流活动前弹窗****展示****banner广告**
* **优势：以弹窗插屏的形式深度结合导流入口场景巧妙****的****弹出banner广告，将广告前置，导流入口流量利用率更高****，用户****高参与度、高复参，提高整体收益。**

1.广点通平台

横幅

![图片](https://uploader.shimo.im/f/A3znP28cG3eHLtPS.png!thumbnail?fileGuid=VKGjhK6vH38tGxrP)

![图片](https://uploader.shimo.im/f/eNwOKHMcsfjMP2OG.png!thumbnail?fileGuid=VKGjhK6vH38tGxrP)

2穿山甲平台

横幅

![图片](https://uploader.shimo.im/f/1h9e3zxaIe2p466r.png!thumbnail?fileGuid=VKGjhK6vH38tGxrP)

```plain
/**
* Banner广告
* showBanner展示广告
* @param params {"requestId":"","adType":0,"pid":""}
* requestId : 请求唯一标识
* adType: 4 穿山甲banner，5 广点通banner
* pid: 媒体方广告位id
*/
@Override
public void showBanner(String params) {
switch (bean.adType){
case "13"://穿山甲横幅
loadBytedanceBannerAd(campaignFragment,bean);
break;
case "14"://广点通横幅
loadGDTBannerAd(campaignFragment,bean);
break;
}
}

/**
* Banner广告
* hideBanner隐藏广告
* @param params
* requestId : 请求唯一标识
*/
@Override
public void hideBanner(String params) {
super.hideBanner(params);
bannerContainer.removeAllViews();
if (unifiedBannerView != null) {
unifiedBannerView.destroy();
unifiedBannerView = null;
}
}
```
**广点通横幅：平台模板2.0**

```plain
/**
*加载广点通banner广告
 * @param fragment
* @param bean
*/
private void loadGDTBannerAd(CampaignFragment fragment, JsBridgeBean bean) {
// 创建广告
mNativeExpressAD2 = new NativeExpressAD2(getApplicationContext(), "7051968206816081", new NativeExpressAD2.AdLoadListener() {
@Override
public void onLoadSuccess(List<NativeExpressADData2> list) {
//横幅加载成功
fragment.setBannerLoad(bean.requestId);
gdtBannerRenderAd(fragment, bean, list);
}
@Override
public void onNoAD(AdError adError) {
//横幅加载失败
fragment.setBannerError(bean.requestId);
}
});
mNativeExpressAD2.setAdSize(390, 0); // 单位dp
mNativeExpressAD2.loadAd(1);
destroyAd();
bannerContainer.removeAllViews();
}
/**
 * 渲染广告
* @param adDataList
*/
private void gdtBannerRenderAd(CampaignFragment fragment, JsBridgeBean bean, List<NativeExpressADData2> adDataList) {
if (adDataList.size() > 0) {
bannerContainer.removeAllViews();
mNativeExpressADData2 = adDataList.get(0);
//横幅Banner
mNativeExpressADData2.setAdEventListener(new AdEventListener() {
@Override
public void onClick() {
Log.i(TAG, "onClick: " + mNativeExpressADData2);
//横幅1点击
fragment.setBannerClick(bean.requestId);
}
@Override
public void onExposed() {
Log.i(TAG, "onImpression: " + mNativeExpressADData2);
//横幅曝光
fragment.setBannerExpose(bean.requestId);
}
@Override
public void onRenderSuccess() {
Log.i(TAG, "onRenderSuccess: " + mNativeExpressADData2);
bannerContainer.removeAllViews();
if (mNativeExpressADData2.getAdView() !=null) {
bannerContainer.addView(mNativeExpressADData2.getAdView());
}
}
@Override
public void onRenderFail() {
Log.i(TAG, "onRenderFail: " + mNativeExpressADData2);
//横幅加载失败
fragment.setBannerError(bean.requestId);
}
@Override
public void onAdClosed() {
Log.i(TAG, "onAdClosed: " + mNativeExpressADData2);
//横幅关闭
fragment.setBannerClose(bean.requestId);
bannerContainer.removeAllViews();
mNativeExpressADData2.destroy();
}
});
mNativeExpressADData2.render();
}
}
/**
* 释放前一个 NativeExpressADData2 的资源
*/
private void destroyAd() {
if (mNativeExpressADData2 != null) {
Log.d(TAG, "destroyAD");
mNativeExpressADData2.destroy();
}
}
```
**穿山甲横幅****：**

```plain
/**
* 加载穿山甲banner广告
* @param fragment
* @param bean
*/
private void loadBytedanceBannerAd(CampaignFragment fragment, JsBridgeBean bean) {
TTAdNative mTTAdNative = TTAdSdk.getAdManager().createAdNative(getApplicationContext());
String pid = bean.pid;
// 在demo中,为了方便测试,写死.媒体在实际应用中注意替换
pid = "945853767";
AdSlot adSlot = new AdSlot.Builder()
.setCodeId(pid) //广告位id
.setSupportDeepLink(true)
.setAdCount(1) //请求广告数量为1到3条
.setExpressViewAcceptedSize(600, 0) //期望模板广告view的size,单位dp
.build();
mTTAdNative.loadBannerExpressAd(adSlot, new TTAdNative.NativeExpressAdListener() {
//请求失败回调
@Override
public void onError(int code, String message) {
fragment.setBannerError(bean.requestId);
}
//请求成功回调
@Override
public void onNativeExpressAdLoad(List<TTNativeExpressAd> ads) {
if (ads == null || ads.size() == 0) {
return;
}
fragment.setBannerLoad(bean.requestId);
mTTAd = ads.get(0);
mTTAd.setSlideIntervalTime(30 * 1000);//设置轮播间隔 ms,不调用则不进行轮播展示
bindBytedanceBannerAdListener(fragment, bean, mTTAd);
mTTAd.render();//调用render开始渲染广告
}
});
}
/**
* 绑定穿山甲banner类型监听
* @param fragment
* @param bean
* @param ad
*/
private void bindBytedanceBannerAdListener(CampaignFragment fragment, JsBridgeBean bean, TTNativeExpressAd ad) {
ad.setExpressInteractionListener(new TTNativeExpressAd.ExpressAdInteractionListener() {
@Override
public void onAdClicked(View view, int type) {
fragment.setBannerClick(bean.requestId);
}
@Override
public void onAdShow(View view, int type) {
}
@Override
public void onRenderFail(View view, String msg, int code) {
fragment.setBannerError(bean.requestId);
}
@Override
public void onRenderSuccess(View view, float width, float height) {
fragment.setBannerExpose(bean.requestId);
//在渲染成功回调时展示广告，提升体验
bannerContainer.removeAllViews();
bannerContainer.addView(view);
}
});
//dislike设置
bindDislike(fragment, bean, ad);
if (ad.getInteractionType() != TTAdConstant.INTERACTION_TYPE_DOWNLOAD) {
return;
}
}
/**
* 穿山甲banner广告关闭事件绑定
* @param fragment
* @param bean
* @param ad
*/
private void bindDislike(CampaignFragment fragment, JsBridgeBean bean, TTNativeExpressAd ad) {
//使用默认个性化模板中默认dislike弹出样式
ad.setDislikeCallback(Main2Activity.this, new TTAdDislike.DislikeInteractionCallback() {
@Override
public void onSelected(int position, String value) {
//用户选择不喜欢原因后，移除广告展示
fragment.setBannerClose(bean.requestId);
bannerContainer.removeAllViews();
}
@Override
public void onCancel() {
}
@Override
public void onRefuse() {
}
});
}
```
**2.2.9.4 素材配置**

用于媒体在客户端调用小满提供的入口素材，为避免媒体客户端频繁发版，建议媒体将有可能配置小满营销活动工具的入口均支持调用小满入口素材，以下两种调用方式均可实现：

**1）客户端直接获取小满入口素材URL（推荐）**

```plain
MaterialTm materialTm = new MaterialTm();
/**
* 请求素材地址
* @param consumerId 用户id
* @param placeId : 媒体id
* @param callback
*/
materialTm.loadMaterialData(consumerId, placeId, new MaterialTm.Callback() {
@Override
public void onSuccess(String imgUrl, String placeMateId) {
//imgUrl 图片链接
//placeMateId 素材id
}

@Override
public void onFailure(String code, String errmsg) {

}
});
```
**2） 服务端通过调用小满入口素材URL**

**详细对接请看2.4.1步骤**

#### **2.2.10 设置扩展字段(****特殊需求，一般不需要设置****)**

```plain
/**
* 媒体user类型 0未知 1新用户 2老用户
* consumerType : "1"
*/
//该方法一定要在campaignFragment.setPlaceId(placeId);之前调用
public void setExtData(String mextData) {
}
```
#### 2.2.11 返回上一级页面必须调用

**使用场景：**是在用户退出的时候做一个拦截，提醒用户是否有其他需要，是就留下，否就返回。

**目****的****：**可有效提升用户广告位点击次数，提高ecpm，进一步提升媒体广告收益。

```plain
campaignFragment.backButtonClick();
```
示例如下：

```plain
//媒体自定义导航栏
image.setOnClickListener(new View.OnClickListener() {
@Override
public void onClick(View v) {
if (campaignFragment != null) {
campaignFragment.backButtonClick(new CampaignFragment.CallBack() {
@Override
public void onSuccess(String jsonData) {
Main2Activity.super.onBackPressed();
}

@Override
public void onFailure(String code, String errmsg) {

}
});
}
}
});
//物理返回按键
@Override
public void onBackPressed() {
if (campaignFragment != null) {
campaignFragment.backButtonClick(new CampaignFragment.CallBack() {
@Override
public void onSuccess(String jsonData) {
Main2Activity.super.onBackPressed();
}
@Override
public void onFailure(String code, String errmsg) {

}
});
} else {
super.onBackPressed();
}
}
```
### **2.4 数据上报**

#### **2.4.1 数据上报字段与目的**

**2.4.1.1 入口素材**

资源位入口，旨在帮助第三方接入平台快速获取入口素材,统计事件，通信使用 HTTP+JSON格式，采用GET/POST方式。**使用之前请与我方运营同学沟通配置**。

请求接口地址：[h](https://saas.hixiaoman.com/placeEnter)[ttps](https://saas.hixiaoman.com/placeEnter)[:](https://saas.hixiaoman.com/placeEnter)[//saas.hixiaoman.com/plac](https://saas.hixiaoman.com/placeEnter)[e](https://saas.hixiaoman.com/placeEnter)[Enter](https://saas.hixiaoman.com/placeEnter)

请求方式：GET或者POST

请求参数：

|参数<br>|类型<br>|是否必须<br>|说明<br>|
|:----|:----|:----|:----|:----|:----|:----|:----|
|appKey<br>|String<br>|是<br>|媒体的appKey<br>|
|placeId<br>|String<br>|是<br>|媒体资源位入口id<br>|
|consumerId<br>|String<br>|否<br>|媒体用户唯一标示，通常为用户id<br>|
0-H5
请求样例：

```plain
https://saas.hixiaoman.com/placeEnter?appKey=zkmt-hhhh_lrkrvf&placeId=1800&consumerId=33432
```
返回参数：

|参数<br>|类型<br>|必填<br>|说明<br>|
|:----|:----|:----|:----|:----|:----|:----|:----|
|code<br>|int<br>|是<br>|系统响应码，0为正常，其他为异常。详⻅系统响应码表<br>|
|desc<br>|String<br>|否<br>|系统响应描述<br>|
|data<br>|Object<br>|是<br>|数据<br>|


data参数结构：

|参数<br>|类型<br>|必填<br>|说明<br>|
|:----|:----|:----|:----|:----|
|materialPath|String|是<br>|素材地址|
|placeMaterialId<br>|String<br>|是<br>|素材id<br>|
|materialId<br>|String<br>|是<br>|素材库id<br>|
|~~showUrl~~|String|是<br>|素材曝光上报地址(废弃)|
|~~clickUrl~~|String|是<br>|素材点击上报地址(废弃)|


返回示例：

```plain
{
code: "0",
desc: "成功",
data: {
materialPath: "https://saas.hixiaoman.com/hello.png",
  placeMaterialId："123"
 }
}
```
**2.4.1.2 入口图片曝光点击上报（****必须调****用****）**

为了更好的运营资源位，提高活动的点击率，我们希望搜集入口的曝光和点击数据，以便及时更换入口素材，提升活动收益。

请求接口地址：[https://saas.hixiaoman.com/userLog/placeLogReport](https://saas.hixiaoman.com/userLog/placeLogReport)

请求方式：POST

Content-Type：application/json

请求参数：

|参数<br>|类型<br>|是否必须<br>|说明<br>|
|:----|:----|:----|:----|:----|:----|:----|:----|
|appKey<br>|String<br>|是<br>|媒体Appkey<br>|
|ip<br>|String<br>|否<br>|IP地址<br>|
|ua<br>|String<br>|是<br>|webView的UA<br>|
iOS：用IDFA
请求示例

```plain
{
"appKey": "媒体的appKey",
"ip": "192.168.0.1",
"ua": "Mozilla/5.0 (Linux; Android 10; TAS-AN00 Build/HUAWEITAS-AN00; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/78.0.3904.108 Mobile Safari/537.36",
"deviceId": "test0c967722f0d0c52f",
"consumerId": "test5c49c89d5b8d47878ba9a3266a602acb",
"osType": "ios",
"logType": 0,
"placeId": 1,
"placeMaterialId": 1,
"materialId": 1
}
```
返回参数：

|参数<br>|类型<br>|是否必须<br>|说明<br>|
|:----|:----|:----|:----|:----|:----|:----|:----|
|code<br>|String<br>|是<br>|0-请求成功<br>|
|desc<br>|String<br>|是<br>|请求结果<br>|
true成功
**2.4.1.3**入口图片的批量曝光上报（多入口，符合使用场景可调用）

为了更好的运营资源位，提高活动的点击率，我们希望搜集入口的曝光和点击数据，以便及时更换入口素材，提升活动收益。

**使用场景：**当APP当前页面有多个资源位（或入口素材）曝光的时候，需要一次上报多个入口曝光数据，可以使用该接口。

请求接口地址：[https://saas.hixiaoman.](https://saas.hixiaoman.com/userLog/placeLogReport/batchShow)[c](https://saas.hixiaoman.com/userLog/placeLogReport/batchShow)[om/userLog/placeLogReport/batchShow](https://saas.hixiaoman.com/userLog/placeLogReport/batchShow)

请求方式：POST

Content-Type：application/json

请求参数：

|参数<br>|类型<br>|是否必须<br>|说明<br>|
|:----|:----|:----|:----|:----|:----|:----|:----|
|appKey<br>|String<br>|是<br>|媒体Appkey<br>|
|ip<br>|String<br>|否<br>|IP地址<br>|
|ua<br>|String<br>|是<br>|webView的UA<br>|
iOS：用IDFA
placeMaterialObject

|placeId<br>|String<br>|是<br>|资源位ID<br>|
|:----|:----|:----|:----|:----|:----|:----|:----|
|placeMaterialId<br>|String<br>|是<br>|素材ID。如果使用自己的入口素材图片，可以不填<br>|
|materialId<br>|String<br>|是<br>|素材库ID。如果使用自己的入口素材图片，可以不填<br>|


请求示例

```plain
{
"appKey": "媒体的appKey",
 "ip": "192.168.0.1",
"ua": "Mozilla/5.0 (Linux; Android 10; TAS-AN00 Build/HUAWEITAS-AN00; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/78.0.3904.108 Mobile Safari/537.36",
"deviceId": "test0c967722f0d0c52f",
"consumerId": "test5c49c89d5b8d47878ba9a3266a602acb",
"osType": "ios",
"placeMaterials":[
{
"placeId": 1,
"placeMaterialId": 1,
"materialId": 1
},
{
"placeId": 2,
"placeMaterialId": 2,
"materialId": 2
}
]
}
```
返回参数：

|参数<br>|类型<br>|是否必须<br>|说明<br>|
|:----|:----|:----|:----|:----|:----|:----|:----|
|code<br>|String<br>|是<br>|0-请求成功<br>|
|desc<br>|String<br>|是<br>|请求结果<br>|
true成功
**入口位置数据定义：**

|**入口位置**|**有效曝光定义**|有效**点击定义**|
|:----|:----|:----|:----|:----|:----|
|banner<br>|轮播到用户可视区且连续停留时长超过3秒则有效曝光1次<br>|入口被用户点击的行为次数<br>|
|icon<br>|展示在用户可视区且连续停留时长超过3秒则有效曝光1次<br>|入口被用户点击的行为次数<br>|
|tab<br>|用户点击tab按钮，入口请求加载成功后到可视区则有效曝光1次<br>|入口被用户点击的行为次数<br>|
|弹窗<br>|展示在用户可视区则有效曝光1次<br>|入口被用户点击的行为次数<br>|
|浮标<br>|展示在用户可视区且连续停留时长超过3秒则有效曝光1次<br>|入口被用户点击的行为次数<br>|
|文字链<br>|①固定的：展示在用户可视区则有效曝光1次<br>②滚动的：轮播到用户可视区且连续停留时长超过3秒则有效曝光1次<br>|入口被用户点击的行为次数<br>|



**Q&A：**

* **问1：什么是用户可视区**

答1：用户滑动or点击到当前APP可见的页面区域，看到推荐的资源位入口且资源位至少露出一个banner或icon或按钮或卡片的高度。

* **问2：如果用户重复滑动，那么在满足曝光条件的基础上，曝光次数要一直增加么？**

答2：一般这个情况下是不要重复上报的。因为我们需要曝光数据的目的是为了衡量用户对推荐区域物品的感兴趣程度，所以短时间内物品对用户产生的影响，只要保证足够的时间去接受物品信息，那么这个影响可以认为会持续一段时间。所以短时间内产生的转化，可以认为是第一次看到物品的效果，重复上报会对指标计算产生影响。

* **问3：如果这种情况下不增加，那什么情况下需要重复上报？**

答3：正如上个问题的回答一样，其实我们主要衡量的是推荐物品对用户的效果，所以每当推荐区域重新请求一次接口的时候（连续停留时长中断），就认为推荐物品会变，那么在符合曝光条件的情况下，就需要重新上报。

## **3.回调信息说明**

## **4.接入测试**

### **4.1 iOS**

### **4.2 And****r****oid**

## **5.常见集成问题处理**

### **5.1 为什么切换用户Id后，游戏次数没有重置？**

答：本活动不建议在一个手机上登录多个账号。如果想切换账号，请在退出当前账号的时候，安卓设备清理cookie和sp，iOS设备清理cookie。

安卓清理cookie和sp：

```plain
public static void clear(Context context) {
Intent intent = new Intent();
intent.setAction(Settings.ACTION_APPLICATION_DETAILS_SETTINGS);
intent.setData(Uri.fromParts("package", context.getPackageName(), null));
context.startActivity(intent);
}
// 选择清除全部数据
```
iOS清理cookie：

```plain
[[WKWebsiteDataStore defaultDataStore] fetchDataRecordsOfTypes:[NSSet setWithObjects:WKWebsiteDataTypeCookies, nil] completionHandler:^(NSArray<WKWebsiteDataRecord *> * _Nonnull records) {
[[WKWebsiteDataStore defaultDataStore] removeDataOfTypes:[NSSet setWithObjects:WKWebsiteDataTypeCookies, nil] forDataRecords:records completionHandler:^{

}];
}];
```
### **5.2 入口图片曝光不容易单独埋点，怎么办？**

答：如果入口图片的曝光不容易单独埋点，可以在入口素材所在页面加载完成完成的时候调用一下入口素材的曝光接口。

## **6.错误码说明**

无法复制加载中的内容

## **7.更新日志**

### **7.1 ios（版本倒序）**

无法复制加载中的内容

### **7.2 Android（版本倒序）**

无法复制加载中的内容





