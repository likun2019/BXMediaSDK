# BXMediaSDK

文档版本：1.3.7。

隐私协议地址：[https://web.hixiaoman.com/app-h5/1.0.0/privacy.html](https://web.hixiaoman.com/app-h5/1.0.0/privacy.html)

## 业务流程图：

## ![图片](https://uploader.shimo.im/f/dAkEvvPSDgAtwWEy.png!thumbnail?fileGuid=apVai8DrpEcIWA4H)


## **1 账号申请**

联系商务在⼩满系统申请媒体账号获取appKey、secretKey、placeId;

## **2 ios对接**

### **2.1 系统版本限制**

* SDK 最低兼容的系统版本为 iOS 9.0。
* SDK获取隐私信息： IDFA
### **2.2 集成⽅式**

本 SDK 可通过 CocoaPods 集成，在⼯程的 Podfifile ⾥⾯添加以下代码：

```plain
pod 'BXMediaSDK', '1.3.7.1' 
```
保存并执⾏ pod install，然后⽤后缀为.xcworkspace 的⽂件打开⼯程。
* 如果发现没有最新版本，请 使用pod repo update 命令更新pod库。
* 如果不支持pod方式或者有其他特殊需要，请与我方技术人员联系。
### **2.3 环境配置**

* 需在 Build Settings - Linking - Other Linker Flags 处添加上-ObjC 。
* 在iOS14以上，IDFA需要申请权限。
* 需要在 info.plist 中添加⼀下属性支持http请求：
```xml
<key>NSAppTransportSecurity</key> 
 <dict> 
 <key>NSAllowsArbitraryLoads</key> 
 <true/> 
  </dict> 
```
### 2.4 初始化SDK

引⼊头⽂件：

```plain
#import <BXMediaSDK/BXMediaCenterSDK.h> 
```
在⼯程 AppDelegate.m 的 application:didFinishLaunchingWithOptions:⽅法中初始化：
```objectivec
 - (BOOL)application:(UIApplication *)application 
didFinishLaunchingWithOptions:(NSDictionary *)launchOptions { 
 //初始化 
 [BXMediaCenterSDK setAppKey:@"appkey" secretKey:@"secretkey"]; 
 return YES; 
 } 
```
### **2.5 获取视图**

该方法会返回一个UIView视图。用法和普通UIView视图的用法一样。

* 注意：视图不能重新改变frame。要在初始化的时候设置好。
* placeId为动态参数，建议由服务端下发给客户端，客户端不要写成固定。方便资源位的运营，适应更多场景。
```objectivec
- (void)viewDidLoad { 
     [super viewDidLoad]; 
     BXMediaCenterSDK *center = [[BXMediaCenterSDK alloc] init]; 
     center.delegate = self; 
     self.center = center;
     UIView *webView = [center getViewWithFram:self.view.frame 
     thirdUserId:@"userId" placeId:@"placeId"]; 
     [self.view addSubview:webView]; 
 } 
```
#### **2.5.1 调⽤激励视频**

当用户在玩游戏过程中，出现弹窗或者条件需要用户观看视频才能继续下去的时候，SDK会调用以下代理方法。**返回的model中包含广告平台adType和对应平台的代码位id（即pid），媒体方根据接收到的信息来出对应的激励视频。因此媒体方不要把代码位固定，否则活动广告运营策略无法生效。**

```objectivec
 - (void)showVideoAd:(BXMediaModel *)model{ 
 // TODO: 显示激励视频广告。model中的具体参数，参照代码中的注释
 } 
```
具体使用如下：
```objectivec
- (void)showVideoAd:(BXMediaModel *)model{
    self.adId = model.requestId;
// 根据adType值判断是哪个平台的，然后获取mode中的pid来加载广告。这里用的是穿山甲例子，穿山甲的具体用法以穿山甲最新文档为准。
    if (model.adType == 1) {
        BURewardedVideoModel *rewardModel = [[BURewardedVideoModel alloc] init];
        rewardModel.userId = self.userId;
        self.rewardedVideoAd = [[BURewardedVideoAd alloc] initWithSlotID:model.pid rewardedVideoModel:rewardModel];
        self.rewardedVideoAd.delegate = self;
        [self.rewardedVideoAd loadAdData];
    }   
}
```
#### **2.5.2 数据上报**

在用户观看完激励视频之后，需要根据对应广告平台的对应代理方法，调用以下三个对应的上报方法，上报给SDK。

* 如果出现看完视频之后，活动页面弹窗不消失。请检查以下三个方法是否调用正确。
* 如果视频加载等待时间过久，请尝试使用预加载或者添加过场动画。
* 如果视频加载失败，活动中的奖励是会正常领取的，只有在翻倍等特殊场景下才不会发放奖励，请知晓。
* 如果激励视频拉取不到，请检查穿山甲或者广点通的报错代理方法，查看具体错误。
```objectivec
 /// 视频加载成功上报
- (void)exportVideoLoadSuccess:(NSString *)adId;
/// 视频曝光成功上报
- (void)exportVideoExposeSuccess:(NSString *)adId;
/// 视频广告点击上报
- (void)exportVideoClick:(NSString *)adId;
/// 视频播放完成,点击关闭按钮时上报
- (void)exportVideoPlaySuccessWithId:(NSString *)adId;
/// 视频加载播放失败上报
- (void)exportVideoPlayFaildWithId:(NSString *)adId;
/// 跳过视频
/// 视频未播放完成时已出现关闭按钮,用户点击关闭时调用
- (void)exportVideoSkipWithId:(NSString *)adId;
```
穿山甲具体使用如下：
```objectivec
- (void)nativeExpressRewardedVideoAdDidLoad:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd{
    NSLog(@"激励视频广告-物料-加载成功");
    [self.center exportVideoLoadSuccess:self.adId];
}
- (void)nativeExpressRewardedVideoAdViewRenderSuccess:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd{
    NSLog(@"激励视频广告-展示");
    [self.center exportVideoExposeSuccess:self.adId];
}
- (void)nativeExpressRewardedVideoAdDidClickSkip:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd{
    NSLog(@"激励视频广告-跳过");
    [self.center exportVideoSkipWithId:self.adId];
}
- (void)nativeExpressRewardedVideoAdDidClose:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd{
    NSLog(@"视频关闭");
    [self.center exportShareSuccessWithId:self.adId];
}
- (void)nativeExpressRewardedVideoAd:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd didFailWithError:(NSError *_Nullable)error{
    NSLog(@"视频或素材加载失败: %@",error);
    [self.center exportVideoPlayFaildWithId:self.adId];
}
- (void)nativeExpressRewardedVideoAdDidClick:(BUNativeExpressRewardedVideoAd *)rewardedVideoAd{
    NSLog(@"激励视频广告-点击");
    [self.center exportVideoClick:self.adId];
}
```
广点通的回调需要注意判断视频是否播放完成：
```objectivec
- (void)gdt_rewardVideoAdVideoDidLoad:(GDTRewardVideoAd *)rewardedVideoAd{    
    NSLog(@"视频数据下载成功回调，已经下载过的视频会直接回调");
    self.isPlaySuccess = NO;
    if (self.rewardVideoAd.isAdValid) {
        [self.rewardVideoAd showAdFromRootViewController:self];
        [self.center exportVideoLoadSuccess:self.adId];
    }
}
- (void)gdt_rewardVideoAdDidExposed:(GDTRewardVideoAd *)rewardedVideoAd{
    NSLog(@"视频广告曝光回调");
    [self.center exportVideoExposeSuccess:self.adId];
}
- (void)gdt_rewardVideoAdDidClose:(GDTRewardVideoAd *)rewardedVideoAd{
    NSLog(@"视频播放页关闭回调");
    if (self.isPlaySuccess) {
        [self.center exportVideoPlaySuccessWithId:self.adId];
    }else{
        NSLog(@"调用跳过方法");
        [self.center exportVideoSkipWithId:self.adId];
    }    
}
- (void)gdt_rewardVideoAd:(GDTRewardVideoAd *)rewardedVideoAd didFailWithError:(NSError *)error{
    NSLog(@"视频广告各种错误信息回调 %@",error);
    [self.center exportVideoPlayFaildWithId:self.adId];
}
- (void)gdt_rewardVideoAdDidRewardEffective:(GDTRewardVideoAd *)rewardedVideoAd{
    NSLog(@"视频广告播放达到激励条件回调");
    self.isPlaySuccess = YES;
}
- (void)gdt_rewardVideoAdDidClicked:(GDTRewardVideoAd *)rewardedVideoAd{
    NSLog(@"视频广告点击");
    [self.center exportVideoClick:self.adId];
}
```
### **2.6 获取⼊⼝素材**

```plain
//引入头文件 
 #import <BXMediaSDK/BXMediaMaterialManager.h>
```
#### **2.6.1 获取⼊⼝素材**

**1）客户端直接获取小满入口素材URL（推荐）**

SDK提供入口素材图片。对接前，需要与我方运营沟通，让运营人员在后台配置入口图片。

```objectivec
[BXMediaMaterialManager getEntranceMaterialsWithAppkey:@"appkey" 
placId:@"placeId" thirdUserId:"userId" success:^(BXMMaterialModel *model) 
 { 
 // 获取到素材url。model中的具体参数，参照代码中的注释
 } fail:^(NSString *error) { 
 }]; 
```
**2） 服务端通过调用小满入口素材URL**
**详细对接请看4步骤****。**

**2.7 ⼊⼝上报****必须调用**

不管有没有使用获取入口素材图片的方法，**这两个方法必须调用**。目的是为了更好的统计入口点击率，优化活动的运营策略，提升活动点击率。

#### **2.7.1 ⼊⼝展示上报**

* **在入口图片加载完成之后就调用。**
```objectivec
[BXMediaMaterialManager entranceShowEventTrackingWithPlaceId:@"资源位ID" thirdUserId:@"用户UserID" placeMateId:@"素材ID"];
```
如果是自定义素材，没有使用SDK的接口获取:
```objectivec
[BXMediaMaterialManager entranceShowEventTrackingWithPlaceId:@"资源位ID" thirdUserId:@"用户UserID" placeMateId:@""];
```
#### **2.7.2 ⼊⼝点击上报**

* **在点击入口图片素材进入活动页面的时候调用。**
```objectivec
[[BXMediaMaterialManager entranceClickEventTrackingWithThirdUserId:@"用户userID" placeMateId:@"素材Id"];
```
如果是自定义素材，没有使用SDK的接口获取:
```objectivec
[BXMediaMaterialManager entranceClickEventTrackingWithPlaceId:@"资源位ID" thirdUserId:@"用户UserID" placeMateId:@""];
```
