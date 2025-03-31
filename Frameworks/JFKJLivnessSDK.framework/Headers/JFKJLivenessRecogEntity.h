//
//  JFKJLivenessRecogEntity.h
//  JFKJLivnessSDK
//
//  Created by on 2024/5/18.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, JFKJLivenessType) {
    JFKJLivenessTypeAction,  // 动作活体
    JFKJLivenessTypeSilence  // 静默活体
};

typedef NS_ENUM(NSInteger, JFKJRecogActionType) {
    JFKJRecogActionEye = 0,         // 眨眼
    JFKJRecogActionMouth = 1,       // 张嘴
    JFKJRecogActionHeadLeft = 2,    // 左摇头
    JFKJRecogActionHeadRight = 3,   // 右摇头
    JFKJRecogActionHeadUp = 4,      // 抬头
    JFKJRecogActionHeadDown = 5     // 点头
};
NS_ASSUME_NONNULL_BEGIN

@interface JFKJLivenessRecogEntity : NSObject
// 分配的token 
@property (nonatomic, copy) NSString *app_token;
// 是否展示引导页
@property (nonatomic, assign) BOOL showGuidePage;

// 引导页用户名
@property (nonatomic, copy) NSString *userDisplayName;

// 是否展示结果页
@property (nonatomic, assign) BOOL showResultPage;

// 结果页按钮文案（默认值：完成）
@property (nonatomic, copy)   NSString *riskPageBtnText;

// 是否是静默活体
@property (nonatomic, assign) JFKJLivenessType isStillLiveness;

// 活体动作序列
@property (nonatomic, strong) NSArray<NSNumber *> *ActionTypeArray;

// 活体验证需要通过的数目要求
@property (nonatomic, assign) NSInteger recogActionPassNum;
// 是否同意隐私，必须传YES才会继续流程，否则直接返回
@property (nonatomic, assign) BOOL agreePrivacy;

@property (nonatomic, assign) BOOL isDebug;

#pragma mark 协议展示

// 授权协议文案
@property (nonatomic, copy) NSString *protocolContent;

// 授权协议前缀
@property (nonatomic, copy) NSString *protocolPrefix;

// 授权协议弹窗前缀
@property (nonatomic, copy) NSString *protocolTipPrefix;

// 授权协议弹窗前缀
@property (nonatomic, copy) NSString *protocols;

// 网络请求域名
@property (nonatomic, copy) NSString *dxmHost;

// 网络请求域名
@property (nonatomic, copy) NSString *dxmBackupHost;

// 网络请求域名
@property (nonatomic, copy) NSString *dxmDataSinkHost;

@end

NS_ASSUME_NONNULL_END
