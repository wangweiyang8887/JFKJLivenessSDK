//
//  JFKJLivenessSDK.h
//  JFKJLivnessSDK
//
//  Created by  on 2024/5/18.
//

#import <UIKit/UIKit.h>
#import <JFKJLivnessSDK/JFKJLivenessRecogEntity.h>
#import <JFKJLivnessSDK/JFKJFaceResponseModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^JFKJLivenessCompletionBlock)(JFKJFaceResponseModel *resultModel);


@interface JFKJLivenessSDK : NSObject

+ (instancetype)sharedManager;

/*
 初始化
 需在App启动后调用
 */
- (void)initFaceAuth;

- (void)startLivenessRecognize:(JFKJLivenessRecogEntity *)livenessModel withController:(UIViewController *)controller withCompletionBlock:(JFKJLivenessCompletionBlock)completionBlock;

+ (NSString *)getSDKVersion;


@end

NS_ASSUME_NONNULL_END
